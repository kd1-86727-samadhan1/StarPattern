#include <iostream>
using namespace std;

// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

int main3()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

int main2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

int main1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}