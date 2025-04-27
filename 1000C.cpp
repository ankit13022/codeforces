#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define um unordered_map
#define mod 1000000007

void ankit7890()
{
    int n;
    cin >> n;

    vector<vector<int>> E(n);
    vector<int> deg(n);
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        E[u].push_back(v);
        E[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }

    int res = 0;
    multiset<int> s;
    for (int u = 0; u < n; u++)
    {
        s.insert(deg[u]);
    }
    for (int u = 0; u < n; u++)
    {
        s.extract(deg[u]);
        for (auto v : E[u])
        {
            s.extract(deg[v]);
        }
        if (!s.empty())
        {
            res = max(res, deg[u] + *s.rbegin() - 1);
        }
        for (auto v : E[u])
        {
            s.insert(deg[v]);
        }
        s.insert(deg[u]);
        for (auto v : E[u])
        {
            res = max(res, deg[u] + deg[v] - 2);
        }
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_7890;
    cin >> test_7890;

    while (test_7890--)
    {
        ankit7890();
    }

    return 0;
}