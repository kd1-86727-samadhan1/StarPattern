#include <iostream>
using namespace std;

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

int main3()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }
    return 0;
}

// * * * * *
// * * * *
// * * *
// * *
// *

int main2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }
    return 0;
}

// *
// * *
// * * *
// * * * *
// * * * * *

int main1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }
    return 0;
}