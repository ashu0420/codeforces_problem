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
    string a, b;
    cin >> a >> b;
    ll sig = LONG_LONG_MAX;
    vector<int> va(26, -1), vb(26, -1);
    for (int i = 1; i < a.size(); i++)
    {
        if (va[a[i] - 'a'] < 0)
        {
            va[a[i] - 'a'] = i;
        }
    }
    for (int i = b.size() - 2; i >= 0; i--)
    {
        if (vb[b[i] - 'a'] < 0)
        {
            vb[b[i] - 'a'] = i;
        }
    }
    int curr = -1;
    for (int i = 0; i < 26; i++)
    {
        if (sig > va[i] + b.size() - vb[i] && va[i] >= 0 && vb[i] >= 0)
        {
            sig = va[i] + b.size() - vb[i];
            curr = i;
        }
    }
    string ans = "-1";
    if(curr!=-1)
    {
        ans=a.substr(0,va[curr])+b.substr(vb[curr],b.size()-vb[curr]);
    }
// out(va,26);
// out(vb,26);
    // char x = 'a';
    // for (int i = 0; i < 26; i++)
    // {
    //     string pa = "";
    //     pa += a[0];
    //     string pb = "";
    //     pb += b[b.size() - 1];
    //     int j;
    //     int flag = 0;
    //     for (j = 1; j < a.size(); j++)
    //     {
    //         pa += a[j];
    //         if (a[j] == x)
    //         {
    //             flag++;
    //             break;
    //         }
    //     }
    //     int k;
    //     for (k = b.size() - 2; k >= 0; k--)
    //     {
    //         if (b[k] == x)
    //         {
    //             flag++;
    //             break;
    //         }
    //         pb = b[k] + pb;
    //     }
    //     if (sig > j + b.size() - k && flag == 2)
    //     {
    //         ans = pa + pb;
    //         sig = j + b.size() - k;
    //     }
    //     // ct(pa);
    //     // ct(pb);
    //     // ct(x);
    //     x++;
    // }

    // pa+=a[0];
    // unordered_map<char ,int>mp;
    // for (int i = 1; i < a.size()&&i<sig; i++)
    // {
    //     pa+=a[i];
    //     string pb="";
    //     pb+=b[b.size()-1];
    //     if(mp[a[i]]<1)
    //     for (int j = b.size() - 2; j >= 0 && i + b.size() - j < sig; j--)
    //     {
    //         if (a[i] == b[j])
    //         {
    //             ans = pa + pb;
    //             sig = i + b.size() - j;
    //             break;
    //             // ct(ans);
    //             // cout<<i<<" "<<j<<endl;
    //         }
    //         pb=b[j]+pb;
    //     }
    //     mp[a[i]]++;
    // }
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}