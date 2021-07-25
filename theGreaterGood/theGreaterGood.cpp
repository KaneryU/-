// theGreaterGood.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int theRoom() {

    return 0;
}

int main()
{
    cout << "Welcome to to the GREATER GOOD game! \n Would you like to learn about this game? y/n\n";
    string info = " The greater good game revolves around two 'boxes' that you can put your money into. \n At the start of each round, each player recives FIVE (5) coins. \n You put the coins into ether of two boxes, the TAX box or the PERSONAL FUNDS box. \n You are not obligated to put money in any one, though you have you put money in one (or both) of them \n the money put in the TAX box will be multiplied by FIVE and then spread equally among the players, While the money you put into the personal fund box, will stay 100% yours. \n WINNING CONDTION: You must have more than FOURTY (40) coins. SECONDARY CONDITION: Have the most coins to get into first place.";
    char yesorno;
    cin >> yesorno;
    if (yesorno == 'y'|| yesorno == 'Y') {
        cout << "\n" << info << endl;
    }
    return 0;
}