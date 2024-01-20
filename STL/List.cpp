#include<bits/stdc++.h>
using namespace std;
// template <class T>
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main(){
    list<int> list1; //List of 0 length

    list1.push_front(3);
    list1.push_back(2);
    list1.push_back(6);
    list1.push_back(5);
    list1.push_back(3);

/* 
    list<int> :: iterator iter;
    iter=list1.begin();
    cout<<*iter<<endl;
    ++iter;
    cout<<*iter<<endl;
 */
    display(list1);
    //Removing the elements from the list
    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(3);

    //Sorting the list:
    // listNema.sort()
    // list1.sort();
    // display(list1);

    list<int> list2(3); //Empty List of 3 length
    list<int> ::iterator iter;
    iter=list2.begin();
    *iter=50;
    ++iter;
    *iter=55;
    ++iter;
    *iter=45;
    ++iter;
    display(list2);

    list1.merge(list2);
    list1.sort();
    cout<<"After merging and sorting: ";
    display(list1);
    list1.reverse();
    cout<<"After reverseing the list: ";
    display(list1);


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/