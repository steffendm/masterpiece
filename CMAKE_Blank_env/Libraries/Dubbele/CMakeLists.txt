cmake_minimum_required(VERSION 2.8)

set(SRC_${LIB}
                        "src/dubbele.cpp"
                        "src/dubbele.h"
		   )

add_library (${LIB} ${SRC_${LIB}} )
