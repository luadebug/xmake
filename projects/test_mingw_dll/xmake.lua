add_rules("mode.debug", "mode.release")

target("foo")
    set_kind("shared")
    add_files("src/foo.c")

target("test_mingw_dll")
    set_kind("binary")
    add_files("src/main.c")
    add_deps("foo")
    add_syslinks("psapi")
