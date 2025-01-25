set(JSONER_MODULES Core)
add_subdirectory(lib)

if (JSONER_BUILD_QML)
    list(APPEND JSONER_MODULES Qml)
    add_subdirectory(qml)
endif()

include(CMakePackageConfigHelpers)

configure_package_config_file(JsonerConfig.cmake.in ${CMAKE_CURRENT_SOURCE_DIR}/JsonerConfig.cmake
    INSTALL_DESTINATION lib/cmake/Jsoner
)

write_basic_package_version_file(JsonerConfigVersion.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
    ARCH_INDEPENDENT
)

install(FILES
    JsonerConfig.cmake JsonConfigVersion.cmake
    DESTINATION lib/cmake/Jsoner
)

install(EXPORT JsonerTargets
    NAMESPACE Jsoner
    DESTINATION lib/cmake/Jsoner
)
