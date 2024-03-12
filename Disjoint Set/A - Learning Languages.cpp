//
// Created by isund on 12-03-2024.
//


//
// Created by isund on 06-03-2024.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define FOR(i, a, n) for (int i = a; i<n; i++)
#define FORR(i, n) for (int i = n; i>=0; i--)
#define pr(a) cout << a << endl;
#define in(a) cin>>a;
#define ps(a) cout << a;
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " ")), cout<<"\n"
int mod = 1e9 + 7;

void init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}

class DisjointSet{
private:
    vector<int> par, rank;
    int components;
public:
    DisjointSet(int n):components(n){
        par.resize(n+1);
        rank.resize(n+1, 0);
        FOR(i, 0, n+1){
            par[i] = i;
        }
    }

    int findParent(int i){
        if (i == par[i]){
            return i;
        }
        return (par[i] = findParent(par[i]));
    }

    void unionByRank(int i, int j){
        int p1 = findParent(i);
        int p2 = findParent(j);
        if (p1 != p2){
            if (rank[p1] > rank[p2]){
                par[p2] = p1;
            }
            else if (rank[p1] < rank[p2]){
                par[p1] = p2;
            }
            else{
                par[p2] = p1;
                rank[p1]++;
            }
            --components;
        }
    }

    int getComponents(){
        return components;
    }



};

vector<int> findVertice(int x, vector<vector<int>>& v, int m){
    vector<int> ans;
    FOR(i, m+1, v.size()){
        FOR(j, 0, v[i].size()){
            if (v[i][j] == x){
                ans.pb(i+1);
            }
        }
    }
    return ans;
}


int main() {

    init();

    int n, m;
    cin>>n>>m;

    DisjointSet d(n);

    vector<vector<int>> v(n+1, vector<int>());

    int yu = 0;

    FOR(i, 0, n){
        int k;
        cin>>k;
        if(!k) ++yu;
        while (k--){
            int a;
            cin>>a;
            v[i].pb(a);
        }
    }

    if (yu == n){
        pr(n);
        return 0;
    }

    FOR(i, 0, n){
        for (int j = 0; j<v[i].size(); j++){
            int el = v[i][j];
            vector<int> ver = findVertice(el, v, i);
            if (ver.size()){
                for (auto y : ver){
                    d.unionByRank(i+1, y);
                }
            }
        }
    }

    pr(d.getComponents()-1);







    return 0;
}

