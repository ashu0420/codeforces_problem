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
    int n, p;
    cin >> n >> p;
    vector<pair<int, int>> v(n);
    fr(int, 0, n)
    {
        cn(v[i].second);
    }
    fr(int, 0, n)
    {
        cn(v[i].first);
    }
    sort(v.begin(), v.end());
    ll cost = p;
    int count = 1;
    // fr(int, 0, n)
    // {
    //     // ct(v[i].first);
    //     // // ct(" ");
    //     // ct(p);
    //     // ct(count);
    //     if (p < v[i].first)
    //     {
    //         v[i].first = p;
    //     }
    // }
    fr(int, 0, n)
    {
        if (count == n)
        {
            ct(cost);
            return;
        }
        if (v[i].first > p)
        {
            cost += (1LL * p * (n - count));
            count = n;
        }
        else if (count + v[i].second <= n)
        {
            count += v[i].second;
            cost += (1LL * v[i].first * v[i].second);
        }
        else
        {
            cost += (1LL * v[i].first * (n - count));
            count = n;
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