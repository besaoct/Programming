#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, x, y;
        cin >> a >> b >> x >> y;
        cout << ((a / x) > (b / y) ? "Chefina" : (a / x == b / y) ? "Both": "Chef")
             << endl;
    }
    return 0;
}