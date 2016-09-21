#include <iostream>

using namespace std;

void vol_cone (float r, float h,float& v);

float main()
{
	float r,h,v ;
	
		cout << "Please input radius" << endl;
		cin >> r ;
		cout << "Please input height" << endl;
		cin >> h ;
		vol_cone (r,h,v);
		cout << "The volume of the cone is " << v << endl;
		system("pause");
	
}

void vol_cone (float r, float h,float& v)
{
  const float pi = 3.14159;
  v = (1.0/3.0) * pi * r * r * h;
}
