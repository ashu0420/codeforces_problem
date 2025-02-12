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
    string s;
    cn(s);
    string l = "9";
    int ans = 9;
    string temp = s;
    for (auto i : s)
    {
        if (i == '7')
        {
            ct(0);
            return;
        }
    }
    int cnt = 0;
    bool flag = 0;
    for (auto k : s)
    {
        cnt = 0;
        temp = s;
        for (int i = 0; i < 9 && flag == 0; i++)
        {
            ll tx = stoll(temp) + stoll(l);
            cnt++;
            temp = to_string(tx);
            // ct(temp);
            for (auto j : temp)
            {
                if (j == '7')
                {
                    ans = min(ans, cnt);
                    flag = 1;
                    // X;
                    break;
                }
            }
        }
        flag = 0;
        l+="9";
        // ct(l);
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
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}