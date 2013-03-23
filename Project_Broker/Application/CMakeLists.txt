set(SRC_APP 
                "${PUBLIC_INCLUDE_DIR}/IBroker.h"
                "${PUBLIC_INCLUDE_DIR}/PBroker.h"
                "${PUBLIC_INCLUDE_DIR}/ILib.h"
                "src/Framework.cpp"
                "src/Framework.h"
		"src/main.cpp"
				)


add_executable(${PROJECT_NAME} ${SRC_APP})

FOREACH (LIB ${LIBRARIES})
	target_link_libraries(${PROJECT_NAME} ${LIB})
ENDFOREACH(LIB)

