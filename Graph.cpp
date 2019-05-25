//
//  Graph.cpp
//  Graphs
//
//  Created by Vidhur Savyasachin on 5/15/19.
//  Copyright © 2019 Vidhur Savyasachin. All rights reserved.
//
#include <map>
#include "parts.hpp"
#include "flex.hpp"
#include "graph.hpp"
#include "Tool.h"
#include <iostream>
using namespace std;
string city[12] = {"Aberdeen","Billings","Carston","Denslow","Edmonds","Frankston","Grant","Hammond","Janssen","Ketchikan","Landry","Melville"};
Graph::Graph(int V,int E){
    this->V=V;
    this->E = E;
}
Graph::~Graph(){};
void Graph::addEdge(int u, int v, int w){
       edges.push_back({w, {u, v}});
}
DisjointSets::DisjointSets(int n){
    this->n = n;
    parent = new int[n+1];
    rnk = new int[n+1];
    for (int i = 0; i <= n; i++)
    {
        rnk[i] = 0;
        
        //every element is parent of itself
        parent[i] = i;
    }
}
int DisjointSets::find(int u){
    if (u != parent[u])
        parent[u] = find(parent[u]);
    return parent[u];
}
void DisjointSets::merge(int x, int y){
    x = find(x);
    y = find(y);
    
    /* Make tree with smaller height
     a subtree of the other tree  */
    if (rnk[x] > rnk[y])
        parent[y] = x;
    else // If rnk[x] <= rnk[y]
        parent[x] = y;
    
    if (rnk[x] == rnk[y])
        rnk[y]++;
}
int Graph::KruskalMST(){
    int mst_wt = 0; // Initialize result
    
    // Sort edges in increasing order on basis of cost
    sort(edges.begin(), edges.end());
    
    // Create disjoint sets
    DisjointSets ds(V);
    
    // Iterate through all sorted edges
    vector< pair<int, iPair> >::iterator it;
    for (it=edges.begin(); it!=edges.end(); it++)
    {
        int u = it->second.first;
        int v = it->second.second;
        
        int set_u = ds.find(u);
        int set_v = ds.find(v);
        
        // Check if the selected edge is creating
        // a cycle or not (Cycle is created if u
        // and v belong to same set)
        if (set_u != set_v)
        {
            // Current edge will be in the MST
            // so print it
            cout << city[u] << " - " << city[v] << endl;
            
            // Update MST weight
            mst_wt += it->first;
            
            // Merge two sets
            ds.merge(set_u, set_v);
        }
    }
    
    return mst_wt;
}
