#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define FOR(i, a, n) for (int i = a; i<n; i++)
#define pr(a) cout << a << endl;
#define in(a) cin>>a;
#define ps(a) cout << a << " ";
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " ")), cout<<"\n"

void init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}

vector<bool> isVis;
vector<int> subOrdinates;
vector<vector<int>> adj;

int calc(int par, int cur){

    for (int child : adj[cur]){
        if (child != par){
            subOrdinates[cur] += calc(cur, child);
        }
    }
    return subOrdinates[cur] + 1;
}

int getHeight(int cur){
    int height = 0;
    isVis[cur] = true;
    for (int child : adj[cur]){
        if (!isVis[child]){
            height = max(height, getHeight(child));
        }
    }
    return (height + 1);
}

int getDiameter(int cur){

    int height = 0;

    isVis[cur] = true;

    for (int child : adj[cur]){
        if (!isVis[child]){
            height += getHeight( child);
        }
    }

    height = height + 1;

    int maxDiameter = 0;

    for (int child : adj[cur]){
        if (!isVis[child]){
            maxDiameter = max(maxDiameter, getDiameter(child));
        }
    }
    return (max(height, maxDiameter));
}

int maxDist = -1, farthestNode;

void dfs(int node, int distance){

    if (distance > maxDist){
        maxDist = distance;
        farthestNode = node;
    }

    isVis[node] = true;
    for (int neighbor : adj[node]){
        if (!isVis[neighbor]){
            dfs(neighbor, distance+1);
        }
    }
}


int main() {

    init();

    int n;

    cin>>n;

    subOrdinates.resize(n+1);
    isVis.resize(n+1, false);


    adj.resize(n+1, vector<int>());

    FOR(i, 0, n-1){
        int a, b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(1, 0);
    int startNode = farthestNode;
    isVis.assign(n+1, false);
    maxDist = -1;

//    pr(getDiameter(1)-1);

    dfs(startNode, 0);
//    isVis.assign(n+1, false);

    pr(maxDist*3);

//    pr(getHeight(1));



    return 0;
}














