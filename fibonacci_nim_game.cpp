#include <iostream>
using namespace std;
int main(){
    float coins;
    cout<< "Welcome To Fibonacci Nim Game"<<endl;
    cout<< "Enter The Number Of Coins You Want To Play With: ";
    cin>> coins;
    while (coins <= 1){
        cout << "The Number Of Coins Cannot Equal 1 Or Negative Number! \n";
        cout << "Enter The Number Of Coins You Want To Play With: ";
        cin >> coins;
    }
    cout<< "The Current Coins = " << coins << "\n" ;
    float p2 = coins / 2;
    while (coins > 1){
        float p1;
        cout<< "Player 1 Please Enter The Number Of Coins You Want To Choose: ";
        cin>> p1;
        while (p1 >= coins or p1 > 2 * p2){
            cout<< "invalid input! \n";
            cout<< "coins = " << coins << "\n";
            cout<< "Player 1 Please Enter The Number Of Coins You Want To Choose: ";
            cin>> p1;

        }
        coins -= p1;
        cout<< "coins = " << coins << "\n";
        if (coins == 1){
            cout<< "Player 2 Wins" << "\n" << "Congratulations! :)"<<"\n"<<"Thanks For Playing The Game, Good Luck (:";
            break;
        }
        cout<< "Player 2 Please Enter The Number Of Coins You Want To Choose: ";
        cin>> p2;
        while (p2 >= coins or p2 > (2 * p1) or p2 < 1) {
            cout<< "invalid input ! \n";
            cout<< "coins = " << coins << "\n";
            cout<< "Player 2 Please Enter The Number Of Coins You Want To Choose: ";
            cin>> p2;
        }
        coins -= p2;
        cout<< "coins = " << coins << "\n";
        if (coins == 1){
            cout<< "Player 1 Wins"<<"\n" << "Congratulations! :)"<<"\n"<<"Thanks For Playing The Game, Good Luck (:";
            break;
        }

    }
    cout<<"\a";
    return 0;
