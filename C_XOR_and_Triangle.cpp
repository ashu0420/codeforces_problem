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
    int x;
    cn(x);
    vector<int> v;
    int temp = x;
    while (x > 0)
    {
        v.push_back(x % 2);
        x /= 2;
    }

    bool flag = 0;
    for (int i = 0; i < v.size() - 2; i++)
    {
        if (v[i] != v[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        ct(-1);
        return;
    }
    reverse(v.begin(), v.end());
    vector<int> ans(v.size(), 1);
    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = 1;
            break;
        }
    }
    ans[0] = 0;
    // bool flag1 = 0, flag2 = 0;
    // for (int i = 1; i < ans.size(); i++)
    // {
    //     if (flag1 == 0 && ans[i] == 0)
    //     {
    //         ans[i] = 1;
    //         flag1 = 1;
    //     }
    //     else if (flag2 == 0 && ans[i] == 1)
    //     {
    //         ans[i] = 0;
    //         flag2 = 1;
    //     }
    // }

    // ans.push_back(0);
    ll k = 1;
    reverse(ans.begin(), ans.end());
    ll y = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        y += (ans[i] * k);
        k *= 2;
    }
    ct(y);
    // out(ans, ans.size());
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