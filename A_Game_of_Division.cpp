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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= k;
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]]==1)
        {
            py;
            ct(i + 1);
            return;
        }
    }
    pn;
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