//::::::::::::::
//complex.h
//::::::::::::::
#include <iostream>
class areaclass
{
  private:
    float height; float base; float area;
  public:
    areaclass() ;
    areaclass(float, float);
 
    void print();
    void setarea();
};

//::::::::::::::
//complex.cpp
//::::::::::::::

#include <iostream>
using namespace std;


areaclass :: areaclass() 
{}


areaclass :: areaclass(float h, float b) 
{ height = h; base = b; }


void areaclass :: print()
{
  cout << "area = " << area << endl;
}


 void areaclass :: setarea()
{

  area = 0.5*height*base;

}

int main()
{
 areaclass t1 (5.3,3.2);
 areaclass t2 (15.3,4.2);
 areaclass t3 (25.5,11.5);
 t1.setarea();
 t2.setarea();
 t3.setarea();
 t1.print();
 t2.print();
 t3.print();
 system("pause");
  return 0;
}