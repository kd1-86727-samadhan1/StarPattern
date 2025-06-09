#include <iostream>
using namespace std;

//     *     
//     *
// * * * * *
//     *     
//     *

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 3 || j == 3)
            {
                cout << "*"
                     << " ";
            }
            else{
                cout<<"  "; // 2 Space
            }
        }
        cout << "\n";
    }
    return 0;
}

// * * * * *
// *       *
// *       *
// *       *
// * * * * *

int main2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << "  "; // 2 Space
            }
        }
        cout << "\n";
    }
    return 0;
}

// * * * * *
//     *
//     *
//     *
// * * * * *

int main1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 5)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}