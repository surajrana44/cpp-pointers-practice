#include <iostream>
using namespace std;
int main(){   
     // playing with pointer

/*
int arr[10]={2,4,5,6};

cout<<"array first element address: "<<arr<<endl;  // address of first element 
cout<<"array first element address: "<<& arr[0]<<endl; // address of first element 
cout<<"first element of array: "<<*arr <<endl;
cout<<" : "<<*arr+3 <<endl;
cout<<" : "<<*(arr+3) <<endl;

int i=3;
cout<<i[arr]<<endl;  // arr[i]= *(arr+i) & i[arr]= *(i+arr) both are correct

------------------------------------------------------

int temp[10]={2,4,6,8,9};
int *p = &temp[0];
cout<<sizeof(temp)<<endl;
cout<<sizeof(&temp)<<endl;
cout<<sizeof(*temp)<<endl;
cout<<sizeof(*p)<<endl;
cout<<sizeof(p)<<endl;
cout<<sizeof(&p)<<endl;
 

-------------------------------------------------

int a[10]={12,3,4,5};

cout<< &a[0]<<endl;  // address 
cout<< &a<<endl;
cout<< a<<endl;

int *p= &a[0];

cout<<p<<endl;
cout<<*p<<endl;
cout<<"diffrent address than &a : "<<&p<<endl;
------------------------------------------------------
*/ 

int arr[5]={1,2,3,4,5};
char ch[6]="abced";  // character data type me pointer alag behave karta ha

char *p=&ch[0];


cout<<arr<<endl; // print first element address
cout<<ch<<endl; // print entire string
cout<<&p<<endl; // print entire string
cout<<*p<<endl; // print first element

cout<<*(p+1)<<endl; // print second element 
   




return 0;




}