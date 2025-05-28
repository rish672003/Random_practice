// using adjacency matrix

#include<bits/stdc++.h>

using namespace std;

class graph {

    // for making the matrix
    void makeMatrix(int u, int v , bool direection ){
        

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
        g.makeMatrix(u,v,0);
    }

    g.printAdj();

    return 0;



   
}