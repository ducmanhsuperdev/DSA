#include <bits/stdc++.h>
using namespace std; 


int main (){


    int n; cin >> n; 
    vector <long long> a(n); 
    
// nhập mảng
    for (int i = 0; i < n; i++) cin >> a[i]; 



// kiểm tra dãy giảm dần
int check = 1; 


for (int i = 0; i < n - 1 ; i++){
    if ( a[i] <= a[i + 1]) {
        check = 0; 
        break;
    }
}


if (check == 0) 
  cout << "NO"; 
 else
  cout << "YES"; 


    return 0;
}