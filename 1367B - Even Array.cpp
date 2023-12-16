#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--){
    int n;

    cin>>n;

    

    int oddCount = 0, evenCount = 0, moves = 0;


    for(int i = 0; i<n; i++){
      int a;
      cin>>a;
      if (a%2 != i%2){
        
        if (a%2 != 0){
          ++oddCount;
        }
        else{
          ++evenCount;
        }

        if (oddCount && evenCount){
          ++moves;
          --oddCount;
          --evenCount;
        }
      }
    }

    if (!oddCount && !evenCount){
      cout<<moves<<endl;
    }
    else{
      cout<<-1<<endl;
    }



  }

  return 0;
}
