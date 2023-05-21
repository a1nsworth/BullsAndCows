add_executable(Tanks)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS *.cpp *.h)
target_sources(Tanks PRIVATE ${SOURCE_FILES})