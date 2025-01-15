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
    ll n, m;
    cin >> n >> m;
    string s;
    cn(s);
    vector<vector<ll>> arr(n,(vector<ll>(m)));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cn(arr[i][j]);
        }
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        ll temp = 0;
        if (s[i] == 'D')
        {
            for (ll j = 0; j < m; j++)
            {
                temp += arr[x][j];
            }
            arr[x][y] = -temp;
            x++;
        }
        else
        {

            for (ll j = 0; j < n; j++)
            {
                temp += arr[j][y];
            }
            arr[x][y] = -temp;
            y++;
        }
    }
    if (s[s.size()-1] == 'R')
    {
        ll temp = 0;
        for (ll i = 0; i < n; i++)
        {
            temp += arr[i][m-1];
        }
        arr[n-1][m-1] = -temp;
    }
    else
    {
        ll temp = 0;
        for (ll i = 0; i < m; i++)
        {
            temp += arr[n-1][i];
   
        }
        arr[n-1][m-1] = -temp;
        
    }
    
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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
    while (t--)
    {
        solve();
    }
    return 0;
}