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
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }

using namespace std;

void solve()
{
    // Your code here
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> b(m);
    in(b, m);
    sort(b.begin(), b.end());
    for (int i = 0; i < q; i++)
    {
        int x;
        cn(x);
        if (x < b[0])
        {
            ct((b[0] - 1));
            return;
        }
        else if (x > b[m- 1])
        {
            ct((n - b[m- 1]));
            // ct("e");
            // ct(x);
            return;
        }
        else
        {
            auto l = lower_bound(b.begin(), b.end(), x);
            l--;
            auto r = upper_bound(b.begin(), b.end(), x);
            // r++;
            int dist=*r-*l;
            ct(dist/2);
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}