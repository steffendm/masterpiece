set(SRC_${LIB}
                        "src/lib1.cpp"
                        "${PUBLIC_INCLUDE_DIR}/lib1.h"
		   )

add_library (${LIB} ${SRC_${LIB}} )
