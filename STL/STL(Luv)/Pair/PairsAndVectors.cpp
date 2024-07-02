#include<bits/stdc++.h>
using namespace std;
void display(char a[],int b[],pair<char,int>array[3]){
    for (int i = 0; i <3; i++)
    {
        array[i]={a[i],b[i]};
        cout<<array[i].first<<" "<<array[i].second<<endl;
    }
}
void displaypair(pair<char,int>A[]){
    for (int i = 0; i <3; i++)
    {
        cout<<A[i].first<<" "<<A[i].second<<endl;
    }
    
}
int main(){
    //pair
    pair<int,string> p;
    cout<<"Enter the elemnts of pair: "<<endl;
    cin>>p.first>>p.second;
    cout<<"The pair is: "<<p.first<<" "<<p.second<<endl;

     pair<int,string> pp;
    // p=make_pair(2,"ABC");
    pp={1,"Salah"}; //also use like this
    pair<int,string> &p1=pp;
    p1.first=3;
    cout<<pp.first<<" "<<pp.second<<endl;


    //Pair array
    pair<char,int>p_array[3];
    p_array[0]={'A',4};
    p_array[1]={'B',5};
    p_array[2]={'C',7};
    swap(p_array[0],p_array[2]);
    displaypair(p_array);


    //Pair two array
    char a[3]={'A','B','C'};
    int b[3]={4,5,7};
    pair<char,int>pair_array[3];
    cout<<"\nThe pair are: "<<endl;
    display(a,b,pair_array);

    
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/