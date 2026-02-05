#include "prefix.h"

tb_int_t xm_winos_set_error_mode(lua_State *lua) {
    tb_check_return_val(lua, 0);

#ifdef TB_CONFIG_OS_WINDOWS
    // get mode
    tb_uint_t mode = (tb_uint_t)luaL_checkinteger(lua, 1);

    // disable critical error message box
    SetErrorMode(mode);
#endif
    return 0;
}
