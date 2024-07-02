#include<iostream>
#include<string>
using namespace std;

void distinct(int a, int b){

    for (int i =a; i <=b; i++)
    {
        int num=i;
        bool visited[10]={false};
        while (num)
        {
        if (visited[(num%10)]) ///when visited[0]=0 then not go in if loop cause value is 0 but when value is 1 then go in if loop then break the statement
        {
            break;
        }
        
        visited[num%10]=true;
        num=num/10;
            
        }
        if (num==0)
        {
            cout<<i<<" ";
        }
        
        
        
        
    }
    

}

int main(){
    int a,b;
    cin>>a>>b;
    distinct(a,b);
    return 0;


}