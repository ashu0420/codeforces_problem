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

void cal(string s,ll &sum)
{
    int n=s.size();
    int k=s[0]-'0';
    if(s.size()==1)
    {
        sum+=k*(k+1)/2;
        return;
    }
    sum+=1LL*k*45*(n-1)*pow(10,n-2);
    sum+=(k-1)*(k)*pow(10,n-1)/2;
    sum+=k*(stoi(s.substr(1))+1);
    cal(s.substr(1),sum);
}

void solve()
{
    // Your code here
    // vector<int> v(10);
    // int n=100;
    // for(int i=0;i<n;i++)
    // {
    //     int k=i;
    //     while(k!=0)
    //     {
    //         v[k%10]++;
    //         k/=10;
    //     }
    // }

    string s;
    cn(s);
    ll sum=0;
    cal(s,sum);
    ct(sum);



}

int main()
{
    int t;
    // t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}