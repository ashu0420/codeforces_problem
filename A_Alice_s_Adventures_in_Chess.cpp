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
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    int x = 0, y = 0;

    for (int i = 0; i < 100; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if (x == a && y == b)
            {
                py;
                return;
            }
            if (s[i] == 'N')
            {
                y++;
            }
            else if (s[i] == 'E')
            {
                x++;
            }
            else if (s[i] == 'S')
            {
                y--;
            }
            else if (s[i] == 'W')
            {
                x--;
            }
        }
    }
    pn;
    return;
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