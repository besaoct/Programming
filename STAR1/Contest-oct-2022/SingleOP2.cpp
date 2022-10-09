#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, y, f = 0;
        string s;
        cin >> l >> s;

        for (y = 0; y < l; y++)
        {
            f++;
            if (s[y + 1] == '1')
            {
                break;
            }
        }
        cout << f << endl;
    }
    return 0;
}