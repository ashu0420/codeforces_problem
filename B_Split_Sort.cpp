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
    int n;
    cn(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cn(x);
        mp[x] = i;
    }
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (mp[i] > mp[i + 1])
        {
            count++;
        }
    }
    ct(count);
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