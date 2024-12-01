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
    ll n, m, k;
    cin >> n >> m >> k;
    if ((k < (n + m)-2) || ((k % 2) != ((n + m) % 2)))
    {
        pn;
        return;
    }
    py;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (i == 0 && j == 0 || i == 1 && j == 0 || (n - 1) % 2 == 0 && i == n - 1 && j % 2 == 0 || (n - 1) % 2 == 1 && i == n - 1 && j % 2 == 1)
            {
                cout << "R ";
            }
            else
            {
                cout << "B ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0 && i % 2 == 0 || j == 1 && i == 2)
            {
                cout << "R ";
            }
            else
            {
                cout << "B ";
            }
        }
        cout << endl;
    }
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