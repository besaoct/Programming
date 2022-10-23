/*

5
--------
1
21
321
4321
54321

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++, cout << endl)
    {
        for (int j = i; j >= 1; j--) //  also try this one => (int j = i; j>=1; j--)
        {
            cout << j;
        }
        
    }
    

    return 0;
}
