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

using namespace std;

void solve()
{
    // Your code here
    int k;
    cn(k);
    vector<int> rand(k);
    sort(rand.begin(),rand.end());
    unordered_map<int,int> mp;
    for(int i=0;i<k;i++)
    {
        int x;
        cn(x);
        mp[x]++;
    }
    int n=k-2;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(mp[i]>0&&mp[n/i]>0)
            {
                cout<<i<<" "<<n/i<<endl;
                return;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}