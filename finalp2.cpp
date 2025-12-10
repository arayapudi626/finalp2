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

const string NAMES[] = {"Jack", "Oliver", "Harry", "George", "Noah", "Charlie", "Jacob", "Freddie", "Alfie", "Oscar"};
const string ORDERS[] = {"Cappuccino", "Latte", "Espresso", "Americano", "Mocha", "Macchiato", "Flat White"};

Node* head = nullptr;
Node* tail = nullptr;

void 


int main(){
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
}
return 0;
}