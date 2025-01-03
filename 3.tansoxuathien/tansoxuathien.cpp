#include <bits/stdc++.h>
using namespace std; 


int main (){

// declare variable; 
    int n; cin >> n; 
    vector <int>  a(n); 
    vector <int> dem(1000007, 0); 


// input
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

// duyệt mảng và đếm số lần xuất hiện 
   for (int i = 0; i < a.size(); i++){
    dem[a[i]]++;
   }

// in ra số lần xuất hiện
for (int i = 0; i < dem.size(); i++){
  if (dem[i]) {
    cout << i << " " << dem[i] << endl; 
  }
}
   
return 0; 
}