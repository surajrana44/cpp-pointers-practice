#include <iostream>
using namespace std;

int main(){

/*  --------------------------------------------
int num = 6;
cout<<"address of num: "<< &num <<endl;

int *ptr = &num;  
cout<<"value is: "<< ptr <<endl;

cout<<"size of int: "<< sizeof(num)<<endl;
cout<<"size of pointers: "<< sizeof(ptr)<<endl;


---------------------------------------------------

int i=5;
int *p =0;  // esa bhi kar skate ha 

p=&i;  // ese bhi likh sakte ha same hi ha upar wale jese

cout<<"value is: "<< *p<<endl;

---------------------------------------------------

int i =5;

int *p=0;
p=&i;
i++; // value badha di 

cout<<"value is: "<< *p <<endl;
(*p)++;
cout<<"value is: "<< *p <<endl;  

---------------------------------------------------

// copy one pointers to another pointers

int *q = p; // pointer copying
cout<<p<<" - "<<q<<endl;
cout<<*p<<" - "<< *q <<endl;

// important concept pointer airthmatic */ 

int k=3;
int *t=&k;
cout<<"before t "<<t<<endl;
t=t+1;
cout<<"after t "<<t<<endl;






}