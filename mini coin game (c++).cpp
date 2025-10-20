#include <iostream>
using namespace std;

int main ()
{
    int coins = 0;
    int choice;
    
    cout << "Starting coins: " << coins << endl;
    cout << "1. Picked up a coin = 1" << endl;
    cout << "2. Found a treasure chest = 50" << endl;
    cout << "3. Bought a sword = -10" <<endl;
    cout << "4. Doubled your coins!" << endl;
    cout << "5. Attack = -1" << endl;
    
    cout << "choice an action: " ;
    cin >> choice;
    
    //choices
    if (choice == 1) ++coins;
    else if (choice == 2) 
    coins+= 50;
    else if (choice == 3) 
    coins-= 10;
    else if (choice == 4) 
    coins*= 2;
    else if (choice == 5) 
    --coins;
    else cout << "Invalid choice!" << endl;
    
    cout << "Final coin count: " << coins;
    
    return 0;
}