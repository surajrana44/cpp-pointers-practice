#include <iostream>
using namespace std;

void update(int **ptr){

 //   ptr=ptr+1;  
// *ptr=*ptr+1; 

 **ptr=**ptr+1;  
}

int main(){
/*
int i =5;

int *p=&i;
int **ptr=&p;  // double pointer


cout<<p<<endl;
cout<<&p<<endl;
cout<<&ptr<<endl;
cout<<**ptr<<endl;



cout<<"before update: "<<i<<endl;
cout<<"before update: "<<p<<endl;
cout<<"before update: "<<ptr<<endl;
update(ptr);
cout<<"update: "<<i<<endl;
cout<<"update: "<<p<<endl;
cout<<"update: "<<ptr<<endl;

--------------------------------------------------------------
  // question on pointers outputs//

char ch='a';
char *p = &ch;
ch++;
cout<<*p<<endl; 

char arr[6]="abcd";
char *p= &arr[0];
// p++;
cout<<p; 

int i=10;
int *p=&i;
// int second = (*p)++ +9; 
int second = ++(*p) + 9;
cout<<second<<" "<<i;
*/

}