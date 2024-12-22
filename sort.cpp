#include <bits/stdc++.h>
using namespace std; 

int main () {

    // asc dsc 
int n; cin >> n;
 vector <int> a(n); 


for (int i = 0; i < n; i++) {
    cin >> a[i];
}

 // day tang dan; 
 sort(a.begin(), a.end()); 
 
 for (int i : a) {
    cout << i << " "; 
 }
cout << endl; 
 //day giam dan; 

 sort(a.rbegin(), a.rend()); 
 
  for (int i : a) {
    cout << i << " "; 
 }


 return 0; 
}


   
