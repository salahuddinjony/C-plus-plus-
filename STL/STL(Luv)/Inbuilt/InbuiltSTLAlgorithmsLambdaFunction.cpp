#include<bits/stdc++.h>
using namespace std;
int main(){
   //lambda function---> it's return true(1) or false(0)
   cout<<[](int x){ return x+1;}(2)<<endl;

    auto sum= [](int x,int y){
    return x+y;
    }; 
   cout<<sum(2,3)<<endl; 


   // all_of function 
   vector<int>v={2,4,6};
   cout<<"all_of function: "<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;//check vector's all values are positive using lambda functions, if true then return trur(1) otherwise return false(0)
    
    // any_of function --->any one conditions is true return true(1) other wise false(0)

    cout<<"any_of function: "<<any_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;

    // none_of function---> no one is match return true(1) otherwise false(0)
    cout<<"none_of function: "<<none_of(v.begin(),v.end(),[](int x){ return x>0;})<<endl;



    //We can also use in array lambda and all_of, any_of, none_of function 
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int n=sizeof(arr)/sizeof(*(arr));
    //  int n=end(arr)-begin(arr);
    // int n=sizeof(arr)/sizeof(arr[0]);

    cout<<n<<endl;
    cout<<all_of(arr,arr+n,[](int x){ return x>0;})<<endl;
    
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/