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
#define sort(a)  sort(a.begin(),a.end());
#define vin(a,n) vector<ll> a(n); in(a,n);
const  int MOD =1e9+7;

using namespace std;

void solve()
{
    // Your code here
    int a1,a2,a3,a4,a5;
    cin>>a1>>a2>>a4>>a5;
    a3=a1+a2;
    int ans=1;
    if(a2+a3==a4)
    {
        ans++;
    }
    if(a4+a3==a5)
    {
        ans++;
    }
    int temp=0;
    a3=a5-a4;
    if(a3==a2+a1)
    {
        temp++;
    }
    if(a2+a3==a4)
    {
        temp++;
    }
    if(a4+a3==a5)
    {
        temp++;
    }
    ct(max(temp,ans));

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