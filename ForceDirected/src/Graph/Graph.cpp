#include "Graph.h"

Graph::Graph()
{
}


Graph::~Graph()
{
}

void Graph::update(int step)
{
	for (int currentStep = 0; currentStep < step; currentStep++) {
		for (GraphNode &node : this->nodes) {

			ofVec2f nodeVel(1, 0);
			node.getPosition() += nodeVel;

		}
	}
}

void Graph::draw()
{
	for (GraphEdge &edge : this->edges) {
		edge.draw();
	}

	for (GraphNode &node : this->nodes) {
		node.draw();
	}
}

void Graph::addEdge(GraphEdge & edge)
{
	this->edges.push_back(edge);
}

void Graph::addNode(GraphNode & node)
{
	this->nodes.push_back(node);
}
