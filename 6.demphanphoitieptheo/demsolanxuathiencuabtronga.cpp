#include <bits/stdc++.h>

using namespace std; 


int main () {

    // toi uu toc do; 
     ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

long long n,m; cin >> n >> m; 
vector <long long> a(n); 
vector <long long> b(m); 
map <long long, long long> dem; 
int count = 0; 
// nhap mang; 

for (int i = 0; i < n; i++) cin >> a[i]; 
for (int i = 0; i < m; i++) cin >> b[i]; 


// xu ly dem phan tu trong mang a; 


for (int i = 0; i < n; i++) dem[a[i]]++; 


set <long long> unique_b(b.begin(), b.end()); // loai bo phan tu trung; 

for (long long x : unique_b) {
   if (dem[x] != 0) {
    count++; 
   }
}


cout << count; 

}
