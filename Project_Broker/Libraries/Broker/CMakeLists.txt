set(SRC_${LIB}
                        "${PUBLIC_INCLUDE_DIR}/IBroker.h"
                        "${PUBLIC_INCLUDE_DIR}/PBroker.h"
                        "src/Broker.cpp"
		   )

add_library (${LIB} ${SRC_${LIB}} )
