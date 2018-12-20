add_executable(hello helloengine_win.c)
set_target_properties(hello PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS /SAFESEH:NO")