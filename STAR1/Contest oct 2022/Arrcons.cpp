#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int x, y, P;
ll Pow(ll b, ll x)
{
    ll P = 1;
    while (x)
    {
        if (x % 2 == 1)
            P = P * b % 998244353;
        b = b * b % 998244353;
        x /= 2;
    }
    return P;
}

ll count(int i, int j)
{
    return ((i / (1 << (j + 1))) << j) + (max(0ll, i % (1 << (j + 1)) - (1 << j) + 1));
}

void solve()
{
    cin >> x >> y;
    P = 0;
    for (int i = 0; i < 31; ++i)
        P = (P + (Pow(count(y, i), x) << i) % 998244353) % 998244353;
    cout << P << endl;
}
signed main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
        solve();
}