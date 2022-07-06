#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    if (n > 59)
    {
        n -= 60;
        if (n / 10 == 0)
        {
            cout << "22:0" << n << endl;
        }
        else
            cout << "22:" << n << endl;
    }
    else
    {
        if (n / 10 == 0)
        {
            cout << "21:0" << n << endl;
        }
        else
            cout << "21:" << n << endl;
    }
}

signed main()
{
    inforkc();
    return 0;
}