#include<bits/stdc++.h>
using namespace std;
/*
 1 : Add an element  to the set.
 2 : Delete an element  from the set. (If the number  is not present in the set, then do nothing).
 3 : If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).

Input Format
The first line of the input contains  where  is the number of queries. 
The next  lines contain  query each. Each query consists of two integers 
 and  where  is the type of the query and  is an integer.
*/
int main(){
    long long n;
    cin>>n;
    set<long long>s;
    while (n--)
    {
        long long x;
        int y;
        cin>>y>>x;
        switch (y) //switch case time complexity is O(1)
        {
        case 1:{
            s.insert(x);
            break;
        }
           
        case 2:
        {
            s.erase(x);
            break;
        }
        case 3:
        {
            if(s.find(x)==s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
            break;
        }
        default:
        {
            cout<<"invalid"<<endl;
            break;
        }
        
        }
    }
    
    
        
        
        
    
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/