#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--){
    int n;

    cin>>n;

    

    int cnt = 0, moves = 0;

    for(int i = 0; i<n; i++){
      int a;
      cin>>a;
      if (a%2 != i%2){
        ++cnt;
        if (cnt == 2){
          ++moves;
          cnt = 0;
        }
      }
    }

    if (cnt == 0){
      cout<<moves<<endl;
    }
    else{
      cout<<-1<<endl;
    }



  }

  return 0;
}
