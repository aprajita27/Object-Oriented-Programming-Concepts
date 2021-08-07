#include <iostream>

using namespace std;

// Base class
class Demo
{
public:
   virtual int getRes() = 0;
   void setVal(int a, int b)
   {
      num1 = a;
      num2 = b;
   }

protected:
   int num1;
   int num2;
};
// Derived classes
class AddDemo : public Demo
{
public:
   int getRes()
   {
      return (num1 + num2);
   }
};

class SubDemo : public Demo
{
public:
   int getRes()
   {
      return (num1 - num2);
   }
};

int main(void)
{
   AddDemo A;
   SubDemo S;

   A.setVal(5, 4);
   cout << "Sum: " << A.getRes() << endl;

   S.setVal(100, 20);
   cout << "Difference: " << S.getRes() << endl;

   return 0;
}