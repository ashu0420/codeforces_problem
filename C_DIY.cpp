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
    int n;
    cn(n);
    vector<int> v(n);
    in(v, n);
    sort(v);
    vector<int> ans;
    int k = 0;
    int i;
    for (i = 0; i < n && k < 2;)
    {
        if (v[i] == v[i + 1])
        {
            ans.push_back(v[i]);
            k++;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    // ct(i);
    for (int j = n - 1; j > i && k < 4;)
    {
        if (v[j] == v[j - 1])
        {
            ans.push_back(v[j]);
            k++;
            j -= 2;
        }
        else
        {
            j--;
        }
    }
    // out(ans, ans.size());
    if (ans.size() < 4)
    {
        pn;
        return;
    }
    sort(ans);
    py;
    cout << ans[0] << " " << ans[1] << " " << ans[0] << " " << ans[3] << " " << ans[2] << " " << ans[1] << " " << ans[2] << " " << ans[3] << endl;
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