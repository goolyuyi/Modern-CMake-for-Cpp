cmake_minimum_required(VERSION 3.20.0)
project(Command CXX)

add_executable(main main.cpp)
add_custom_command(TARGET main POST_BUILD
        COMMAND cksum ARGS "$<TARGET_FILE:main>" > "main.ck")

add_custom_target(gendbg ALL COMMAND ${CMAKE_COMMAND} "-E" echo "[main]:$<TARGET_FILE:main>")

file(GENERATE OUTPUT gendbg
        CONTENT
#        "[main]:$<TARGET_FILE:main>"
        "$<UPPER_CASE:$<PLATFORM_ID>>"
        )
