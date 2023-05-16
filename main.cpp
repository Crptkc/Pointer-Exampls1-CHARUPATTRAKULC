#define SIZE 10
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

int main(void){
  char *pa, *pb, i, temp;
  char a[SIZE] ;

  cout<<"Input String:";
  cin>>a;
  
  pa = &a[0];
  cout<< "Original: ";
  for (int i = 0; i < SIZE - 1; i++, pa++){
    cout<<setw(3)<<*pa<<" ";
    cout<<pa<<endl;
  }

    pa = &a[0]; pb = &a[SIZE - 1];
    cout<<"Reverse: ";
    for (int i = 0; i < SIZE / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++; pb--;
    }
    pa = &a[0];
    for (int i = 0; i < SIZE - 1; i++,pa++){
        cout<<setw(3)<<*pa<<" ";
        cout<<pa<<endl;
    }
    
return 0;
}