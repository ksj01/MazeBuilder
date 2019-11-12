#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

class Maze
{
public:
	Maze();
	~Maze();
	Maze(int _height, int _width);

private:
	int height;
	int width;
	const char WALL = '#';
	const char GAP = ' ';
};

Maze::Maze()
{
}

Maze::~Maze()
{
}

Maze::Maze(int _height, int _width)
{
	height = _height;
	width = _width;
}