#include<bits/stdc++.h>

using namespace std;

 struct Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data1 , Node * next1){

        data = data1;
        next = nullptr;
    }
    Node(int data2){
        data = data2;
        next = nullptr; 
    }
 };

 

int main(){
    vector<int> arr = {2,5,6,7,8,945,};

    Node* y = new Node(arr[0]);
    cout<< y->data;
    return 0;
}