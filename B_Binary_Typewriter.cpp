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
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }cout<<endl;
#define X ct('X')
#define sort(a)  sort(a.begin(),a.end());
#define vin(a,n) vector<ll> a(n); in(a,n);
const  int MOD =1e9+7;

using namespace std;

void solve()
{
    // Your code here
    int n;
    string s;
    cin>>n>>s;
    char lst='0';
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=lst)
        {
            ans++;
            lst=s[i];
        }
    }
    if(ans>2)
    {
        ct(n+ans-2);
    }
    else if(ans==2)
    {
        ct(ans+n-1);
    }
    else
    {
        ct(ans+n);
    }
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