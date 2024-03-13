//
// Created by isund on 13-03-2024.
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

    vector<int> getParVector(){
        return par;
    }

    void printPar(){
        printVector(par);
    }



};




int main() {

    init();

    int n;
    cin>>n;

    if (n == 1){
        pr(1);
        return 0;
    }
    else if (n == 2){
        pr(4);
        return 0;
    }

    DisjointSet d(n);

    unordered_map<ll, int> mp;

    int b = -1;

    FOR(i, 1, n+1){
        int a;
        cin>>a;
        d.unionByRank(i, a);
    }
//
    FOR(i, 1, n+1){
        d.findParent(i);
    }



    vector<int> y = d.getParVector();


    FOR(i, 1, n+1){
        mp[y[i]]++;
    }

    priority_queue<ll> pq;

    for (auto const i : mp){
        pq.push(i.second);
    }

    if (pq.size() < 2){
        ll ui = pq.top();
        pr(ui*ui);
        return 0;
    }


    ll g = pq.top();
    pq.pop();
    ll h = pq.top();
    pq.pop();

    g = (g+h)*(g+h);

    while (!pq.empty()){
        ll t = pq.top();
        pq.pop();
        g += t*t;
    }

    pr(g);

    return 0;
}

