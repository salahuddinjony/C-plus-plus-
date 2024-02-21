#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=sizeof(arr)/sizeof(*(arr));
    int y=end(arr)-begin(arr);
    int z=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<" "<<x<<" "<<y<<" "<<z<<endl;


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/