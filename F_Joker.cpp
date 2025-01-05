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
    int n, m, q;
    cin >> n >> m >> q;
    int l = m, r = m;
    int l1 = -1;
    int l2 = -1;
    int f = 0;
    int x;
    cn(x);
    q--;
    if (x == m)
    {
        l1 = 1;
        l2 = n;
        cout << "2 ";
        while (q--)
        {
            int i;
            cn(i);
            if (l1 < i)
            {
                l1++;
            }
            if (l2 > i)
            {
                l2--;
            }
            cout << min(n, (l1 + n - l2 + 1)) << " ";
        }
    }
    else
    {
        if (x < l)
        {
            l--;
        }
        else
        {
            r++;
        }
        cout << "2 ";
        while (q--)
        {
            int i;
            cn(i);
            if (l <= i && i <= r && f < 3)
            {
                l1 = 1;
                l2 = n;
                f = 3;
                int ans = 0;
                if (l2 <= r && l2 > 0 && r > 0)
                {
                    l2 = l;
                    r = -1;
                    l = -1;
                }
                else if (l1 >= l && l1 > 0 && l > 0)
                {
                    l1 = r;
                    l = -1;
                    r = -1;
                }
                if (l1 > 0)
                {
                    ans += l1;
                }
                if (l2 > 0)
                {
                    ans += n - l2 + 1;
                }
                if (l > 0 && r > 0)
                {
                    ans += r - l + 1;
                }
                cout << min(ans, n) << " ";
                continue;
            }
            if (i < l && l > 0)
            {
                l--;
            }
            else if (i > r && r > 0)
            {
                r++;
            }
            if (l1 < i && l1 > 0)
            {
                l1++;
            }
            if (l2 > i && l2 > 0)
            {
                l2--;
            }
            if (l2 <= r && l2 > 0 && r > 0)
            {
                l2 = l;
                r = -1;
                l = -1;
            }
            else if (l1 >= l && l1 > 0 && l > 0)
            {
                l1 = r;
                l = -1;
                r = -1;
            }
            int ans = 0;
            if (l1 > 0)
            {
                ans += l1;
            }
            if (l2 > 0)
            {
                ans += n - l2 + 1;
            }
            if (l > 0 && r > 0)
            {
                ans += r - l + 1;
            }
            cout << min(ans, n) << " ";
        }
    }
    cout << endl;
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