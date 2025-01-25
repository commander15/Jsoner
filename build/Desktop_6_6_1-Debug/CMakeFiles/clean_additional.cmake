# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "src/lib/CMakeFiles/Jsoner_autogen.dir/AutogenUsed.txt"
  "src/lib/CMakeFiles/Jsoner_autogen.dir/ParseCache.txt"
  "src/lib/Jsoner_autogen"
  "src/qml/CMakeFiles/JsonerQml_autogen.dir/AutogenUsed.txt"
  "src/qml/CMakeFiles/JsonerQml_autogen.dir/ParseCache.txt"
  "src/qml/JsonerQml_autogen"
  )
endif()
