cmake_minimum_required (VERSION 2.6)
project (Test_Cmake)

set(LIBRARY_DIR "Libraries")
set(LIBRARIES
                "Dubbele"
			)

add_subdirectory (Application)

FOREACH (LIB ${LIBRARIES})
	add_subdirectory (${LIBRARY_DIR}/${LIB})
ENDFOREACH(LIB)

