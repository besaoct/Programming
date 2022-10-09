#include <bits/stdc++.h>
using namespace std;

void swaP(int &a, int &b){
    int tmp = a;
    a=b;
    b = tmp;
}

 
int main(){
int t;
cin>>t;
while(t--){
 
int a,b; 
cin>> a>>b;
swaP(a, b);  //swap() is inbuilt function in c++
cout << a << " " << b << endl;
 
}
 
return 0;
}