#include <stdio.h>

int main()
{
    float bs,ns,inc;
    char name[30];

    printf("Enter Employee Name ");
    scanf("%s",&name);
    printf("Enter Basic Salary ");
    scanf("%f",&bs);

    if(bs>=10000)
        inc=bs*0.15;
    else if(bs>=5000)
        inc=bs*0.10;
    else
        inc=bs*0.05;

    ns=bs+inc;

    printf("\n\nHi %s",name);
    printf("\n\nYour new salary is %.2f",ns);

}
