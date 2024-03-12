//
// Created by isund on 11-03-2024.
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
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " "))
int mod = 1e9 + 7;

void init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}

//class DisjointSet{
//private:
//    vector<int> par, rank;
//public:
//    DisjointSet(int n){
//        par.resize(n+1);
//        rank.resize(n+1, 0);
//        FOR(i, 0, n+1){
//            par[i] = i;
//        }
//    }
//
//    int findParent(int i){
//        if (i == par[i]){
//            return i;
//        }
//        return (par[i] = findParent(par[i]));
//    }
//
//    void unionByRank(int i, int j){
//        int p1 = findParent(i);
//        int p2 = findParent(j);
//        if (p1 != p2){
//            if (rank[p1] > rank[p2]){
//                par[p2] = p1;
//            }
//            else if (rank[p1] < rank[p2]){
//                par[p1] = p2;
//            }
//            else{
//                par[p2] = p1;
//                rank[p1]++;
//            }
//        }
//    }
//
//    int getComponents(){
//        int cnt = 0;
//        FOR(i, 0, par.size()-1){
//            if (par[i] == i){
//                ++cnt;
//            }
//        }
//        return cnt;
//    }
//
//
//
//};



vector<int> computeLPS(string pattern)
{

    int m = pattern.size();

    vector<int> LPS(m, 0);

    int j = 0;

    for (int i = 1; i < m; i++)
    {

        while (j > 0 && pattern[j] != pattern[i])
        {
            j = LPS[j - 1];
        }

        if (pattern[j] == pattern[i])
        {
            ++j;
        }
        LPS[i] = j;
    }


    return LPS;
}


int main() {

    init();

    int t;
    cin >> t;

    while (t--) {

        int n;
        string S;
        cin>>n>>S;

        string pat1 = "map";
        string pat2 = "pie";
        string pat3 = "mapie";

        vector<int> LPS1 = computeLPS(pat1);
        vector<int> LPS2 = computeLPS(pat2);
        vector<int> LPS3 = computeLPS(pat3);

        int i = 0, j = 0;

        int mp = 0, pi = 0, mapi = 0;

        while (i<S.size() && j<pat1.size()){

            if (pat1[j] == S[i]){
                ++i, ++j;
            }
            else{
                j = ((j>0) ? LPS1[j-1] : 0);
                if (j == 0 && pat1[j] != S[i]){
                    ++i;
                }
            }

            if (j == pat1.size()){
                ++mp;
                j = 0;
            }

        }

        i = 0, j = 0;

        while (i<S.size() && j<pat2.size()){

            if (pat2[j] == S[i]){
                ++i, ++j;
            }
            else{
                j = ((j>0) ? LPS2[j-1] : 0);
                if (j == 0 && pat2[j] != S[i]){
                    ++i;
                }
            }

            if (j == pat2.size()){
                ++pi;
                j = 0;
            }

        }

        i = 0, j = 0;

        while (i<S.size() && j<pat3.size()){

            if (pat3[j] == S[i]){
                ++i, ++j;
            }
            else{
                j = ((j>0) ? LPS3[j-1] : 0);
                if (j == 0 && pat3[j] != S[i]){
                    ++i;
                }
            }

            if (j == pat3.size()){
                ++mapi;
                j = 0;
            }

        }

        pr(pi+mp-mapi);





    }

    return 0;
}

