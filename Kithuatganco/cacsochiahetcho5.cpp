// đề bài: 
// nhập vào 1 mảng gồm n phần tử, nếu có phần tử chia hểt cho 2 thì in ra, nếu mảng không có phần tử nào, in ra -1; 


#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
int main (){

    int n; cin >>n; 
    ll sum = 0; 
    vector <long long> a(n); 
    

// nhập mảng
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }


// duyệt mảng và xử lý các số chia hết cho 5
int check = 0; 

for (auto i : a){
    if (i % 5 == 0)
    {
sum+=i;   
check = 1;
    } 
  
}

// check cờ hiệu
if (check == 0)
{
cout << "-1";
}  
else {
    cout << sum;
}



return 0;
}