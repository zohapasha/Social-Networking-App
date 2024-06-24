# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ZOHA_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ZOHA_autogen.dir\\ParseCache.txt"
  "ZOHA_autogen"
  )
endif()
