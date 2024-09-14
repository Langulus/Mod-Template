file(GLOB_RECURSE
	LANGULUS_MOD_(((((YourModName))))_TEST_SOURCES 
	LIST_DIRECTORIES FALSE CONFIGURE_DEPENDS
	*.cpp
)

add_executable(LangulusMod(((((YourModName))))Test ${LANGULUS_MOD_(((((YourModName))))_TEST_SOURCES})

target_link_libraries(LangulusMod(((((YourModName))))Test
	PRIVATE		Langulus
				Catch2
)

add_dependencies(LangulusMod(((((YourModName))))Test
	LangulusMod(((((YourModName))))
	# If your tests depend on more modules, you can add them here ((((Dependencies)))). Examples:	
	#LangulusModAssetsGeometry
	#LangulusModAssetsImages
	#LangulusModFileSystem

)

# Beware, that some modules are available only if you're not building in "toaster mode"
#[[if (NOT ${LANGULUS_TOASTER_MODE})
add_dependencies(LangulusMod(((((YourModName))))Test
	LangulusModGLFW
	LangulusModVulkan
)
endif()]]

add_test(
	NAME		LangulusMod(((((YourModName))))Test
	COMMAND		LangulusMod(((((YourModName))))Test
	WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)

# If your test depends on external files and/or folders, you must copy them to bin.					
# You can delete this snippet, and the 'data' dir, if you have no such external files				
# Here's an example of creating a bin/data directory, and copying a file inside:					
add_custom_command(
    TARGET LangulusMod(((((YourModName))))Test POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory
		"$<TARGET_FILE_DIR:LangulusMod(((((YourModName))))Test>/data"
    COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_SOURCE_DIR}/data/README.md"
		"$<TARGET_FILE_DIR:LangulusMod(((((YourModName))))Test>/data/README.md"
)
