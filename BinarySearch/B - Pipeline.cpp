
  // n = 15, k = 4 Is this possible ? let's see!

  // k = 4  ==>  2, 3, 4  => 2 + 3 + 4 => 9 which is very much less than 15.  
  // Do you think it will have 9 output pipes ?? No. It's not. let's see!

  // If all the splitters are connected to each other, then the splitter with 4 output pipes will have 3 because one
  // water flow pipe is connected to another splitter...

  // IMPORTANT KEY POINT!

  // Then, 1 + (2-1) + (3-1) + (4-1) --> Try to understand this(Every splitter outputs are reduced by 1, except for the last one).
  
  //       1 + (1    +   2   +  3) >= 15   // Then only it is possible right, now let's get into more generic terms.

  //       1 + (1+2+3+...k-1) >= n
  //       1 + S >= n    ==>   S is sum of (k-1) terms
  //           S >= (n-1)   ==> S >= n-1      // If this is true then the solution exists. Let's see how to find that.

  // n = 13, k = 6

  // 26 > 13 ==> So, answer exists
  // There are exactly 5 splitters.

  // 2 3 4 5 6     

  // Note that you need to find how many minimum splitters possible, not the output pipes count. 

  // There are five splitters. 

  // 0 1 2 3 4 5    
  // We need to minimize the splitters. So just greedily pick all the maximum splitters until it's sum < n.
  // 5 + 4 + 3 = 12. Max. Splitters picked is 3 and then we need to add one.

  // Binary search will help us from here onwards.




#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sum(ll n){
  return n*(n+1)/2;
}


int main() {

  ll n, k;
  cin>>n>>k;

  ll s = sum(k-1);

  if (s >= n-1){

    ll low = 0, high = k-1;

    while (low <= high){
      ll mid = low + (high-low)/2;

      ll p = s - sum(mid);

      if (p >= n-1){
        low = mid + 1;
      }
      else{
        high = mid - 1;
      }
    }

    cout<<k-high-1<<endl;
    return 0;
  }
  else{
    cout<<-1<<endl;
  }
  

  return 0;

}