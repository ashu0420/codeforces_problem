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
    int k;
    cn(k);
    int i = 0, j = 0;
    int l = 0;
    vector<pair<int, int>> ans;
    while (k > 0)
    {

        if (k >= l)
            k -= l;
        else
        {
            l = 0;
            i++;
        }
        l++;
        ans.push_back({i, j});
        // cout << i << " " << j << endl;
        j++;
    }
    // i++;
    // j = 0;
    // while (k--)
    // {
    //     ans.push_back({i++, j++});
    //     // cout << i++ << " " << j++ << endl;
    // }
    ct(ans.size());
    for (auto g : ans)
    {
        cout << g.first << " " << g.second << endl;
    }
}
// X;
// }

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