#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
cout << "-------------------------" << endl;
while(t--){
 
int a; 
cin>> a;
int *p = &a; // means p = &a and (*p=value at address p = value at address a = a).

cout << "a=" <<a << endl;
cout << "p=" <<p << endl;
cout << "*p=" << *p << endl;
cout << "&a=" << &a << endl;
cout << "&p=" <<&p << endl;
int **pp = &p;  // storing the address of a pointer 'p'  means &p=pp
cout << "---------------"<< endl;
cout << "*p=" << *p << endl; //value at p
cout << "&p=" << &p << endl; //address of p
cout << "pp=" << pp << endl; //value of pp
cout << "*pp=" << *pp << endl; //value at pp
cout << "**pp=" << **pp << endl; // value at *pp
cout << "&pp=" << &pp << endl; //address of pp
**pp = 8; //changing value of a through double pointer
cout << "a=" << a << endl; //printing changed value of a
}
 
return 0;
}