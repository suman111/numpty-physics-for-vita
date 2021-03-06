/*
 * This file is part of NumptyPhysics
 * Copyright (C) 2008 Tim Edmonds
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 */
/*
* PSP port by rock88: rock88a@gmail.com
* http://rock88dev.blogspot.com
*/

#ifndef __WINDOW_H__
#define __WINDOW_H__

#include "Common.h"
#include "Canvas.h"

class Window : public Canvas
{

public:
	Window(int w, int h, const char* title=NULL, const char* winclass=NULL);
	void update(const Rect& r);
	void raise();
	void setSubName(const char *sub);
	
	void* screen;
	
};

#endif
