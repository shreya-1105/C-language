#include<stdio.h>
int main()
{
     int *p,(*ptr)[5],arr[5];
     
     p=arr;//base address
     ptr=&arr;//whole array
     
     printf("p=%p,ptr=%p\n",p,ptr);
     
     p++;
     ptr++;
     
      printf("p=%p,ptr=%p\n",p,ptr);
      return 0;
}
