#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;

  while (t--){
    int n, m;

    cin>>n>>m;


    if (n < 2){
      cout<<0<<endl;
    }
    else if (n >= 3){
      cout<<m*2<<endl;
    }
    else{
      cout<<m<<endl;
    }


  }

  return 0;
}
