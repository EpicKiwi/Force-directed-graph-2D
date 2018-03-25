#include "ofApp.h"

#include "Graph\Graph.h"

Graph directedGraph;

void ofApp::setup(){
	float h = ofGetWindowHeight();
	float w = ofGetWindowWidth();

	GraphNode lastNode;

	for (int i = 0; i < 2; i++) {
		GraphNode node;
		GraphEdge edge;

		node.setPosition(ofRandom(0,w),ofRandom(0,h));
		edge.setSource(lastNode);
		edge.setTarget(node);

		directedGraph.addNode(node);
		if (i > 0) {
			directedGraph.addEdge(edge);
		}

		lastNode = node;
	}
}

void ofApp::update(){
	directedGraph.update(1);
}

void ofApp::draw(){
	ofBackground(0);
	directedGraph.draw();
}
