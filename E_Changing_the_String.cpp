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
#define in1(a, n) \
    fr(ll, 1, n + 1) { cn(a[i]); }
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define out1(a, n)                            \
    fr(ll, 1, n + 1) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define srt(a) sort(a.begin(), a.end());
#define rev(a) reverse(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
#define vin1(a, n)       \
    vector<ll> a(n + 1); \
    in1(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n, q;
    cin >> n >> q;
    string s;
    cn(s);
    int ba = 0, cb = 0, bc = 0, ca = 0;
    int bca = 0, cba = 0;
    while (q--)
    {
        char x, y;
        cin >> x >> y;
        if (x == 'b' && y == 'a')
        {
            if (cb > 0)
            {
                cba++;
                cb--;
            }
            else
            {
                ba++;
            }
        }
        else if (x == 'c' && y == 'a')
        {
            if (bc > 0)
            {
                bca++;
                bc--;
            }
            else
            {
                ca++;
            }
        }
        else if (x == 'b' && y == 'c')
        {
            bc++;
        }
        else if (x == 'c' && y == 'b')
        {
            cb++;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b')
        {
            if (ba > 0)
            {
                s[i] = 'a';
                ba--;
            }
            else if (cba > 0)
            {
                s[i] = 'a';
                cba--;
                cb++;
            }
            else if (bca > 0)
            {
                s[i] = 'a';
                bca--;
            }
        }
        else if (s[i] == 'c')
        {
            if (ca > 0)
            {
                s[i] = 'a';
                ca--;
            }
            else if (bca > 0)
            {
                s[i] = 'a';
                bca--;
                bc++;
            }
            else if (cba > 0)
            {
                s[i] = 'a';
                cba--;
            }
            else if (cb > 0)
            {
                s[i] = 'b';
                cb--;
            }
        }
    }
    ct(s);
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