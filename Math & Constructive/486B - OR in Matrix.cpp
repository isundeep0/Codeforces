#include <bits/stdc++.h>
using namespace std;

int main() {

  int m, n;
  cin>>m>>n;

  vector<vector<int>> v(m, vector<int> (n)), w(m, vector<int>(n, 1));

  for (int i = 0; i<m; i++){
    for (int j = 0; j<n; j++){
      cin>>v[i][j];
      if (v[i][j] == 0){
        for (int k = 0; k<n; k++){
          w[i][k] = 0;
        }
        for (int k = 0; k<m; k++){
          w[k][j] = 0;
        }
      }
    }
  }

  for (int i = 0; i<m; i++){
    for (int j = 0; j<n; j++){
      int y = 0;
      for (int k = 0; k<n; k++){
        y = y | w[i][k];
      }
      for (int k = 0; k<m; k++){
        y = y | w[k][j];
      }
      if (y != v[i][j]){
        cout<<"NO"<<endl;
        return 0;
      }
    }
  }

  cout<<"YES"<<endl;

  for (int i = 0; i<m; i++){
    for (int j = 0; j<n; j++){
      cout<<w[i][j]<<" ";
    }
    cout<<endl;
  }


  return 0;
}
