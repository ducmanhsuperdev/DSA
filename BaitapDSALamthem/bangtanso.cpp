#include <bits/stdc++.h>
using namespace std; 




int main () {
 map <long long, long long> dem; 
 unordered_map <long long, long long> a; 
 long long count = 0;

 // nhap so luong phan tu; 
long long n; cin >>n; 
 for (int i = 0; i < n; i++) {
    cin >> a[i]; 
 }
 

// dem so lan xuat hien cua phan tu;
for (int i = 0; i < n; i++) dem[a[i]]++; 


// dem so luong; 
for (pair <long long, long long> x : dem) {
    count++; 
}


// in ra phan tu va so lan xuat hien cua no; 
cout << count << "\n"; 
for (pair <long long, long long> x : dem) {
  cout << x.first << " " << x.second << "\n"; 
}





    return 0; 
}