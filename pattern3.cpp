#include <iostream>
using namespace std;

// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 
// E E E E E

int main()
{
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << "\n";
    }
}
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
int main1()
{
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= 5; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
    return 0;
}