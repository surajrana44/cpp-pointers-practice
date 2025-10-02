#include <iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;
}

void update(int *p){

    p=p+1;
    cout<<"inside "<<p<<endl;

}
int getsum(int arr[],int n){

    cout<<sizeof(arr)<<endl; 
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=  arr[i];
    }
    return sum;
}


int main(){

    int valuue =5;
    int *p=&valuue;
   cout<<"before"<<p<<endl;
   // print(p);
   update(p);
   cout<<"after"<<p<<endl;

   int arr[6]={1,2,3,4,5,6};
   
 //  cout<<getsum(arr,5)<<endl;
    cout<<"sum is: "<<getsum(arr+3,3  )<<endl;

    return 0;

}