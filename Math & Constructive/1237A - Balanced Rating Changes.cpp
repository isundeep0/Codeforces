#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;

  vector<int> v(n);

  int ans = 0;

  for (int i = 0; i<n; i++){
    cin>>v[i];
  }

  int flag = 0;

  for (int i = 0; i<v.size(); i++){
    if (v[i]%2 != 0){
      float k = (float)v[i]/2;
      if (flag == 0){
        v[i] = floor(k);
        flag = 1;
      }
      else{
        v[i] = ceil(k);
        flag = 0;
      }
    }
    else{
      v[i] /= 2;
    }
  }

  for (int i = 0; i<n; i++){
    cout<<v[i]<<endl;
  }


  return 0;
}
