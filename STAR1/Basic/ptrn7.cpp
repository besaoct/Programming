/*
Q: Print the following pattern :
6  -> input (even)
7  -> make the input odd by adding 1 (if the input is even and if it is odd then no need to change).


      * * * * * * *
      *           *
      *           *
      *           *
      *           *
      *           *
      * * * * * * *
            *
          * * *
        *   *   *
      *     *     *
    *       *       *
  *         *         *
*           *           *
            *
          *   *
        *       *
      *           *
    *               *
  *                   *
*                       *


*/

#include <bits/stdc++.h>
 using namespace std;
int main(){
    int row;
    cin >> row;
    row = (row%2==0?row+1:row) ;
    cout << row << endl << endl;
    for (int i = 1; i <= row; i++, cout << endl)
    {

        for (int j = 1; j <= row / 2; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= row; j++)
        {
            cout << (i == 1 || i == row || j == 1 || j == row ? "* " : "  ");
        }
    }
    for (int i = 1; i <= row; i++, cout << endl)
    {
        for (int j = 1; j <=row-i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >=1; j--)
        {
            cout << (j==i||j==1?"* " :"  ");
        }
        for (int j = i-1; j >=1; j--)
        {
            cout << ( j == 1 ? "* " : "  ");
        }
        
    }
    for (int i = 1; i <= row; i++, cout << endl)
    {
        for (int j = 1; j <=row-i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >=1; j--)
        {
            cout << (j==i?"* " :"  ");
        }
        for (int j = i-1; j >=1; j--)
        {
            cout << ( j == 1 ? "* " : "  ");
        }
        
    }
    

    return 0;
}