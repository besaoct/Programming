/*
5
 5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
  4 3 2 1 2 3 4
    3 2 1 2 3
      2 1 2
        1

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++, cout << endl)
    {
        for (int k = row; k >= i + 1; k--)
        {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        for (int k = 2; k <= i; k++)
        {
            cout << k << " ";
        }
    }
    for (int i = row-1; i >=1; i--, cout << endl)
    {
        for (int k = row; k >= i + 1; k--)
        {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        for (int k = 2; k <= i; k++)
        {
            cout << k << " ";
        }
    }
    return 0;
}