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
    int n;
    string s, t;
    cin >> n >> s >> t;
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            num1++;
        }
        if (s[i] != t[n - 1 - i])
        {
            num2++;
        }
    }
    bool flag = 0;
    if (num1 > num2)
    {
        flag = 1;
    }
    // ct(num1);
    // ct(num2);
    // ct(flag);
    int num = min(num1, num2);
    // ct(num);
    int ans=(2*num-1);
    if(flag^((num-1)&1)&&num1!=num2)
    {
        ans++;
    }
    if(num==0||num==1)
    {
        flag?ct("2"):ct(num);
        return;
    }
    
    ct(ans);
    return;
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