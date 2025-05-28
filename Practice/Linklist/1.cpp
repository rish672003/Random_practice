#include<bits/stdc++.h>
using namespace std;



// 1 D of the linked list
class Node{
    public:
   int data;
   Node* next;

   Node(int data1){
     
    this->data = data1;
    this->next = nullptr;
   }



};

void transversal(Node* head){

    while(head != nullptr ){

        cout << head->data << " ";

        head = head -> next;
    }

    cout<< endl;
}

 
int main(){
   //transversal of linklist 
   Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    transversal(head);

    return 0;
}