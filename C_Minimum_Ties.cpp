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
    int n;
    cn(n);
    if (n % 2)
    {
        for (int i = 1; i <= n; i++)
        {
            int cnt = 1;
            for (int j = i + 1; j <= n; j++,cnt++)
            {
                if (cnt <= n / 2)
                {
                   cout<<"1 ";
                }
                else
                {
                    cout<<"-1 ";
                }
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            int cnt = 1;
            for (int j = i + 1; j <= n; j++,cnt++)
            {
                if (cnt < n / 2)
                {
                    cout<<"1 ";
                }
                else if (cnt == n / 2)
                {
                    cout<<"0 ";
                }
                else
                {
                    cout<<"-1 ";
                }
            }
        }
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=i+1;j<=n;j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    // }
    cout<<endl;
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