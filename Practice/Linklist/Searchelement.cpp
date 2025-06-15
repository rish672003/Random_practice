#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = nullptr;

    }
};


bool searchNo(Node* head , int x){

    Node* curr = head;
    while(curr != NULL){


        if(curr ->data == x){
            return true;
            head = head->next;
        }

        

    }

    return false;




}

int main(){

    int x = 30;

    Node* head = new Node(14);
    head->next = new Node(21);
    head->next->next = new Node(13);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(10);


   if(searchNo(head, x)){
    cout<< "Yes";
   }

   else{
    cout<<"NO";
   }

   return 0;

   
}

