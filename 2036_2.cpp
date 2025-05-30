#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, a[20];
vector<int> x;
vector<vector<int>> ans;
map<vector<int>, int> m;
void Try(int k, int s)
{
    for (int i = k; i <= n; i++)
    {
        Try(i, s);
        x.push_back(a[i]);
        if ((s + a[i]) % 2 == 1)
        {
            if (m[x] == 0)
            {
                m[x]++;
                ans.push_back(x);
            }
        }
        Try(i+1, s + a[i]);
        x.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ans.clear();
        m.clear();
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        Try(0, 0);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
                cout << ans[i][j] << " ";
            cout << endl;
        }
    }
}
