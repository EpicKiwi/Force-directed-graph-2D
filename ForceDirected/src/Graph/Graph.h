#pragma once

#include "GraphEdge.h"
#include "GraphNode.h"
#include <vector>

class Graph
{
private:
	vector<GraphEdge> edges;
	vector<GraphNode> nodes;

public:
	Graph();
	~Graph();

	void update(int step);
	void draw();

	void addEdge(GraphEdge &edge);
	void addNode(GraphNode &node);
};

