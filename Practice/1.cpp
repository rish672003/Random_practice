#include<bits/stdc++.h>


using namespace std;

class graph{

    public:
    unordered_map<int, list<int> > ad;

    void addEdge(int u,int v,bool direction){
        //direction = 0 ->  undirected graph
        //direction = 1 -> directed graph

        //create an edge from u to v
        ad[u].push_back(v);

        if(direction == 0){
            ad[v].push_back(u);
        }
    }

    void printAdj(){
        for(auto i : ad){
            cout<< i.first << "-> ";
            for(auto j: i.second){
                cout<< j << ", ";
            }
        }
    }
};

int main(){

    int n;
    cout<<"Enter the number of nodes "<< endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges " << endl;
    cin>>m;

    graph g;


    for(int i=0;i<m;i++){
        int u,v;
        cin>> u >> v;
        g.addEdge(u,v,0);
    }

    g.printAdj();

    return 0;


}