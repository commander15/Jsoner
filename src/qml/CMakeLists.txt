qt_add_qml_module(JsonerQml
    URI Jsoner
    VERSION   "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}"
    TYPEINFO  Jsoner.qmltypes
    QML_FILES JsonListModel.qml JsonListModelRole.qml
    SOURCES   jsonlistmodel.h jsonlistmodel.cpp
    PLUGIN_TARGET JsonerQml
)

target_link_libraries(JsonerQml PRIVATE Qt::Qml)

qt_query_qml_module(JsonerQml
    QMLDIR    QMLDIR_FILE
    TYPEINFO  TYPEINFO_FILE
    QML_FILES QML_SOURCES
)

set(QML_DIR qml/Jsoner)

install(TARGETS JsonerQml
    EXPORT JsonerTargets
    ARCHIVE DESTINATION ${QML_DIR}
    LIBRARY DESTINATION ${QML_DIR}
    RUNTIME DESTINATION ${QML_DIR}
)
