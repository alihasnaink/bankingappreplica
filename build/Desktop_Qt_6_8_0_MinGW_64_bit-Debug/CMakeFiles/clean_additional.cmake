# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BankingAppReplica_autogen"
  "CMakeFiles\\BankingAppReplica_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BankingAppReplica_autogen.dir\\ParseCache.txt"
  )
endif()
