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
    string s;
    cin >> n >> s;
    vector<pair<int, char>> v(26, {0, 'a'});
    for (int i = 0; i < n; i++)
    {
        v[s[i] - 'a'].first++;
        v[s[i] - 'a'].second = s[i];
    }
    sort(v);
    char x;
    for(int i=0;i<26;i++)
    {
        if(v[i].first>0)
        {
            x=v[i].second;
            break;;
        }
    }
    char y=v[25].second;
    for(int i=0;i<n;i++)
    {
        if(s[i]==x)
        {
            s[i]=y;
            break;
        }
    }
    // int x = 0;
    // int ind = -1;
    // int y = INT16_MAX;
    // int indy = -1;
    // for (int i = 0; i < 26; i++)
    // {
    //     if (v[i] > x)
    //     {
    //         x = v[i];
    //         ind = i;
    //     }
    //     if (v[i] < y)
    //     {
    //         y = v[i];
    //         indy = i;
    //     }
    // }
    // ct(ind);
    // ct(indy);
    // // if(ind!=indy)
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == ('a' + indy))
    //     {

    //         s[i] = 'a' + ind;
    //         break;
    //     }
    // }
    ct(s);
    return;
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