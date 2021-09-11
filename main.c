#include <stdio.h>
#include <stdlib.h>


int getdegree(void);
int getavrage(int x);
void grade (int q);
int main()
{
    int total=0;
    float avrg=0.00;
    int x[5];
    for(int count=0; count<5; count++)
    //total
    {
        x[count]=getdegree();
        total+=x[count];
    }

    //avrage
   {

   avrg=getavrage(total);
    printf("avrage=%f",avrg);

    grade(avrg);
}

}
int getdegree(void)
{
    int z;
    printf("please enter degree\n");
    scanf("%d",&z);
    return z;
}
int getavrage(int x)
{
    float y;
    y= x/5;
    return y;
}
void grade(int q)
{
    if(q<=100 && q>=85)
{
    printf("\nExcellent");
}
    else if(q<=85 && q>=75)
{
    printf("\nverry good");
}

}
