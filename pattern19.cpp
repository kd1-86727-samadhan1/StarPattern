#include <iostream>
using namespace std;

//           *   
//         *   *
//       *       *
//     *           *
//   *   *   *   *   *

int main()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 6 - i; j++)
        {
            cout << " "
                 << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == 5 || j == i)
            {
                cout << "*  "
                     << " ";
            }
            else
            {
                cout << "    "; // 4 Space
            }
        }
        cout << "\n";
    }
    return 0;
}