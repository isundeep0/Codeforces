//
// Created by isund on 28-03-2024.
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
#define ps(a) cout << a<<" ";
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

bool primeFactorization(vector<int>& v, int n){
    int k = n;
    int j = 1;
    while (k != 1 && v[j] <= k){
        if (k%v[j] == 0){
            k /= v[j];
        }
        else{
            ++j;
        }
    }
    return (k == 1);
}


int main() {

    init();

    int t;
    cin>>t;


    while(t--){

        int n;

        cin>>n;

        vector<vector<char>> v(2*n, vector<char>(2*n, '#'));

        for (int i = 0; i<2*n; i++){
            for (int j = 2; j<2*n; j++){
                v[i][j] = '.';
                v[i][j+1] = '.';
                j+=3;
            }
            ++i;
            for (int j = 2; j<2*n; j++){
                v[i][j] = '.';
                v[i][j+1] = '.';
                j+=3;
            }
            i+=2;
        }

        for (int i = 2; i<2*n; i++){
            for (int j = 0; j<2*n; j++){
                v[i][j] = '.';
                v[i][j+1] = '.';
                j+=3;
            }
            ++i;
            for (int j = 0; j<2*n; j++){
                v[i][j] = '.';
                v[i][j+1] = '.';
                j+=3;
            }
            i+=2;
        }

        for (int i = 0; i<2*n; i++){
            for (int j = 0; j<2*n; j++){
                ps(v[i][j]);
            }
            cout<<"\n";
        }






    }

    return 0;
}

