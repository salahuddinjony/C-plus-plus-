#include<bits/stdc++.h>
using namespace std;
/*
To use Stacks & Queues 
1.Check balanced parenthesis ([()])
2. Next greater elements(NGE)

*/
int main(){
    //stack(LIFO)
       cout<<"Example of STACK"<<endl;
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while (!s.empty())
    {
        cout<<s.top()<<endl; 
        s.pop();
    }

    //queue(FIFO)
    cout<<"Example of QUEUE"<<endl;
    queue<string>q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jlm");
    q.push("mno");
    while (!q.empty())
    {
       cout<<q.front()<<endl;
       q.pop();
    }

    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/