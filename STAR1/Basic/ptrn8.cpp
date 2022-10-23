#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int col;
    cin >> col;
    for (int i = 1; i <= 3; i++, cout << endl)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << (((i + j) % 4 == 0 ) || (i == 2 && j % 4 == 0) ? "+ " : "  ");
        }
     }
    return 0;
 }