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
    vector<int> pre(n,0),suff(n,0);
    set<char> st;
    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
        pre[i]=st.size();
    } set<char> pt;
    for(int i=n-1;i>=0;i--)
    {
        pt.insert(s[i]);
        suff[i]=pt.size();
    }
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        ans=max(ans,pre[i]+suff[i+1]);
        // ct(ans);
    }
    ct(ans);
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