#include<stdio.h>
#include<conio.h>

main()
{
    float basesalary,hra,da,ta,gs;
    clrscr();
    printf("enter basesalary");
    scanf("%f",&basesalary);
    printf("salary %0.f",basesalary);
    hra=(basesalary *10)/100;
    da=(basesalary *5)/100;
    ta=(basesalary *8)/100;
    gs=basesalary*hra*da*ta;
    printf("\nhra%0.f\nda%0.f",hra,da,ta);
    printf("\n grossalry of %0.f",gs);
    getch();
}