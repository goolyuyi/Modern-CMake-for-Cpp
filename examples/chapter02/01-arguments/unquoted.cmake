cmake_minimum_required(VERSION 3.20.0)

message(a\ single\ argument)
message(two arguments)
message(three;separated;arguments)
message(${CMAKE_VERSION})  # a variable reference
message(()()())            # matching parentheses
#parentheses (()) are allowed only if they form correct, matching pairs.
