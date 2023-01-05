#include<stdio.h>
int main()
{
    float c,a;
    int u;
    scanf("%d",&u);
    printf("Units Consumed: %d
",u);
    if(u<200)
    {
        printf("Cost per Unit: 1.20
");
        c=u*1.20;
        printf("Bill: %0.2f
",c);
    }
     else if(u>=200 && u<400)
    {
        printf("Cost per Unit: 1.40
");
        c=u*1.40;
        printf("Bill: %0.2f
",c);
    }
     else if(u>=400 && u<600)
    {
        printf("Cost per Unit: 1.60
");
        c=u*1.60;
        printf("Bill: %0.2f
",c);
    }
     else if(u>=600 && u<800)
    {
        printf("Cost per Unit: 1.80
");
        c=u*1.80;
        printf("Bill: %0.2f
",c);
    }
     else if(u>=800)
    {
        printf("Cost per Unit: 2.00
");
        c=u*2.00;
        printf("Bill: %0.2f
",c);
    }
    if(c>400)
    {
        a=c*0.15;
        printf("Surcharge: %0.2f
",a);
        c=c+c*0.15;
        printf("Total Amount: %0.2f
",c);
    }
    else
    {
        printf("Surcharge: 0.00
");
        printf("Total Amount: %0.2f
",c);
    }
    
}