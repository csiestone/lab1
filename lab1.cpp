#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	while(num!=1)
	{	
		if(num%2==1)
		{	
			num=3*num+1;		
			std::cout<<num<<endl;
		}	
		else 
		{
			num=num/2;
			std::cout<<num<<endl;
		}
	}
return 0;
}
