/*Pointer to an 1D array*/

#include<stdio.h>

int main()

{
    int arr[10]={11,21,35,10,5,60,78,81,19,150};
     int *p=arr;
    //p=&arr; 
    printf("%d\n",arr[0]);   //traditonal method to print the value of array*/
    /*Using the terminology of pointers*/
    /*printf("%p\n",arr);  //base loction of an array arr
    printf("%d\n",*arr);  //value of array arr[0]
    printf("%p\n",(arr+1));  // this the address of next index number i n arr array arr[1]
    printf("%d\n",*(arr+1)); //arr[1]=2
    printf("%p\n",(arr+1)+2);  //address of arr[3]
    printf("%p\n",(arr+3));  //address of arr[3]
    printf("%d\n",*((arr+1)+2));
    //printf("%p\n",*(*(arr+1)+2));
    
    /*Following code will give same output*/
    
    
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p\n",(p+1));
    printf("%d\n",*(p+1));
    printf("%p\n",((p+1)+2));
    printf("%d\n",*((p+1)+2));
    //printf("%d\n",*(*(p+1)+2));
    return 0;
}
