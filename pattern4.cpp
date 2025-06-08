#include <iostream>
using namespace std;

// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5 

int main()
{   
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

// 5 5 5 5 5
// 4 4 4 4 4
// 3 3 3 3 3
// 2 2 2 2 2
// 1 1 1 1 1

int main3()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= 1; j--)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

int main2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 1 2 3 4 5
// 2 3 4 5 6
// 3 4 5 6 7
// 4 5 6 7 8
// 5 6 7 8 9

int main1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= i + 4; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}