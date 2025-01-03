
#include <bits/stdc++.h>
using namespace std; 
int main () {
    long long l,r,x; 
   int n; 
   int i = 0; 
   cin >> n; 
   long long arr[n]; 
   cin >> x; 
   int m = 0; 


for (int i = 0; i < n; i++ ) {
    cin >> arr[i]; 
}


l = 0; r = n - 1; 



while (l <= r) {
    m = (l + r) / 2; 
    if (arr[m] == x) {
        cout << "YES"; 
        return 0;
    }
    else {
        cout << "NO"; 
        return 0; 
    }
    if (arr[m] < x) {
        l = m + 1; 
    }

    if (arr[m] > x) {
        r = m - 1; 
    }
 
}
    return 0; 
}