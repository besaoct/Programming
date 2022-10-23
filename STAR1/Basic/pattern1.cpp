/*
input : 5 6
output:

******
*    *
*    *
*    *
******

*/

#include <bits/stdc++.h>
using namespace std;
int main(){

int rows,cols; 
cin>> rows>>cols;

for (int i = 1; i <= rows; i++, cout << endl)
{
    for (int j = 1; j <= cols; j++)
    {
        cout << ( i== 1|| i==rows || j==1|| j==cols  ? "*" :" " );
    }
    
}

return 0;
}

