#include <iostream>
using namespace std;

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (i + j + 1) % 2 << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0

int main3()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (i + j) % 2 << " ";
        }
        cout << "\n";
    }
}

// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1

int main2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << (i + j + 1) % 2 << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0

int main1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << (i + j) % 2 << " ";
        }
        cout << "\n";
    }
    return 0;
}