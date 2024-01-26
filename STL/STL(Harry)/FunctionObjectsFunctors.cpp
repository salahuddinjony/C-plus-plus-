#include<bits/stdc++.h>
using namespace std;

void display(int (&arr)[6]){ //Also use void display(int arr[])
    arr[0]=900; //change the element of index 0 cause we call by referrence
    for (int i = 0; i <6; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
int main(){
   /*
    Function Objects (Functor) : A function wrapped in a 
    class so that it is available like an object 
    */

    
    auto result=minmax({2,3,1,0,5});
    cout<<"The min and max are : "<<result.first<<" "<<result.second<<endl;

    int a[6]={2,1,0,-1,11,3};
    display(a);
    cout<<endl;
    int mi=*min_element(a,a+5);
    cout<<"The min of the array is: "<<mi<<endl;
    cout<<"The max of the array is: "<<*max_element(a,a+5)<<endl;

    int arr[6]={3,1,44,5,2,0};
    sort(arr,arr+6);
    display(arr);
    cout<<endl;

    sort(arr+1,arr+6,greater<int>());
    display(arr);
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/