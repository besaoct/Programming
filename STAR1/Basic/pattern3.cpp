/*
5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int rows;
    cin >> rows;
    for (int i = rows; i >= 1; i--, cout << endl)
    {
        for (int j = i; j < rows; j++)
        {
            cout <<"  ";
        
        }
        for (int j = i; j >=1; j--)
        {
            cout << (j != i ? "* " :"");
            cout << "* ";
        }
      
    }

    return 0;
}
