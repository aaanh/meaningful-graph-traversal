#ifndef EDGE_H
#define EDGE_H

#include <vector>

#include "node.h"

#define MAX_NODE_PAIR 2

using namespace std;

class Edge {
    public:
        Edge();
        Edge(Node&, Node&);
        ~Edge();

        bool addNodePair(Node&, Node&);
        vector<Node*> getNodePair() const;

        friend bool operator==(const Edge& lhs, const Edge& rhs);

    private:
        vector<Node*> node_pair;
    
};

#endif