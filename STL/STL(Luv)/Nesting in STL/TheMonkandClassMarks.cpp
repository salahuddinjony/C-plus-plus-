#include<bits/stdc++.h>
using namespace std;
/*
Monk is a multi-talented person, and prepares results for his college in his free time.
(Yes, he is still in love with his old college!) He gets a list of students with 
their marks. The maximum marks which can be obtained in the exam is 100.
The Monk is supposed to arrange the list in such a manner that the list is 
sorted in decreasing order of marks. And if two students have the same marks, 
they should be arranged in lexicographical manner.

Help Monk prepare the same!

input format:
On the first line of the standard input, there is an integer N, denoting the number of 
students. N lines follow, which contain a string and an integer, denoting the name of the
student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100



*/
int main(){
    map<int,multiset<string>>V_marks; //must use multiset casue it can be same name of multipe with same marks
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
       int marks;
       string name;
       cin>>name>>marks;
        //V_marks[marks].insert(name);
       V_marks[-1*marks].insert(name); //store the map with asceding order like----> -90 Bob,-78 {Alice,Eve}
    }

    for (auto &studenstsmarks_pr : V_marks)
    {
       auto &students=studenstsmarks_pr.second;
       auto &marks=studenstsmarks_pr.first;
       for (auto student : students)
       {
            cout<<student<<" "<<-1*marks<<endl; 
       }
       
    }
    //We can also use this logic(backtracking of using iterator)
    /* auto cur_it=--V_marks.end();
    while (true)
    {
        auto &students=cur_it->second;
        auto &marks=cur_it->first;
        for (auto student : students)
        {
           cout<<student<<" "<<marks<<endl;
        }
        if(cur_it==V_marks.begin()){
            break;
        }
        cur_it--; 
    } */
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/