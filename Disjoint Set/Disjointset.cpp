//
// Created by isund on 11-03-2024.
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

class DisjointSet{
private:
    vector<int> par, rank;
public:
    DisjointSet(int n){
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
            par[p2] = p1;
        }
    }

    void primt(){
        printVector(par);
    }




};

int main() {
    init();

    DisjointSet d = DisjointSet(7);

    d.unionByRank(1, 2);
    d.unionByRank(2, 3);
    d.unionByRank(4, 5);
    d.unionByRank(6, 7);
    d.unionByRank(5, 6);
    d.unionByRank(3, 7);

    d.primt();
    cout<<"\n";

    cout<<d.findParent(7)<<endl;

    d.primt();

    cout<<"\n";

    cout<<d.findParent(6)<<endl;

    d.primt();

    cout<<"\n";

    cout<<d.findParent(7)<<endl;

    d.primt();






}

