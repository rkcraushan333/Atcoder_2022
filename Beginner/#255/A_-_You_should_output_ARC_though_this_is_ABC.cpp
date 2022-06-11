#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
const int mod = 1e9 + 7;
int fastpow(int a, int b)
{
    if (b == 0)
        return 1;
    int t = fastpow(a, b / 2);
    if (b % 2 == 0)
        return (t * t);
    else
        return (a * t * t);
}
// by inforkc
void inforkc()
{
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int k;
            cin >> k;
            if (i == a && j == b)
                cout << k << endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    inforkc();
    return 0;
}