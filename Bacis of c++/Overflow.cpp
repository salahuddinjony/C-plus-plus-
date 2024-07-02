#include<bits/stdc++.h>
using namespace std;
int main(){

// presidency of datatypes(increasing order)---->char>>int>>long int>>long long int>>float>>double
   double X=2/3.0;
   cout<<X<<endl;
   cout<<'A'+1<<endl; //65+1==66

    /*
    10^-9 <int <10^9
    10^-12 <long int <10^12
    10^-18 <long long int <10^18
    */
    long int a=100000;
    long int b=100000;
    long int c=a*b;
    cout<<c<<endl;

     int x=100000;
     int y=100000;
    long int z=a * 1LL * b;
    cout<<z<<endl;

    double x1=100000;
    double y1=100000;
    double z1=x1*y1;
    cout<<fixed<<setprecision(0)<<z1<<endl;
    double c1=1e24; //10^24 
    cout<<c1<<endl;


    /*
    We can solve limitaion of input number range using string because 
    we can highest input range is 10^18 but if we have to need more 
    highest number then we uese string conpect 
    */
   string num;
   cin>>num;
   int last_digit=num[num.size()-1]-'0';  //Ascci value of x-48(0's Ascci value) convert string to integer
   cout<<last_digit<<endl;




    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/