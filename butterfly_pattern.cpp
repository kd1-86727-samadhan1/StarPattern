#include <iostream>
using namespace std;

// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        // Left wing
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }

        // Spaces between wings
        for (int j = 1; j <= 2 * (5 - i); j++)
        {
            cout << "  "; // 2 Space
        }

        // Right wing
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }

        // Spaces between wings
        for (int j = 1; j <= 2 * (5 - i); j++)
        {
            cout << "  "; // 2 Space
        }

        // Right wing
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }
    return 0;
}