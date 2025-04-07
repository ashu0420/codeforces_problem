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
#define X ct('X')
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<int> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    vin(a, n);
    vin(b, n);
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        s.insert({min(a[i], b[i]), max(a[i], b[i])});
    }

    int j = s.size();
    s.clear();
    if ((n + 1) / 2 != j)
    {
        ct(-1);
        return;
    }
    vector<pair<int, int>> ans;
    if (n % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i] && i != n / 2)
            {
                ans.push_back({i, n / 2});
                swap(a[i], a[n / 2]);
                swap(b[i], b[n / 2]);
                break;
            }
        }
    }
    int k = (n + 1) / 2;
    unordered_map<int, int> mp;
    for (int i = 0; i < n / 2; i++)
    {
        while (mp[min(a[k], b[k])] != 0)
        {
            k++;
        }

        if (mp[min(a[i], b[i])] == 0)
            mp[min(a[i], b[i])] = n - 1 - i;
        else
        {
            ans.push_back({i, k});
            swap(a[i], a[k]);
            swap(b[i], b[k]);
            k++;
            mp[min(a[i], b[i])] = n - 1 - i;
        }
    }

    for (int i = (n + 1) / 2; i < n; i++)
    {
        while (mp[min(a[i], b[i])] != i)
        {
            int l = mp[min(a[i], b[i])];
            swap(a[i], a[l]);
            swap(b[i], b[l]);
            ans.push_back({i, l});
        }
    }
    ct(ans.size());
    for (auto i : ans)
    {
        cout << i.first + 1 << " " << i.second + 1 << endl;
    }
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