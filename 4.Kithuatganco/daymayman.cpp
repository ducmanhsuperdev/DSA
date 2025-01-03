#include <bits/stdc++.h>
using namespace std; 


int main (){


    int n; cin >> n; 
    vector <long long> a(n); 
    
// nhập mảng
 for (int i = 0; i < n; i++) cin >> a[i]; 



// kiểm tra dãy giảm dần
int check = 1; 

// check dãy
for (int i = 0; i < n; i++){
    if (a[i] != 4 && a[i] != 7) check = 0; 
}

// check
if (check == 0) 
  cout << "NO"; 
 else
  cout << "YES"; 


    return 0;
}