#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int> * l;
    bool isUndir;
public:
    Graph(int V, bool isUndir = true) {
        this->V = V;
        l = new list<int> [V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v) { // u--->v
        l[u].push_back(v);
        if(isUndir)
            l[v].push_back(u);
    }

    void print() {
        for(int u=0; u<V; u++) {
            list<int> neighbors = l[u];
            cout << u << " : ";
            for(int V : neighbors) {
                cout << V << " ";
            }
            cout << endl;
        }
    }

    bool isBipartite() {
        queue<int> q;
        vector<bool> vis(V, false); // del
        vector<int> color(V, -1);

        q.push(0);
        color[0] = 0;
        vis[0] = 0; //del

        while(q.size() > 0) {
            int curr = q.front();
            q.pop();
            list<int> neighbors = l[curr];

            for(int v : neighbors) {
                if(!vis[v]) { // unvisited color[v] == -1
                    vis[v] = true;
                    color[v] = !color[curr];
                    q.push(v);
                } else {
                    if(color[v] == color[curr]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

int main() {
    Graph graph(4);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(0,3);
        
    cout << graph.isBipartite(); //0
    return 0;
}