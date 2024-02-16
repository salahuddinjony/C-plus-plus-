#include<bits/stdc++.h>
using namespace std;
/*
3
4 1
4 3
5 7
*/

struct intervel{
    int start,end;
};

bool cmp(intervel a,intervel b){
    if(a.start!=b.start){
        return (a.start < b.start); //Descending order with end intervel
    }
    return (a.end > b.end);
}
int main(){
    int n;
    cin>>n;
    intervel arr[n]; //initialize intervel objcet as a array
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i].start>>arr[i].end;
    }
    sort(arr,arr+n,greater<int>());
    // sort(arr,arr+n,cmp);

    cout<<endl;
    for (int i = 0; i <n; i++)
    {
       cout<<arr[i].start<<" "<<arr[i].end<<endl;
    }
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/