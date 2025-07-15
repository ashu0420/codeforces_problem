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
    int n, k;
    cin >> n >> k;
    string s;
    cn(s);
    vector<vector<int>> vt(n, vector<int>(k));
    vector<int> d(n + 1, 0);
    vector<int> temp(k);
    for (auto &i : temp)
    {
        i = n + 1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        temp[s[i] - 'a'] = i;
        vt[i] = temp;
    }
    set<int> v;
    int ans = 1;
    // ct(n);
    d[n] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        v.insert(s[i]);
        if (v.size() == k)
        {
            ans++;
            v.clear();
        }

        d[i] = ans;
    }
    // out(d, n);
    int q;
    cn(q);
    while (q--)
    {
        string t;
        cn(t);
        if (t.size() > n)
        {
            ct(0);
            continue;
        }
        int i = -1, j = 0;
        bool flag = 1;
        for (j; j < t.size(); j++)
        {
            if (i >= n - 1)
            {
                flag = 0;
                break;
            }
            i = vt[i + 1][t[j] - 'a'];
            // ct(i);
        }
        if (flag == 0 || i > n)
        {
            ct(0);
            continue;
        }
        i++;
        ct(d[i]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}