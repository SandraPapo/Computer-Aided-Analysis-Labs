#include <iostream>
using namespace std;

int main()
{
	int  *array1,*array2,*array3;
   int   arr_size;
   cout << "Enter array size" << endl;
   cin >> arr_size;
   array1 = new int[arr_size];   	
   array2 = new int[arr_size];
   array3 = new int[arr_size];
   	cout<<"enter values of array1. example: 2 5 7 8"<<endl;
   for (int i = 0; i < arr_size; i++)
   {
	   
		cin>> array1[i];
	  
   }
    	cout<<"enter values of array2. example: 2 5 7 8"<<endl;
      for (int i = 0; i < arr_size; i++)
   {
	   
		cin>> array2[i];
	  
   }
	  cout<<"array 3 is :   ";

	  for (int i = 0; i < arr_size; i++) //print
   {
	 
	   array3[i] = array1[i] + array2[i];
	    cout<<array3[i]<<" ";
	  
   }

	cout<<endl;
	 

   delete[] array1;          	// deallocate the array
   delete[] array2;  
   delete[] array3;  
	system("pause");
}