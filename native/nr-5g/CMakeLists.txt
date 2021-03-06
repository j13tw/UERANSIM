cmake_minimum_required(VERSION 3.17)
project(ueransim)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(asn/asn1c)
add_subdirectory(asn/rrc)
add_subdirectory(asn/ngap)
add_subdirectory(asn/utils)
add_subdirectory(log)
add_subdirectory(utils)
add_subdirectory(sctp)
add_subdirectory(gnb)
add_subdirectory(rlc)
add_subdirectory(nas)
add_subdirectory(rrc)
add_subdirectory(gtp)
add_subdirectory(udp)
add_subdirectory(app)
add_subdirectory(urs)

add_executable(ueransim main.cpp)

target_link_libraries(ueransim pthread)

target_link_libraries(ueransim asn-rrc)
target_link_libraries(ueransim asn-ngap)
target_link_libraries(ueransim utils)
target_link_libraries(ueransim gnb)
target_link_libraries(ueransim rlc)
target_link_libraries(ueransim logger)
target_link_libraries(ueransim nas)
target_link_libraries(ueransim rrc)
target_link_libraries(ueransim gtp)
target_link_libraries(ueransim udp)
target_link_libraries(ueransim app)
target_link_libraries(ueransim urs)

target_compile_options(ueransim PRIVATE -Wall -Wextra -pedantic -Wno-unused-parameter)
