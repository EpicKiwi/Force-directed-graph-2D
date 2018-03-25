#include "GraphNode.h"
#include "ofGraphics.h"

GraphNode::GraphNode()
{
}


GraphNode::~GraphNode()
{
}

void GraphNode::draw()
{
	ofColor(200);
	ofDrawCircle(this->position, 10);
}

ofVec2f &GraphNode::getPosition()
{
	return this->position;
}

void GraphNode::setPosition(float x, float y)
{
	this->position.x = x;
	this->position.y = y;
}
