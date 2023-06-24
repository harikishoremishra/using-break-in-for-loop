#include<iostream>
using namespace std;
int main()
{
	int i=100;
	int input;
	   for(i=1;i<101;i++)
	   {
	   	  cin>>input;
	   	  if(input==65)
	   	  {
	   	  	cout<<"you have guessed correct";
	   	  	break;
			 }
	   }
	   return 0;
}
