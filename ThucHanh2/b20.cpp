#include <bits/stdc++.h>
using namespace std;


inline int BFS(vector<int> a[])
{
    bitset<100005> bs;
    int res = -1;
    queue<int> q;
    int f[100005] = {};
    int top;
    q.push(1);
    bs[1] = 1;
    while(q.size())
    {
        top = q.front();
        q.pop();
        for(int &i : a[top])
        {
            if(!bs[i])
            {
                f[i] = f[top] + 1;
                res = max(res, f[i]);
                q.push(i);
            }
        }
    }
    return res;
}

int main()
{
    int t, n, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        --n;
        vector<int> a[n + 5];
        while(n--)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        cout << BFS(a) << endl;
    }
    return 0;
}
