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
#define X ct('X')
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n, k;
    cin >> n >> k;
    // vin(a,n);
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cn(a[i]);
    }
    int cnt = 0;
    vector<int> pr(n + 1, 0), suf(n + 1, 0);
    bool flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] <= k)
        {
            cnt++;
        }
        if (i != 1 && cnt > (i / 2))
        {
            py;
            return;
        }
        if (i % 2 == 0)
        {
            if (cnt == i / 2 && flag == 1)
            {
                py;
                return;
            }
            if (cnt == i / 2 && flag == 0)
            {
                pr[i] = 1;
                flag = 1;
            }
        }
    }
    int pcnt = 0;
    flag = 0;
    int l = 1;
    for (int i = n; i > 0; i--, l++)
    {
        if (a[i] <= k)
        {
            pcnt++;
        }
        if (l != 1 && pcnt > (l / 2))
        {
            py;
            return;
        }
        if (l % 2 == 0)
        {
            if (pcnt == l / 2 && flag == 1)
            {
                py;
                return;
            }
            if (pcnt == l / 2 && flag == 0)
            {
                suf[i] = 1;
                flag = 1;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (pr[i] == 1)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (suf[j] == 1)
                {
                    py;
                    return;
                }
            }
            pn;
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
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}