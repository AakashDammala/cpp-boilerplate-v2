# Any C++ source files needed to build this target (shell-app).
add_executable(shell-app
  # list of source cpp files:
  main.cpp
  )

# Any include directories needed to build this target.
# Note: we do not need to specify the include directories for the
# dependent libraries, they are automatically included.
target_include_directories(shell-app PUBLIC
  # list inclue directories:
  ${CMAKE_SOURCE_DIR}/include
)

# Any dependent libraires needed to build this target.
target_link_libraries(shell-app PUBLIC -static
  # list of libraries
  myLib1
  myLib2
  )

  
add_executable(problem9_4
  problem9_4.cpp
  )

target_include_directories(problem9_4 PUBLIC
  ${CMAKE_SOURCE_DIR}/include
)

add_executable(problem9_5
  problem9_5.cpp
  )

target_include_directories(problem9_5 PUBLIC
  ${CMAKE_SOURCE_DIR}/include
)