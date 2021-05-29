# include <iostream>
using namespace std;

class Base
{
public:
  virtual void display() 
  { 
    cout << "Function in Base" <<endl ;
  }
};

class Derived : public Base
{
public:
  void display()
  {
    cout<< "Function in Derived" <<endl;
  }
  
};

int main()
{
  Derived d1 ;
  Base *b1 = &d1 ;
  b1->display();
  return 0;
}
