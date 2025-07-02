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

void solve()
{
    // Your code here
    int n;
    cn(n);
    vin(a, n);
    vector<int> freq(n + 1, 0);
    vector<int> b(n, 0);
    set<int> s;
    s.insert(0);
    ll ans = 0;
    ll temp = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
        freq[a[i]]++;
        if (freq[a[i]] > 1)
        {
            s.insert(a[i]);
        }
        b[i] = *s.rbegin();
        
    }
    
    vector<int> frc(n + 1, 0);
    vector<int> c(n, 0);
    set<int> sc;
    sc.insert(0);
    for (int i = 0; i < n; i++)
    {
        ans += b[i];
        frc[b[i]]++;
        if (frc[b[i]] > 1)
        {
            sc.insert(b[i]);
        }
        c[i] = *sc.rbegin();
        temp += c[i];
    }
    // out(c,n);

    // ct(temp);
    for(int i=n-1;i>=0;i--)
    {
        if(c[i]!=0)
        {
            ans+=temp;
            temp-=c[i];
        }
    }
    
    // out(b,n);
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