#include <iostream>
#include <vector>

#define endl '\n'

using namespace std;

vector<int> visited, pai, adj;

void dfs(int v)
{
    visited[v] = 1;
    for (int x : adj)
    {
        if (visited[x])
            continue;
        pai[x] = v;
        dfs(x);
    }
}