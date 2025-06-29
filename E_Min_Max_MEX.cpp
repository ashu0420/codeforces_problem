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
    ll n, k;
    cin >> n >> k;
    vin(a, n);
    vector<int> freq(n + 1, 0);
    for (auto i : a)
    {
        if (i <= n)
            freq[i]++;
    }
    int i;
    for (i = 0; i <= n; i++)
    {
        if (freq[i] < k)
            break;
    }

    int st = 0;
    int en = i;
    while (st <= en)
    {
        int j = (st + en) / 2;
        int kk = 0;
        set<int> s;
        for (auto l : a)
        {
            if (l <= j)
                s.insert(l);
            if (s.size() == j + 1)
            {
                kk++;
                s.clear();
            }
        }
        if (kk < k)
        {
            en = j-1;
        }
        else
        {
            st = j+1;
        }
    }
    ct(st);
    // for (int j = 0; j <= i; j++)
    // {
    //     int kk = 0;
    //     set<int> s;
    //     for (auto l : a)
    //     {
    //         if (l <= j)
    //             s.insert(l);
    //         if (s.size() == j + 1)
    //         {
    //             kk++;
    //             s.clear();
    //         }
    //     }
    //     if (kk < k)
    //     {
    //         ct(j);
    //         return;
    //     }
    // }
    // if(i>1)
    // ct(i+1);
    // else ct(i);
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