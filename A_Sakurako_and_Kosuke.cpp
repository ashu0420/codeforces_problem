#include <bits/stdc++.h>
#define ll long long
#define li long
#define cn(n) cin >> n
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define ct(c) cout << c << endl
#define fr(dt, a, b) for (dt i = a; i < b; i++)
#define in(a, n) \
    fr(ll, 0, n) { cn(a[i]); }
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    int pos = 0;
    int i = 1;
    bool flag = 0;
    while (abs(pos) < n)
    {
        if (flag == 0)
        {
            pos -= (2 * i - 1);
            i++;
            flag = 1;
        }
        else
        {
            pos += (2 * i - 1);
            i++;
            flag = 0;
        }
    }
    flag?ct("Kosuke"):ct("Sakurako");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}