#include<bits/stdc++.h>
using namespace std;
template <class T>
void display(vector<T> &v){
    for (int i = 0; i <v.size(); i++)
    {
        // cout<<"Displaing vector"<<endl;
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    vector<int> vec1;     //zero length integer vector
    vector<int> vec2(3);  //3-element character vector
    vector<int> vec3(vec2);//3-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s

    vec2.push_back(3);
    vec2.push_back(1);
    vec2.push_back(2);
    display(vec4);
    display(vec2);
    //Sorting a vector:
    //sort(vectorName.begin(),vectorName.end())
    sort(vec2.begin(),vec2.end());
    display(vec2);
    reverse(vec2.begin(),vec2.end());
    display(vec2);
    
    int element, size;
   
    /* 
    cout<<"Enter the size of vector: ";
    cin>>size;
    for (int i = 0; i <size; i++)
    {
       cout<<"Enter the elements to add this vector: ";
       cin>>element;
       vec1.push_back(element); //insert items from the back
    } 
    */
    // display(vec1);
    // vector<int> :: iterator iter =vec1.begin();

    // vectorName.insert(iterator obj,number of copy,element)
    // vec1.insert(iter+1,3,55);
    // display(vec1);
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/