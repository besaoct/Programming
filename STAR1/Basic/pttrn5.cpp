/*
8
1 0 1 0 1 0 1 0 1 0 1 0 1 0 1
  1 0 1 0 1 0 1 0 1 0 1 0 1
    1 0 1 0 1 0 1 0 1 0 1
      1 0 1 0 1 0 1 0 1
        1 0 1 0 1 0 1
          1 0 1 0 1
            1 0 1
              1
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int rows, i, j,k=0;
    cin >> rows;

    for (i = rows; i >= 1; i--, cout << endl)
    {
        for (j = i; j < rows; j++)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            int k = j;
            if(j!=i)
            {
                
                cout << 0 <<" ";
            }
            
            cout << 1 <<" ";
        }
    }

    return 0;
}
