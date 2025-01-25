option(JSONER_FORCE_FETCH OFF "Update Jsoner by fetching the latest version during each build")
option(JSONER_USE_DEV     OFF "Use development version of Jsoner")

# Default branch
if (NOT JSONER_USE_DEV)
    set(JSONER_BRANCH "main")
else()
    set(JSONER_BRANCH "dev")
endif()

if (Jsoner_FIND_VERSION_MAJOR)
    set(JSONER_BRANCH "jsoner-${Jsoner_FIND_VERSION_MAJOR}")
endif()

# Check if Jsoner is already found or installed
if (NOT JSONER_FORCE_FETCH)
    find_package(Jsoner ${Jsoner_VERSION} COMPONENTS "${Jsoner_FIND_COMPONENTS}" PATHS ${CMAKE_BINARY_DIR})
else()
    set(Jsoner_FOUND FALSE)
endif()

# If Jsoner is found, check for ZLIB (optional dependency or requirement for the project)
if (NOT Jsoner_FOUND OR JSONER_FORCE_FETCH)
    # If Jsoner is not found, download and build it using ExternalProject
    set(JSONER_REPO "https://github.com/commander15/Jsoner")
    set(JSONER_GIT  "${JSONER_REPO}.git")

    set(ARGS)
    foreach (Component ${Jsoner_FIND_COMPONENTS})
        string(TOUPPER ${Component} COMPONENT)
        list(APPEND ARGS
            -DJSONER_BUILD_${COMPONENT}=TRUE
            -DJSONER_SUPPORT_${COMPONENT}=TRUE
        )
    endforeach()

    include(ExternalProject)
    ExternalProject_Add(Jsoner
        GIT_REPOSITORY ${JSONER_GIT}
        GIT_TAG        origin/${JSONER_BRANCH}
        CMAKE_ARGS
            -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}
            -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
            -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
            -DCMAKE_CXX_FLAGS_INIT=${CMAKE_CXX_FLAGS_INIT}
            -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
            -DCMAKE_GENERATOR=${CMAKE_GENERATOR}
            -DCMAKE_PREFIX_PATH=${CMAKE_PREFIX_PATH}
            -DQT_QMAKE_EXECUTABLE=${QT_QMAKE_EXECUTABLE}
            ${ARGS}
    )

    ExternalProject_Add_Step(Jsoner preparation
        COMMAND ${CMAKE_COMMAND} -E echo "🚨 Fetching and building Jsoner from ${JSONER_BRANCH}..."
        COMMAND ${CMAKE_COMMAND} -E echo "${JSONER_REPO}"
        DEPENDERS mkdir
    )

    ExternalProject_Add_Step(Jsoner finalization
        COMMAND ${CMAKE_COMMAND} -E echo "🚀 Jsoner is good to go! May your builds be smooth and your bugs be few!"
        DEPENDEES install
    )
endif()
