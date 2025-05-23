#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int parent[1005];
int cycle_end, cycle_start;

bool dfs(int u, int p) {
    used[u] = true;
    
    for (int v : ke[u]) {
        if (v == p) continue;
        
        if (!used[v]) {
            parent[v] = u;
            if (dfs(v, u)) return true;
        } 
        else {
            if (v == 1) {
                cycle_end = u;
                cycle_start = v;
                return true;
            }
        }
    }
    return false;
}

void printCycle(int start, int end) {
    vector<int> path;
    
    for (int v = end; v != start; v = parent[v]) {
        path.push_back(v);
    }
    
    cout << start << " ";
    
    for (int i = path.size() - 1; i >= 0; i--) {
        cout << path[i] << " ";
    }
    
    cout << start;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        for (int i = 1; i <= n; i++) {
            ke[i].clear();
        }
        memset(used, false, sizeof(used));
        memset(parent, 0, sizeof(parent));
        cycle_start = -1;
        cycle_end = -1;
        
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        
        bool has_cycle = false;
        
        has_cycle = dfs(1, -1);
        
        if (has_cycle) {
            printCycle(cycle_start, cycle_end);
        } else {
            cout << "NO";
        }
        cout << endl;
    }
    
    return 0;
}
