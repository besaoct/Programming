#include <bits/stdc++.h>
#define int long long
#define ll long long
#define Md 1000000007
using namespace std;
ll Pow(ll b, ll n)
{
    ll S = 1;
    while (n)
    {
        if (n % 2 == 1)
            S = S * b % Md;
        b = b * b % Md;
        n /= 2;
    }
    return S;
}
ll Iv(int x)
{
    return Pow(x, Md - 2);
}
int n, m, s, a[3], b[3];
void Ret()
{
    cin >> n >> m;
    a[0] = (vector<int>{2, 1, -1, -2, -1, 1}[n % 6] + Pow(2, n)) * Iv(3) % Md;
    a[1] = (vector<int>{-1, 1, 2, 1, -1, -2}[n % 6] + Pow(2, n)) * Iv(3) % Md;
    a[2] = (vector<int>{-1, -2, -1, 1, 2, 1}[n % 6] + Pow(2, n)) * Iv(3) % Md;
    b[0] = (vector<int>{2, 1, -1, -2, -1, 1}[m % 6] + Pow(2, m)) * Iv(3) % Md;
    b[1] = (vector<int>{-1, 1, 2, 1, -1, -2}[m % 6] + Pow(2, m)) * Iv(3) % Md;
    b[2] = (vector<int>{-1, -2, -1, 1, 2, 1}[m % 6] + Pow(2, m)) * Iv(3) % Md;
    cout << ((a[0] * b[0] + a[1] * b[1] + a[2] * b[2]) % Md + Md - 1) % Md << endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
        Ret();
}