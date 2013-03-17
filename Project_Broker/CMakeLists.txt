cmake_minimum_required (VERSION 2.8)
project (Project_Broker)

set(CMAKE_BUILD_TYPE DEBUG)

set(LIBRARY_DIR "Libraries")
set(PUBLIC_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/Include")

set(LIBRARIES
                "Broker"
		"Lib1"
			)

include_directories(${PUBLIC_INCLUDE_DIR})
add_subdirectory (Application)

FOREACH (LIB ${LIBRARIES})
	add_subdirectory (${LIBRARY_DIR}/${LIB})
ENDFOREACH(LIB)



