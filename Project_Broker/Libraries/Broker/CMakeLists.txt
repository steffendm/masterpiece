set(SRC_${LIB}
                        "${PUBLIC_INCLUDE_DIR}/IBroker.h"
                        "src/Broker.cpp"
                        "src/Broker.h"
		   )

add_library (${LIB} ${SRC_${LIB}} )
