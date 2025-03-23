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
    int n;
    cn(n);
    vin(a, n);
    vector<int> z;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            z.push_back(i);
        }
    }
    if (z.size() == 0)
    {
        ct(1);
        cout << "1 " << n << endl;
        return;
    }
    if (z.size() == 1)
    {
        if (a[0] == 0)
        {
            ct(2);
            ct("1 2");
            cout << "1 " << n - 1 << endl;
            return;
        }
        else if (a[n - 1] == 0)
        {
            ct(2);
            cout << n - 1 << " " << n << endl;
            cout << "1 " << n - 1 << endl;
            return;
        }
        else
        {
            ct(2);
            cout << z[0] + 1 << " " << z[0] + 2 << endl;
            cout << "1 " << n - 1 << endl;
            return;
        }
    }
    int l, r = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            l = min(n - 1, i + 1);
            break;
        }
    }
    if (l > 2)
    {
        // ct(l);
        for (int i = 0; i < l-1; i++)
        {
            if (a[i] == 0)
            {
                ct(3);
                cout << l << " " << r << endl;
                cout << "1 " << l - 1 << endl;
                cout << "1 2" << endl;
                return;
            }
        }
        ct(2);
        cout << l << " " << r << endl;
        cout << "1 " << l << endl;
        return;
    }
    else
    {
        ct(2);
        cout << "1 2" << endl;
        cout << "1 " << n - 1 << endl;
        return;
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