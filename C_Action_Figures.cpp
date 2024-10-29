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
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(n, 0);
    int check = 0;
    int count = n / 2;
    for (int i = n - 1; i >= 0 && count > 0; i--)
    {
        if (s[i] == '1')
        {
            if (i - check > 0)
            {
                v[i] = 1;
                count--;
                check++;
            }
        }
        else if (check > 0)
        {
            check--;
        }
        // ct(check);
    }
    ll ans = 0;
    // out(v,n);
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            ans += (i + 1);
        }
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