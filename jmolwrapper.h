/*
 * jmolwrapper.h
 *
 *
 * Copyright 2012 Benn Snyder <benn.snyder@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef _JMOLWRAPPER_H
#define _JMOLWRAPPER_H

#include <string>


class JmolWrapper {
public:
	JmolWrapper(std::string host, int port);
	~JmolWrapper();

	void rotate(float x, float y, bool selected=false);
	void translate(float x, float y, bool selected=false);
	void drawPoint3D(const char* name, float x, float y, float z);
	void drawPoint2D(float x, float y);
	void selectAll();
	void selectNone();
	void selectWithinDistance(float x, float y, float x_distance, float y_distance);
	void selectMoleculeWithinDistance(float x, float y, float x_distance, float y_distance);

private:
	std::string host;
	int port;
	int sock;
};


#endif
