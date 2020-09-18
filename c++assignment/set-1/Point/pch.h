//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
class Point {
	int m_x;
	int m_y;
public:
	Point();
	Point(int, int);
	Point(const Point&);
	double distanceFromOrigin();
	int quadrant();
	int isOrigin();
	int isOnXaxis();
	int isOnYaxis();
	void display();
};