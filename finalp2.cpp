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