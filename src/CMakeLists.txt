
find_package(BISON)
find_package(FLEX)
set(BISON_Socrates_COMPILE_FLAGS t)
BISON_TARGET(SocratesParser parser.y ${CMAKE_CURRENT_BINARY_DIR}/soc_parser.tab.cc )
FLEX_TARGET(SocratesScanner lexer.l  ${CMAKE_CURRENT_BINARY_DIR}/soc_lexer.yy.cc)
ADD_FLEX_BISON_DEPENDENCY(SocratesScanner SocratesParser)
 include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR} )
 add_executable(socrates main.cpp SocratesAST.hpp Compiler.hpp Compiler.cpp soc_driver.cpp
    ${BISON_SocratesParser_OUTPUTS}
    ${FLEX_SocratesScanner_OUTPUTS}

 )

 target_include_directories(socrates
 PRIVATE
     ${CMAKE_CURRENT_SOURCE_DIR}
     ${FLEX_INCLUDE_DIRS}
     ${CMAKE_CURRENT_BINARY_DIR})
set_property(TARGET socrates
          PROPERTY CXX_STANDARD 17)


target_link_libraries(socrates ${Boost_LIBRARIES})
