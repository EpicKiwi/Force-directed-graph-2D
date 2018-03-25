#include "GraphEdge.h"

GraphEdge::GraphEdge()
{
}

GraphEdge::~GraphEdge()
{
}

void GraphEdge::draw()
{
	ofColor(255);
	ofSetLineWidth(1);
	ofDrawLine(this->source->getPosition(), this->target->getPosition());
}

GraphNode& GraphEdge::getSource()
{
	return *(this->source);
}

void GraphEdge::setSource(GraphNode& source)
{
	this->source = &source;
}

GraphNode& GraphEdge::getTarget()
{
	return *(this->target);
}

void GraphEdge::setTarget(GraphNode& target)
{
	this->target = &target;
}
