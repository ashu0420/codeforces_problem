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
string to_bin(ll n)
{
    string s = "";
    while (n > 0)
    {
        s += to_string(n % 2);
        n /= 2;
    }
    // reverse(s.begin(), s.end());
    return s;
}

void solve()
{
    // Your code here
    ll b, c, d;
    cin >> b >> c >> d;
    string sb, sc, sd;
    sb = to_bin(b);
    sc = to_bin(c);
    sd = to_bin(d);
    int sz = max(sb.size(), max(sc.size(), sd.size()));
    if (sz > sb.size())
    {
        for (int i = sb.size(); i < sz; i++)
        {
            sb += "0";
        }
    }
    if (sz > sc.size())
    {
        for (int i = sc.size(); i < sz; i++)
        {
            sc += "0";
        }
    }
    if (sz > sd.size())
    {
        for (int i = sd.size(); i < sz; i++)
        {
            sd += "0";
        }
    }
    string a = "";
    for (int i = 0; i < sd.size(); i++)
    {
        if(sd[i]==sb[i])
        {
            a+="0";
        }
        else if(sd[i]!=sc[i])
        {
            a+="1";
        }
        else
        {
            ct("-1");
            return;
        }
    }
    // reverse(a.begin(),a.end());
    ll ans=0;
    ll t=1;
    for(int i=0;i<a.size();i++)
    {
        ans+=t*(a[i]-'0');
        t*=2;
    }
    ct(ans);
    // ct(sb);
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