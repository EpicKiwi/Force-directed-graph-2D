#pragma once

#include "ofMath.h"
#include <vector>

class GraphNode
{
private:
	ofVec2f position;

public:
	GraphNode();
	~GraphNode();

	void draw();

	ofVec2f &getPosition();
	void setPosition(float x, float y);
};

