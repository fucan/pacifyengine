add_executable(hello helloengine_xcb.c)
target_link_libraries(hello xcb)
#set_target_properties(hello PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS /SAFESEH:NO")