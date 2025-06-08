#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {   
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
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