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

vector<pair<ll, pair<ll, ll>>> vp;
vector<int> id;
void solve()
{
    // Your code here
    ll n;
    cn(n);
    vin(a, n);
    int i = 0, j = 0;
    vector<int> vpd(vp.size(), 0);
 
    for (auto l : a)
    {
        while (i > id[j])
        {
            j++;
        }
        if (l == 1)
        {
            while (vpd[i] > 0)
            {
                i++;
            }
            cout << vp[i].second.first << " " << vp[i].second.second << endl;
            vpd[i] = 1;
            i++;
        }
        else
        {
            cout << vp[id[j]].second.first << " " << vp[id[j]].second.second << endl;
            vpd[id[j]] = 1;
            j++;
        }
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
    for (int i = 0; i < 317; i++)
    {
        int x = 0, y = i;
        while (y >= 0)
        {
            int d = 3 * x + 1 + 3 * y + 1;
            vp.push_back({d + 0, {3 * x + 1, 3 * y + 1}});
            vp.push_back({d + 1, {3 * x + 1, 3 * y + 2}});
            vp.push_back({d + 1, {3 * x + 2, 3 * y + 1}});
            vp.push_back({d + 4, {3 * x + 2, 3 * y + 2}});
            x++;
            y--;
        }
    }
    sort(vp);
    for (ll i = 0; i < vp.size(); i++)
    {
        if (vp[i].second.first % 3 == 1 && vp[i].second.second % 3 == 1)
        {
            id.push_back(i);
        }
    }
    while (t--)
    {
        solve();
    }
    return 0;
}