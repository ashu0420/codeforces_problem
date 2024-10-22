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
#define ll int
using namespace std;
int num(string s, vector<int> odd, vector<int> even)
{
    int n = s.size();

    for (int i = 0; i < n; i += 2)
    {
        odd[s[i] - 'a']++;
    }
    for (int i = 1; i < n; i += 2)
    {
        even[s[i] - 'a']++;
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    return n - (even[25] + odd[25]);
}
void solve()
{
    // Your code here
    int n;
    cn(n);
    string s;
    cn(s);
    if (n == 1)
    {
        ct("1");
        return;
    }
    vector<int> odd(26, 0), even(26, 0);
    if (n % 2 == 0)
    {
        ct(num(s, odd, even));
        return;
    }
    vector<int> tempodd(26, 0);
    vector<int> tempeven(26, 0);
    vector<vector<int>> preodd(n, vector<int>(26));
    vector<vector<int>> preeven(n, vector<int>(26));
    vector<vector<int>> sufodd(n, vector<int>(26));
    vector<vector<int>> sufeven(n, vector<int>(26));
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            tempeven[s[i] - 'a']++;
        }
        else
        {
            tempodd[s[i] - 'a']++;
        }
        preeven[i] = tempeven;
        preodd[i] = tempodd;
    }

    tempodd.clear();
    tempeven.clear();
    vector<int> tempodd1(26, 0);
    vector<int> tempeven1(26, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            tempodd1[s[i] - 'a']++;
        }
        else
        {
            tempeven1[s[i] - 'a']++;
        }
        sufodd[i] = tempodd1;
        sufeven[i] = tempeven1;
    }

    int ans = INT_MAX;
    int to = 0, te = 0;
    for (int i = 1; i < n - 1; i++)
    {
        vector<int> todd(26, 0), teven(26, 0);
        to = 0, te = 0;
        for (int j = 0; j < 26; j++)
        {
            todd[j] = preodd[i - 1][j] + sufodd[i + 1][j];
            // ct(sufodd[i+1][j]);
            to = max(to, todd[j]);
            teven[j] = preeven[i - 1][j] + sufeven[i + 1][j];
            te = max(te, teven[j]);
        }

        ans = min(ans, n - 1 - to - te);
    }
    to = 0, te = 0;
    for (int i = 0; i < 26; i++)
    {
        vector<int> todd(26, 0), teven(26, 0);
        todd[i] = preodd[n - 2][i];
        teven[i] = preeven[n - 2][i];
        to = max(to, todd[i]);
        te = max(te, teven[i]);

        ans = min(ans, n - 1 - to - te);
    }
    to = 0, te = 0;
    for (int i = 0; i < 26; i++)
    {
        vector<int> todd(26, 0), teven(26, 0);
        todd[i] = sufodd[1][i];
        teven[i] = sufeven[1][i];
        to = max(to, todd[i]);
        te = max(te, teven[i]);

        ans = min(ans, n - 1 - to - te);
    }
    ct(ans + 1);

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}