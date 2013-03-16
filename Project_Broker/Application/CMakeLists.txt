set(SRC_APP 
                "${PUBLIC_INCLUDE_DIR}/IBroker.h"
		"src/main.cpp"
				)


add_executable(${PROJECT_NAME} ${SRC_APP})

FOREACH (LIB ${LIBRARIES})
	target_link_libraries(${PROJECT_NAME} ${LIB})
ENDFOREACH(LIB)

