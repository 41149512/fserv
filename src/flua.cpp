#include "flua.hpp"

static int flua_channel_gc_method(lua_State* L) {
    Channel** ud = (Channel**)lua_touserdata(L,1);
    intrusive_ptr_release(*ud);
    return 0;
}

static int flua_connection_gc_method(lua_State* L) {
    ConnectionInstance** ud = (ConnectionInstance**)lua_touserdata(L,1);
    intrusive_ptr_release(*ud);
    return 0;
}

void flua_push_channel(lua_State* L, Channel* channel) {
    intrusive_ptr_add_ref(channel);
    Channel** ud = (Channel**)lua_newuserdata(L, sizeof(Channel*));
    *ud = channel;
    
    lua_newtable(L);
    lua_pushliteral(L, "__gc");
    lua_pushcfunction(L, flua_channel_gc_method);
    lua_rawset(L, -3);
    lua_setmetatable(L, -2);
}

void flua_push_connection(lua_State* L, ConnectionInstance* channel) {
    intrusive_ptr_add_ref(channel);
    ConnectionInstance** ud = (ConnectionInstance**)lua_newuserdata(L, sizeof(ConnectionInstance*));
    *ud = channel;
    
    lua_newtable(L);
    lua_pushliteral(L, "__gc");
    lua_pushcfunction(L, flua_connection_gc_method);
    lua_rawset(L, -3);
    lua_setmetatable(L, -2);
}