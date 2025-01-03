// đề bài: 
// nhập vào 1 mảng gồm n phần tử, nếu có phần tử chia hểt cho 2 thì in ra, nếu mảng không có phần tử nào, in ra -1; 


#include <bits/stdc++.h>
using namespace std; 
int main (){

    int n; cin >>n; 
    vector <long long> a(n); 

// nhập mảng
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }


// duyệt mảng và xử lý
int check = 0; 

for (auto i : a){
    if (i % 2 == 0)
    {
cout << i <<" ";  
check = 1;
    } 
  
}

// check cờ hiệu
if (check == 0)
{

cout << "-1";
}  



return 0;
}