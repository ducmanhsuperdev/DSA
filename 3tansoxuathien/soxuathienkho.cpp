#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 


int main (){

   ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

// declare variable; 
    int n; cin >> n; 
    vector <ll>  a(n); 
    map<ll, int> dem; 


// input
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

// duyệt mảng và đếm số lần xuất hiện 
   for (int i = 0; i < n; i++){
    dem[a[i]]++;
   }


// in ra số lần xuất hiện 

for (pair <ll,int> x : dem) {
  cout << x.first << " " << x.second << "\n";
}

   
return 0; 
}