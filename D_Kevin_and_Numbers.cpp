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
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n, m;
    cin >> n >> m;
    map<int, int> fa, fb;
    set<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cn(x);
        fa[x]++;
        a.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cn(x);
        fb[x]++;
        b.insert(x);
    }
    while (1)
    {
        if (a.empty() && b.empty())
        {
            py;
            return;
        }
        if (a.empty() || b.empty())
        {
            pn;
            return;
        }
        int mxa = *a.rbegin();
        int mxb = *b.rbegin();
        if (mxa > mxb)
        {
            pn;
            return;
        }
        if (mxa == mxb)
        {
            int mn = min(fa[mxa], fb[mxa]);
            fa[mxa] -= mn;
            fb[mxa] -= mn;
            if (fa[mxa] == 0)
            {
                a.erase(mxa);
            }
            if (fb[mxa] == 0)
            {
                b.erase(mxb);
            }
        }
        else
        {
            b.erase(mxb);
            b.insert(mxb / 2);
            b.insert((mxb + 1) / 2);
            fb[mxb / 2] += fb[mxb];
            fb[(mxb + 1) / 2] += fb[mxb];
            fb[mxb] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}