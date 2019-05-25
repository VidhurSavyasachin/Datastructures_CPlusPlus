// -----------------------------------------------------------------------------
// FlexArray main program and unit test -- typedef version              main.cpp
// A. Fischer and M. Fischer, September 2010
//      Revised September 2018
// -----------------------------------------------------------------------------
// The base type of the array is controlled by a typedef.

#include "Tool.h"
#include "flex.hpp"
#include "item.hpp"
#include "graph.hpp"

void unitTest( void );

//------------------------------------------------------------------------------
int main( void ) {
    Graph g(12,29);
    banner();
    puts( "Kruskal's Minimum Spanning Tree" );
    g.addEdge(4, 8, 51);
    g.addEdge(6, 9, 42);
    g.addEdge(3, 8, 37);
    g.addEdge(1, 7, 64);
    g.addEdge(5, 8, 65);
    g.addEdge(0, 4, 48);
    g.addEdge(4, 7, 49);
    g.addEdge(7, 8, 58);
    g.addEdge(2, 7, 59);
    g.addEdge(0, 6, 46);
    g.addEdge(1, 6, 69);
    g.addEdge(6, 9, 29);
    g.addEdge(0, 10, 37);
    g.addEdge(3, 11, 31);
    g.addEdge(2, 10, 42);
    g.addEdge(7, 11, 60);
    g.addEdge(3, 6, 32);
    g.addEdge(6, 7, 12);
    g.addEdge(1, 10, 41);
    g.addEdge(0, 1, 30);
    g.addEdge(0, 2, 40);
    g.addEdge(2, 4, 27);
    g.addEdge(1, 5, 26);
    g.addEdge(0, 9, 31);
    g.addEdge(4, 6, 26);
    g.addEdge(1, 11, 51);
    g.addEdge(2, 6, 33);
    g.addEdge(3, 9, 49);
    g.addEdge(3, 6, 36);
    cout << "Edges of MST are \n";
    int mst_wt = g.KruskalMST();
    
    cout << "\nWeight of MST is " << mst_wt;
    bye();
    return 0;
}

//------------------------------------------------------------------------------

// Local Variables:
// tab-width: 4
// End:
