
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

void traverseList(Node* head) {

    while (head != nullptr) {

        cout << head->data << " ";

        head = head->next;
    }
    cout << endl;
}


int main() {
  
    // 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    traverseList(head);

    return 0;
}