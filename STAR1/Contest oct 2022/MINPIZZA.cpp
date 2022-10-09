#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << ((a * b) % 4 == 0 ? (a * b) / 4 : ((a * b) / 4) + 1) << endl;
    }
    return 0;
}
