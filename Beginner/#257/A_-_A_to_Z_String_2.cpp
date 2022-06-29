#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int a, b;
    cin >> a >> b;
    char c = 'A';
    c += ((b + a - 1) / a) - 1;
    cout << c;
}

signed main()
{
    inforkc();
    return 0;
}