#include <bits/stdc++.h>
using namespace std;
int main(){

int n; 
cin>> n;
for (int i = 1; i <= n; i++, cout << endl)
{
    for (int j = n; j >= 1; j--)
    {

        cout << "*";
    }
   
}


return 0;
}