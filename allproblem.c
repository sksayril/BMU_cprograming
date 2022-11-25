#include <stdio.h>
int main()
{
    int ch,a_2=10,b_2=20,c_2,rohit=29,kohle=25,raju=24,ram=23,dhoni=30,kapil=32,yuvraj=30,hardik=25,ashwin=22,jadega=26,sourav=28,d_3;
    int roll,eng,comp,math,total,per;
    int squ,length,rec,bredth,circle;
    printf("Enter 1 for is print hello world\n");
    printf("Enter 2 for print all arithmetic function\n");
    printf("Enter 3 for average age of indian cricket team players\n");
    printf("Enter 4 for Percentage of three subject with roll user input\n");
    printf("Enter 5 for print Area of Squre,Rectangle,Cirle user input\n");
    printf("Choose Your question");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Hello World");
        break;
    case 2:
        c_2=a_2+b_2;
        printf("addition %d\n",c_2);
        c_2=a_2-b_2;
        printf("substraction %d\n",c_2);
        c_2=a_2*b_2;
        printf("multipication %d\n",c_2);
        c_2=a_2/b_2;
        printf("division %d\n",c_2);
        break;
    case 3:
        d_3=((rohit+kohle+raju+ram+dhoni+kapil+yuvraj+hardik+ashwin+jadega+sourav)/11);
        printf("%d:this isAverage age of player in indian cricket",d_3);
        break;
    case 4:
        printf("Enter Roll Number\n");
        scanf("%d",&roll);
        printf("Enter English marks\n");
        scanf("%d",&eng);
        printf("Enter Computer Marks\n");
        scanf("%d",&comp);
        printf("Enter Mathametics marks\n");
        scanf("%d",&math);
        total=eng+comp+math;
        per=total/3;
        printf("roll no-: %d\n Total of three subject marks %d\n",roll,total);
        printf("rollno-: %d\n Percentage of three subjects %d",roll,per);
        break;
    case 5:
        printf("Enter Your length");
        scanf("%d",&length);
        printf("Enter Your Bredth");
        scanf("%d",&bredth);
        squ=length*length;
        rec=length*bredth;
        circle=3.14*rec*rec;
        printf("Area of square %d\n",squ);
        printf("Area of rectangle %d\n",rec);
        printf("Area of Circle %d\n",circle);
        break;
    default:
    printf("Invalid input");
        break;
    }
    return 0;
}