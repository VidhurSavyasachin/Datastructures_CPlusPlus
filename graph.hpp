// Graphs and Graph Applications									graph.hpp
// Alice Fischer and Michael Fischer,  November 2011
#pragma once
#include <map>
#include "parts.hpp"
#include "Tool.h"
#include "flex.hpp"
typedef map<string, Node*> myMap;
typedef  pair<int, int> iPair;
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
class Graph {

   
    // -------------------------------------------------------------------------
    // Members of Graph class
    int V, E;
    vector< pair<int, iPair> > edges;
    map<string, Node*> nodeMap;
    vector<Edge*> edgeList;
   
    // Private functions
    Node* getNode(string name);   // Make one if necessary.
    Node* makeNode(string name);  // Called by getNode

public:
    Graph(int V,int E);
    ~Graph();
//    Graph();
    ostream& print(ostream& out);
//    void printAnswer(istream& stream);
//    void answer();
    int KruskalMST();
    void addEdge(int u,int v,int w);
    
};

class DisjointSets
{
   
public:
    DisjointSets(int n);
    int find(int u);
    void merge(int x,int y);
    int *parent,*rnk;
    int n;
    };

// -----------------------------------------------------------------------------
inline ostream& operator<<(ostream& out, Graph& g) {
    return g.print(out);
}
