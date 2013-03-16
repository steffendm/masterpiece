set(SRC_APP 
		"src/main.cpp"
				)


add_executable(${PROJECT_NAME} ${SRC_APP})

FOREACH (LIB ${LIBRARIES})
	target_link_libraries(${PROJECT_NAME} ${LIB})
ENDFOREACH(LIB)

