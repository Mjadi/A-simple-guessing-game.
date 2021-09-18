#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int random_Number()
{
    srand((unsigned)time(0));
    int randomNumber = rand() % 100 + 1;
    // cout << randomNumber << endl;
    return randomNumber;
}
int main()
{
    cout << "          ************************" << endl
         << "        Welcome to the guessing game!" << endl
         << "          ************************";
    int random_Variable;
    random_Variable = random_Number();
    cout << endl
         << endl
         << "Enter a number between 1 to 100:-\n";

    while (true)
    {

        int x;
        cin >> x;

        if (x == random_Variable)
        {
            cout << endl
                 << "You won.";
            break;
        }

        else if (x > random_Variable)
        {
            cout << endl
                 << "Enter a smaller number:-\n";
        }

        else if (x < random_Variable)
        {
            cout << endl
                 << "Enter a larger number:-\n";
        }
    }

    return 0;
}