#include<bits/stdc++.h>
using namespace std;
/*
Our Monk loves candy!
While taking a stroll in the park, he stumbled upon N Bags with candies. 
The i'th of these bags contains Ai candies.
He picks up a bag, eats all the candies in it and drops it on the 
ground. But as soon as he drops the bag, the number of candies in 
the bag increases magically! Say the bag that used to contain X 
candies (before eating), now contains [X/2] candies! ,
where [x] is the greatest integer less than x (Greatest Integer Function).
Amazed by the magical spell, Monk can now have a lot more candies! But he has
to return home in K minutes. In a single minute,Monk can consume all the
candies in a single bag, regardless of the number of candies in it.
Find the maximum number of candies that Monk can consume.
*/


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N,k;
        cin>>N>>k;
        multiset<long long> bags;
        for (int i = 0; i <N; i++)
        {
           long long candys;
           cin>>candys;
           bags.insert(candys);
        }
        long long total_cand=0;
        for (int i = 0; i < k; i++)
        {
            auto it=(--bags.end());
            long long cand_cnt=*it;
            total_cand+=cand_cnt;
            bags.erase(it);
            bags.insert(cand_cnt/2);
        }
        cout<<total_cand<<endl;
        

        
        
    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/