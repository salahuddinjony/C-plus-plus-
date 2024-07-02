#include<bits/stdc++.h>
using namespace std;


/*                         Public Derivation      	Private Derivation    	Protected Derivation

Private members           	Not Inherited              	Not Inherited              	Not Inherited              
Protected members           	Protected                Private                    Protected                    
Public members           	Public	Private              Private                    Protected 

 */

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

    
}