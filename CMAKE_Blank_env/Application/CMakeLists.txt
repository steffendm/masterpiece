FOREACH (LIB ${LIBRARIES})
	include_directories(${CMAKE_SOURCE_DIR}/${LIBRARY_DIR}/${LIB}/src)
	link_directories(${CMAKE_BINARY_DIR}/${LIBRARY_DIR}/${LIB})
ENDFOREACH(LIB)

set(SRC_APP 
		"src/main.cpp"
				)


add_executable(${PROJECT_NAME} ${SRC_APP})

FOREACH (LIB ${LIBRARIES})
	target_link_libraries(${PROJECT_NAME} ${LIB})
ENDFOREACH(LIB)

