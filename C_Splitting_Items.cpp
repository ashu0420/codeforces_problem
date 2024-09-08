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
    fr(ll, 0, n) { cout << a[i] << " "; }

using namespace std;
bool comp(li a, li b)
{
    return a > b;
}
void solve()
{
    li n, k;
    cin >> n >> k;
    vector<li> v(n);
    in(v, n);
    sort(v.begin(), v.end(), comp);
    for (li i = 1; i < n; i+=2)
    {
        if(k==0)
        {
            break;
        }
        if (v[i-1] - v[i] > k)
        {
            v[i] += k;
            k=0;
        }
        else
        {
            k-=v[i-1]-v[i];
            v[i] = v[i-1];
        }
    }
    li a=0,b=0;
    for (li i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            a+=v[i];
        }
        else
        {
           b+=v[i];
        }
    }
    // out(v,n);
    // cout<<endl;
    ct(a-b);
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}