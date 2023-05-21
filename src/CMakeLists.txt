add_executable(BullsAndCows)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS *.cpp *.h)
target_sources(BullsAndCows PRIVATE ${SOURCE_FILES})