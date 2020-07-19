#include <iostream>
 
using namespace std;

class myClass {
    public:
        myClass(){};
        
        void setCloningState(){
            isCloning = true;
        }

        bool my_condition() const{
            return isCloning;
        }

    private: 
        bool isCloning;

};


int main(void) {
    myClass* c = new myClass();
    // c->isCloning = true;
    // c->setCloningState();

   // Now try to access a member using member access operator
   cout << "condition: " << (c->my_condition() ? "true" : "false") << endl;

   return 0;
}