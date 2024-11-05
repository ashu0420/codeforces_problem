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
bool cmp(int a, int b)
{
    return a>b;
}

void solve()
{
    // Your code here
    int n, k;
    cin >> n >> k;
    vector<int> b(k, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        b[x - 1] += y;
    }
    sort(b.begin(), b.end(), cmp);
    ll ans = 0;
    // out(b,k);
    for (int i = 0; i < min(k, n); i++)
    {
        ans += b[i];
    }
    ct(ans);
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