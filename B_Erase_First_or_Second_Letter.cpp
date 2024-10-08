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
    int n;
    cn(n);
    string s;
    cn(s);
    vector<int> visited(26, 0);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[s[i] - 'a'] == 0)
        {
            visited[s[i] - 'a'] = 1;
            ans += n - i;
        }
    }
    ct(ans);
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
