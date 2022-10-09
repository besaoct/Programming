#include <bits/stdc++.h>
using namespace std;

int dSum(int n){
   int  dsum = 0;
   while (n)
   {
     dsum= dsum +  (n % 10);
     n = n / 10;
 }
 return dsum;
}


int main(){
int t;
cin>>t;
while(t--){
 
int a; 
cin>> a;
cout << dSum(a) << endl;
 
}
 
return 0;
}