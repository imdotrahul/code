#include <iostream>

#include <typeinfo>

   using namespace std;

   class Polymorphic {

virtual void Member(){}

};

   int main ()

   {

       try

       {

           Polymorphic * pb = 0;

           typeid(*pb);  

       }

       catch (exception& e)

       {

           cerr << "exception caught: " << e.what() << endl;

       }

       return 0;

   }

