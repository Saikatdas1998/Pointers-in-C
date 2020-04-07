
/*increment operation in pointer*/
#include<stdio.h>

int main()
{
    
    int arr[]={5,33,7,9,8};
    int *p=arr;
    printf("%p\n",p)//Address 000000000062FE00
    printf("%d\n",*p); //output is 5
    printf("%d\n",*p++);//output is 5
    printf("%d\n",*(p++));//output is 5
    printf("%d\n",*++p); //output is 7
    printf("%d\n",*(p++));//output is 7
    printf("%d\n",*(++p));//output is 8
    printf("%d\n",++*p); //output is (9+1)=10
    printf("%d\n",++(*p)); //output is (9+1)=10
    printf("%d\n",p++*); //[Error] expected expression before ')' token
    printf("%d\n",p*++); //[Error] expected expression before ')' token
    return 0;
}
