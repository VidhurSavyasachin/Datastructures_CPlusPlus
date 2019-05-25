// Graphs and Graph Applications									parts.hpp
// Alice Fischer and Michael Fischer,  November 2011
#pragma once

#include "Tool.h"
using namespace std;
class Edge;
class Graph;
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
class Node {
	friend class Graph;
	friend class Edge;
	string name;
	vector<Edge> edges;

public:
	Node(const string s) : name(s) {}
	void addEdge(Edge& ed) { edges.push_back(ed); }
	//vector<Edge>& getEdges() { return edges; }
	ostream& print(ostream& out) const;
};
// -----------------------------------------------------------------------------
inline ostream& operator<<(ostream& out, Node& n) {
	return n.print(out);
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
class Edge {
	typedef bool (Compare_t)(const Edge&, const Edge&);
private:
	friend class Graph;
	friend class Node;
	Node* fromNode;
	Node* toNode;
	int weight;
public:
	Edge() {}
	Edge(Node* in, Node* out, int weight) :
		fromNode(in), toNode(out), weight(weight) {
	}
	static bool compare(const Edge& e1, const Edge& e2) {
		return e1.weight > e2.weight;
	}
	ostream& print(ostream& out) const;
   
};
// -----------------------------------------------------------------------------
inline ostream& operator<<(ostream& out, const Edge& e) {
	return e.print(out);
}
