#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<ll> binS(s.length() + 1, 0);
        binS[binS.size() - 1] = 1;
        binS[binS.size() - 2] = 1;
        for (int i = s.length() - 2; i >= 0; i--)
        {
            if (s[i] == s[i + 1])
                binS[i] = binS[i + 1];
            else
                binS[i] = (binS[i + 1] + binS[i + 2]) % 998244353;
        }
        cout << binS[0] % 998244353 << endl;
    }
    return 0;
};