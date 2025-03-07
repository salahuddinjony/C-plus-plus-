#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int GetBit(int n, int pos){
   return ((n & (1<<pos))!=0); 
}
int SetBit(int n, int pos){ //set 1 at pos
   return (n | (1<<pos)); 
}
int ClearBit(int n, int pos){ //clear the bit 0 at pos
   return (n & ~(1<<pos)); 
}
int UpdateBit(int n, int pos,int i){ //at the 1st time clear the bit and then set bit
   int mask=~(1<<pos);
   n=n & mask;
   return (n | i<<pos);

}
int main(){
    optimize();
    int n,pos;
    cin>>n>>pos;
    
    cout<<GetBit(n,pos)<<endl;
    cout<< SetBit(n,pos)<<endl;
    cout<< ClearBit(n,pos)<<endl;
    cout<< UpdateBit(n,pos,0)<<endl;


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/