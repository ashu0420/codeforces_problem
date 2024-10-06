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
    int n, x;
    cin >> n >> x;
    unordered_map<int, int> mp;
    fr(int, 0, n)
    {
        int k;
        cn(k);
        mp[k]++;
    }

    fr(int, 0, n + 1)
    {
        if (mp[i] == 0)
        {
            ct(i);
            return;
        }
        if (mp[i] > 1)
        {
            mp[i + x] += (--mp[i]);
        }
    }
    ct(n);
    return;

    // vector<int> v(n + 1, 0);
    // fr(int, 0, n)
    // {
    //     int k;
    //     cn(k);
    //     v[k]++;
    // }
    // fr(int, 0, n + 1)
    // {
    //     if (v[i] > 1)
    //     {
    //         v[i]--;
    //         if (i + x <= n)
    //             v[i + x] += v[i];
    //         v[i] = 1;
    //     }
    //     if (v[i] == 0)
    //     {
    //         ct(i);
    //         return;
    //     }
    // }
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