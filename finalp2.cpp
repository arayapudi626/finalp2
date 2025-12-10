#include <iostream>
#include <vector>
#include <deque>
#include <string>

using namespace std;

//Milestone 1: 
struct Node{
    string name;
    string order;
    Node *next;
};


int main(){
const string NAMES[] = {"Jack", "Oliver", "Harry", "George", "Noah", "Charlie", "Jacob", "Freddie", "Alfie", "Oscar"};
const string ORDERS[] = {"Cappuccino", "Latte", "Espresso", "Americano", "Mocha", "Macchiato", "Flat White"};

Node* head = nullptr;
Node* tail = nullptr;

//Milestone 2:
for (int i  = 0; i < 3; i++){
    string name = NAMES[rand() % 10];
    string order = ORDERS[rand() % 7];
    Node* newNode = new Node{name, order, nullptr};
    if (head == nullptr){
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    cout << "Intial queue: " << newNode->name << endl;
}


for (int r = 1; r <= 10; r++){
    cout << "Round " << r << ":\n";
    Node* current = head;
    if (head != nullptr){
        cout << current->name << " ordered a " << current->order << endl;
        current = current->next;
        if (head == nullptr){
            tail = nullptr;
        }
    } else{
    cout << "No customer to serve " << endl;
    }
    int join = rand() % 2;
    if (join == 1){
        Node * newNode = new Node{NAMES[rand() % 10], ORDERS[rand() % 7], nullptr};
        if (tail == nullptr){
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        cout << newNode->name << " joined the queue and ordered a " << newNode->order << endl;
    } else {
        cout << "No new customer joined" << endl;
    }
}


return 0;
}