#include <iostream>
#include <vector>
#include <deque>
#include <string>

using namespace std;

//Milestone 1: 
struct Coffee{
    string name;
    string order;
    Coffee *next;
};

const string NAMES = {"Jack", "Oliver", "Harry", "George", "Noah", "Charlie", "Jacob", "Freddie", "Alfie", "Oscar"};
const string ORDERS = {"Cappuccino", "Latte", "Espresso", "Americano", "Mocha", "Macchiato", "Flat White"};
const int NAMES_SIZE = NAMES.size() / size;