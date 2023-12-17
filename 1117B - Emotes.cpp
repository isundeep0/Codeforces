#include <bits/stdc++.h>
using namespace std;

int main() {

      int n, m, k;
      cin>>n>>m>>k;

      int prev = INT_MIN, curr = INT_MIN;

      for (int i = 0; i<n; i++){
        int a;
        cin>>a;
        if (a > curr){
          prev = curr;
          curr = a;
        }
        else if (a > prev){
          prev = a;
        }
      }


      long long ans = (long long)(m/(k+1))*(long long)((long long)curr*(long long)k + (long long)prev) + (long long)(m%(k+1))*(long long)curr;

      cout<<ans<<endl;

      //O(N) => for taking input only

      // If input is ignored, then the time and space complexities are O(1)
      
    
  return 0;
}

