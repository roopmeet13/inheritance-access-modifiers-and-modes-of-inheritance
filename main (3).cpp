//Inheritance
// access modifiers
// modes of Inheritance
#include <iostream>
using namespace std;

class abc{
    
    public: //accessed by all classes //access modifier
    int a;
    
    protected:  //accessed by only own,parent and child class //access modifier
    int b;
    
    private:   //accessed by only its own class //access modifier
    int c;
};
class first: public abc{  //modes of Inheritance
    // a- remain public
    // b- remain protected
    // c- inaccessible
};
class second: protected abc{   //modes of Inheritance
    // a- protected
    // b- remain protected
    // c- inaccessible
};
class third: private abc{        //modes of Inheritance
    // a- private
    // b- private
    // c- inaccessible
}
int main()
{
    

    return 0;
}