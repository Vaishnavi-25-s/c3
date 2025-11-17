#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,total,avg;
    char grade;
    printf("enter the three subject marks");
    scanf("%f%f%f",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3;
    printf("the total marks is %f \n",total);
    printf("the avgerage marks is %f \n",avg);
    if(avg>=90)
    {
        grade='A';
    }
    else if(avg>=80)
    {
        grade='B';
    }
    else if(avg>=70)
    {
        grade='C';
    }
    else if(avg>=60)
    {
        grade='D';
    }
    else if(avg>=50)
    {
        grade='E';
    }
    else
    {
        grade='F';
    }
    if(m1>=50 && m2>=50 && m3>=50)
    {
        printf("the result is pass");
    }
    else
    {
        printf("the result is fail");
    }
    return 0;
}
