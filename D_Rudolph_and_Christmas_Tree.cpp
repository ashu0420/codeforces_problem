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
    int n, d, h;
    cin >> n >> d >> h;
    vector<int> y(n);
    in(y, n);
    vector<int> dist;
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (y[i + 1] - y[i] < h)
        {
            dist.push_back(y[i + 1] - y[i]);
        }
        else
        {
            count++;
        }
    }
    // dist[n - 1] = h;
    // out(dist,n);
    double ans = 0;
    ans = (1.0) * count * d * h / 2;
    for (int i = 0; i < dist.size(); i++)
    {
        double curr = 1.0 * d * (2 * h - dist[i]) * (dist[i]) / (2 * h);
        ans += curr;
    }
    cout << ans << endl;
    // ct(ans);
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