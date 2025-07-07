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

ll mod_pow(ll x, ll y)
{
    ll result = 1;
    x = x % MOD;
    while (y > 0)
    {
        if (y & 1)
            result = (result * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return result;
}

ll modular_inverse(ll denom)
{
    return mod_pow(denom, MOD - 2);
}

void solve()
{
    // Your code here
    int n;
    cn(n);
    int k;
    cn(k);
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        cn(vp[i].first);
        vp[i].second = i;
    }
    int l = n - 1;
    bool flag = 0;
    for (int i = 0; i < l; i++, l--)
    {
        if (vp[i].first != vp[l].first)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        py;
        return;
    }
    srt(vp);
    vector<pair<int, int>> nw;
    if(k==1)
    {
        py;
        return;
    }
    int sm = vp[k - 2].first;
    for (int i = 0; i < n; i++)
    {
        if (vp[i].first <= sm)
        {
            nw.push_back({vp[i].first, vp[i].second});
        }
    }
    sort(nw.begin(), nw.end(), [](const pair<int, int> &x, const pair<int, int> &y)
         { return x.second < y.second; });
    int i = 0;
    int j = nw.size() - 1;
    // for(auto i:nw)
    // {
    //     cout<<i.first<<" ";
    // }
    int cnt = nw.size();
    vector<int> vis(nw.size(), 0);
    while (i <= j)
    {
        if (nw[i].first == nw[j].first)
        {
            vis[i] = 1;
            vis[j] = 1;
            i++;
            j--;
        }
        else
        {
            if (nw[i].first == sm)
            {
                i++;
                cnt--;
            }
            else if (nw[j].first == sm)
            {
                j--;
                cnt--;
            }
            else
            {
                pn;
                return;
            }
        }
        if(cnt<k-1)
        {
            pn;
            return;
        }
    }
    py;
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