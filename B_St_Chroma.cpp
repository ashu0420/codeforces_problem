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
    fr(ll, 1, n+1) { cn(a[i]); }
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }cout<<endl;
#define out1(a, n) \
    fr(ll, 1, n+1) { cout << a[i] << " "; }cout<<endl;
#define X ct('X')
#define srt(a)  sort(a.begin(),a.end());
#define rev(a)  reverse(a.begin(),a.end());
#define vin(a,n) vector<ll> a(n); in(a,n);
#define vin1(a,n) vector<ll> a(n+1); in1(a,n);
const  int MOD =1e9+7;

using namespace std;

void solve()
{
    // Your code here
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        if(i==x)
        {
            continue;
        }
        cout<<i<<" ";
    }
    if(x<n)
    ct(x);
    else
    cout<<endl;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cout.precision(10);
cout.setf(ios::fixed);
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}