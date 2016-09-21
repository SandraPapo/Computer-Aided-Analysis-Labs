
#include <iostream>
using namespace std;

int A [3][3] = {{1, 2, 3}, {4, 5,6}, {7,8,9}};
int B [3][3] = {{9, 8, 7}, {6, 5,4},{3,2,1}};
int C [3][3] = {};

int x, y;

int main ()
{
 for (x=0; x<3; x++){
    for (y=0; y<3; y++)
    {
      C[x][y]=A[x][y]+B[x][y];
	  
	 
    }
 }

 for (x=0; x<3; x++){
    for (y=0; y<3; y++)
    {
      cout<< C[x][y] << " ";
	  
    }
	cout << endl;
 }
	
  system ("pause");
  return 0;
}