cmake_minimum_required(VERSION 3.1)

# determine the build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

# project name
project(window)

# define the executable
set(EXECUTABLE_NAME "window")
add_executable(${EXECUTABLE_NAME} main.cpp)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/../../cmake/modules")

# find Lugdunum and link with it
find_package(LUG REQUIRED window)
if(LUG_FOUND)
    include_directories(${LUG_INCLUDE_DIR})
    target_link_libraries(${EXECUTABLE_NAME} ${LUG_LIBRARIES})
endif()
if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
    # Tell MSVC to use main instead of WinMain for Windows subsystem executables
    set_target_properties(window PROPERTIES
                          LINK_FLAGS "/ENTRY:mainCRTStartup"
    )
    set_target_properties(window PROPERTIES
                          LINK_FLAGS_RELEASE
                          "/SUBSYSTEM:WINDOWS"
    )
    file(GLOB LUGDUNUM_BINARIES
         "${LUG_BINARY_DIR}/*.dll"
    )
    add_custom_command(TARGET window POST_BUILD 
                       COMMAND ${CMAKE_COMMAND} -E copy_if_different
                       ${LUGDUNUM_BINARIES}
                       $<TARGET_FILE_DIR:window>
    )
endif()