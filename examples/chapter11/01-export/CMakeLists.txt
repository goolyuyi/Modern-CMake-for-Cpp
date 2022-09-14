cmake_minimum_required(VERSION 3.20.0)
project(ExportCalc CXX)
add_subdirectory(src bin)

set(EXPORT_DIR "${CMAKE_CURRENT_BINARY_DIR}/cmake")

export(TARGETS calc
        FILE "${EXPORT_DIR}/CalcTargets.cmake"
        NAMESPACE Calc::
        )

install(TARGETS calc EXPORT CalcTargets) #set EXPORT
export(EXPORT CalcTargets # consume EXPORT
        FILE "${EXPORT_DIR}/CalcTargets2.cmake"
        NAMESPACE Calc::
        )
