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
    cn(n);
    vector<int> v(n);
    in(v, n);
    vector<int> arr(n);
    fr(int, 0, n)
    {
        arr[i] = i + 1;
    }
    int i = 0, j = n - 1;
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        if (v[l] == arr[i])
        {
            l++;
            i++;
        }
        if (v[r] == arr[j])
        {
            r--;
            j--;
        }
        if (v[l] == arr[j])
        {
            l++;
            j--;
        }
        if (v[r] == arr[i])
        {
            r--;
            i++;
        }
        if (v[l] != arr[i] && v[r] != arr[j] && v[l] != arr[j] && v[r] != arr[i])
        {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
    }
    ct("-1");
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