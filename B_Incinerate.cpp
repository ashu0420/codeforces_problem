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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> p(n);
    fr(int, 0, n)
    {
        cin >> p[i].first;
    }
    fr(int, 0, n)
    {
        cin >> p[i].second;
    }
    sort(p.begin(), p.end());

    int crr = p[n - 1].second;
    for (int i = n - 1; i >= 0; i--)
    {
        if (p[i].second > crr)
        {
            p[i].second = crr;
        }
        else
        {
            crr = p[i].second;
        }
    }
    int j = k;
    int i = 0;
    while (i < n)
    {
        if (k < 0)
        {
            pn;
            return;
        }
        if (j >= p[i].first)
        {
            i++;
        }
        else
        {
            k -= p[i].second;
            j += k;
        }
    }
    py;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<p[i].second<<" ";
    // }
    // ct("\n");
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