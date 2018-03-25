#pragma once

#include "ofGraphics.h"
#include "ofMath.h"
#include "GraphNode.h"

class GraphEdge
{
private:
	GraphNode* source;
	GraphNode* target;

public:
	GraphEdge();
	~GraphEdge();

	void draw();

	GraphNode& getSource();
	void setSource(GraphNode& source);
	GraphNode& getTarget();
	void setTarget(GraphNode& target);
};

