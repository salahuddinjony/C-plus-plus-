#include<bits/stdc++.h>
using namespace std;

/* Rules for virtual functions
 1. They cannot be static
 2. • They are accessed by object pointers
 3. Virtual functions can be a friend of another class 
 4. A virtual function• in base class might not be used.
 5. If-a-virtual function is defined in a base class, there is no necessity of redefining it in the derived class

 */
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display(){
            cout<<"CWH class called"<<endl;
        }
};

class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    

class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main(){
    string title;
    float rating,vlen;
    int words;

    //for video
    title="Django tutorial" ;
    rating=4.89;
    vlen=4.56;
    
   
    CWHVideo djvideo(title, rating, vlen); //creating object
   // djvideo.display();


    //for text
    title="Django tutorial text" ;
    rating=4.19;
    words=400;
    CWHText djtex(title, rating, words); //creating object
   // djvideo.display();

   CWH* tut[2];
   tut[0]=&djvideo;
   tut[1]=&djtex;

   cout<<"\n";
   tut[0]->display();
   cout<<"\n";
   tut[1]->display();
   cout<<"\n";



    


    return 0;
}


/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/