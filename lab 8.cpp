#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// Function to print the contents of the shopping list
void printShoppingList(const list<string>& shoppingList) {
    for (const string& item : shoppingList) {
        cout << item << std::endl;
    }
}

int main() {
    list<string> shoppingList;

    // Append items to the list
    shoppingList.push_back("eggs");
    shoppingList.push_back("milk");
    shoppingList.push_back("sugar");
    shoppingList.push_back("chocolate");
    shoppingList.push_back("flour");

    cout << "Shopping List:" <<endl;
    printShoppingList(shoppingList);

    // Remove the first element
    shoppingList.pop_front();
    cout << "\nShopping List after removing the first item:" << endl;
    printShoppingList(shoppingList);

    // Insert "coffee" at the beginning
    shoppingList.push_front("coffee");
    cout << "\nShopping List after inserting 'coffee' at the beginning:" << endl;
    printShoppingList(shoppingList);

    // Find "sugar" and replace it with "honey"
    auto sugarIt = find(shoppingList.begin(), shoppingList.end(), "sugar");
    if (sugarIt != shoppingList.end()) {
        *sugarIt = "honey";
    }
    cout << "\nShopping List after replacing 'sugar' with 'honey':" << endl;
    printShoppingList(shoppingList);

    // Insert "baking powder" before "milk"
    auto milkIt = find(shoppingList.begin(), shoppingList.end(), "milk");
    if (milkIt != shoppingList.end()) {
        shoppingList.insert(milkIt, "baking powder");
    }
    cout << "\nShopping List after inserting 'baking powder' before 'milk':" << endl;
    printShoppingList(shoppingList);

    // Sort the list
    shoppingList.sort();
    cout << "\nShopping List after sorting:" << endl;
    printShoppingList(shoppingList);

    // Search for an item
    string searchTerm;
    cout<<"Enter item to search: ";
    cin>>searchTerm;
    auto searchResult = find(shoppingList.begin(), shoppingList.end(), searchTerm);
    if (searchResult != shoppingList.end()) {
        cout << "\nFound " << searchTerm << " in the list." << endl;
    } else {
        cout << "\n" << searchTerm << " not found in the list." << endl;
    }

    return 0;
}
