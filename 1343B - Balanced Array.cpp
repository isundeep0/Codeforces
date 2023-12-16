#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--){
    int n;

    cin>>n;

    if ((n/2)%2 != 0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      int even = 0;
      for (int i = 0; i<n/2; i++){
        even += 2;
        cout<<even<<" ";
      }
      int odd = 1;
      for (int i = 0; i<n/2; i++){
        if (i == (n/2) - 1){
          cout<<odd + n/2<<endl;
          break;
        }
        cout<<odd<<" ";
        odd += 2;
      }
    }

    // O(N)

  }

  return 0;
}

