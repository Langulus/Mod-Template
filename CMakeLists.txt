cmake_minimum_required(VERSION 3.28)

# Define your project															
project(LangulusMod(((((YourModName))))
    VERSION         1.0.0
    DESCRIPTION     "((((Description))))"
    HOMEPAGE_URL    https://((((Webpage))))
)

# Automatically gather all cpp files in the source dir							
file(GLOB_RECURSE
    LANGULUS_MOD_((((YourModName))))_SOURCES 
    LIST_DIRECTORIES FALSE CONFIGURE_DEPENDS
    source/*.cpp
)

# Build the module                                                              
add_library(Langulus((((YourModName)))) SHARED ${LANGULUS_MOD_((((YourModName))))_SOURCES})

# Link with the framework														
target_link_libraries(LangulusMod((((YourModName))))
    PRIVATE     Langulus
)

# Add test																		
if(LANGULUS_TESTING)
    enable_testing()
    add_subdirectory(test)
endif()

# Add demos, if any																
# You can safely discard this if you don't need demos. Don't forget to delete	
# the demo folder, too															
add_subdirectory(demo)
