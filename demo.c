
#include"stdio.h"
 int main()
 {
     int x[100];
     int size,i,j,temp;
    printf("Enter array size\n");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
                if(x[i]>x[j])
                {
                    temp=x[j];
                    x[j]=x[i];
                    x[i]=temp;
                }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",x[i]);
    }
 }
