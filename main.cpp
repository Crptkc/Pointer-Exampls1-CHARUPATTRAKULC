#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

void printOut(char *str, int length)
{
	for (int i=0;i<length;i++)
	{
		cout<<str[i];
	}
	cout<<endl;
}

int main()
{
	char str[1000];
	cout<<"Insert   String: ";
	cin>>str;

	int length = strlen(str);

	cout <<"Original String: ";
	printOut(str,length);

	char *pa=&str[0],*pb=&str[length-1];
	for (int i=0;i<length/2;i++,pa++,pb--)
	{
		char temp=*pb;
		*pb=*pa;
		*pa=temp;
	}

	cout<<"Reversed String: ";
	printOut(str,length);
}