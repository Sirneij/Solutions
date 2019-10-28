#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    cout << "Enter an amount in cents: ";
    int cents {0};
    cin >> cents;
    if(cents >= 0){
        int remainDollar = cents % 100;
        int dollars = (cents - remainDollar)/100;
        int remainQuarter = remainDollar % 25;
        int quarter = (remainDollar - remainQuarter) / 25;
        int remainDime = remainQuarter % 10;
        int dime = (remainQuarter - remainDime) / 10;
        int remainNickel = remainDime % 5;
        int nickel = (remainDime - remainNickel) / 5;
        int remainPenny = remainNickel % 1;
        int penny = (remainNickel - remainPenny) / 1;
        cout << "You can provide this change as follows: " << endl;
        cout << "Dollars  : " << dollars << "\nQuarters : " << quarter << "\nDimes    : " << dime
             << "\nNickels  : " << nickel << "\nPennies  : " << penny << endl;

    }else{
        cout << "You have entered a negative cent!" << endl;
    }
    return 0;
}
