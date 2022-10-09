#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string s){
    string p;
    int i;
    for (i = s.size() - 1; i >= 0; i--)
    {
        p.push_back(s[i]);
    }
    cout << (s == p ? "Palindrome" : "Not palindrome") << endl;
}


int main(){
int t;
cin>>t;
cin.ignore();
while(t--){
string a; 
getline(cin,a);
isPalindrome(a);
}
 
return 0;
}