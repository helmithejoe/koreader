/*
    KindlePDFViewer: input abstraction for Lua
    Copyright (C) 2011 Hans-Werner Hilse <hilse@web.de>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _PDF_INPUT_H
#define _PDF_INPUT_H

#ifdef EMULATE_READER
#include <SDL.h>
#endif

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

int luaopen_input(lua_State *L);

#endif

