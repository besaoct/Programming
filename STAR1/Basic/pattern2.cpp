/*
5
*****
****
***
**
*
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int rows;
    cin >> rows ;

    for (int i = 1; i <= rows; i++, cout << endl)
    {
        for (int j = i; j <= rows; j++)
        {
            cout << "*";
        }
    }

    return 0;
}
