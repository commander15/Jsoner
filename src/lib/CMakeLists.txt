add_library(Jsoner)

configure_file(config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h @ONLY)

target_headers(Jsoner
    PUBLIC
        global.h config.h debug.h
        object.h array.h
        model/itemmodel.h
        model/tablemodel.h
        model/listmodel.h
    PRIVATE
        model/itemmodel_p.h
        model/tablemodel_p.h
        model/listmodel_p.h
)

target_sources(Jsoner
    PRIVATE
        debug.cpp
        object.cpp array.cpp
        model/itemmodel.cpp
        model/tablemodel.cpp
        model/listmodel.cpp
)

target_link_libraries(Jsoner PUBLIC Qt::Core)

generate_target_headers(Jsoner FOLDER Jsoner)

install(TARGETS Jsoner
    EXPORT JsonerTargets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
    PUBLIC_HEADER DESTINATION include/Jsoner
)
