cmake_minimum_required(VERSION 3.8)
project(kolokwium)

macro(defProblem name source)
  add_executable("${name}" "${source}" "src/tests_main.cpp")
  set_target_properties("${name}" PROPERTIES CXX_STANDARD 17)
  target_include_directories("${name}" PUBLIC include)
endmacro()

defProblem(zad1 src/zad1.cpp)
defProblem(zad2 src/zad2.cpp)
defProblem(zad3 src/zad3.cpp)
defProblem(zad4 src/zad4.cpp)
defProblem(zad5 src/zad5.cpp)
