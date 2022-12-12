#include <stdio.h>
int main()
{
    int ch,a_2=10,b_2=20,c_2,rohit=29,kohle=25,raju=24,ram=23,dhoni=30,kapil=32,yuvraj=30,hardik=25,ashwin=22,jadega=26,sourav=28,d_3;
    int roll,eng,comp,math,total,per;
    int squ,length,rec,bredth,circle;
    int si,pa,ri,ny;
    int a,b,c=0;
    int c1,c2,sum,met,inch,feet,centi;
    int n,i,m=0,flag=0;
    char v;
    int n0,rev=0,remin,origi;
    int n_0;
    char charac,a_0,e_0,i_0,o_0,u_0,A_0,E_0,I_0,O_0,U_0;
    int cost,selling,profit;
    int year;
    char con; 
    printf("Enter 1 for is print hello world\n");
    printf("Enter 2 for print all arithmetic function\n");
    printf("Enter 3 for average age of indian cricket team players\n");
    printf("Enter 4 for Percentage of three subject with roll user input\n");
    printf("Enter 5 for print Area of Squre,Rectangle,Cirle user input\n");
    printf("Enter 6 for calculate Simple Interest\n");
    printf("Enter 7 for swapping 2 value\n");
    printf("Enter 8 to Swaping Two Variable Value Without Useing Third Variable Value\n");
    printf("Enter 9 To check the number is even and odd\n");
    printf("Enter 10 Find Kilometter Between 2 Cities\n");
    printf("Enter 11 Check The nUmber Is Prime Number or not\n");
    printf("Enter 12 Check The Charecter is Vowel or not\n");
    printf("Enter 13 Check The Number is Palidrome No or not\n");
    printf("Enter 14 Check The Number is +ve,-ve or zero\n");
    printf("Enter 15 check The Character is vowel or consonent\n");
    printf("Enter 16 Ckeck Profit and loss\n");
    printf("Enter 17 Check The Inout Year is Leap Year or Not\n");
    printf("Enter 18 Check The Value is Uppercase, Lowercase,digit,Space or Zero\n");
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
        printf("Enter Your length-:");
        scanf("%d",&length);
        printf("Enter Your Bredth-:");
        scanf("%d",&bredth);
        squ=length*length;
        rec=length*bredth;
        circle=3.14*rec*rec;
        printf("Area of square-- %d\n",squ);
        printf("Area of rectangle-- %d\n",rec);
        printf("Area of Circle-- %d\n",circle);//switch case
        break;
    case 6:
        printf("Enter Your Principle amount");
        scanf("%d",&pa);
        printf("Enter Your Rate of Interest");
        scanf("%d",&ri);
        printf("Enter Your No of year");
        scanf("%d",&ny);
        si=pa*ri*ny;
        printf("Tis is Simple Interest%d\n",si);
        break;
    case 7:
        printf("Input Value of a");
        scanf("%d",&a);
        printf("Input Value of b");
        scanf("%d",&b);
        c=a;
        a=b;
        b=c;
        printf("This is Swapping vAlue a%d\n This is swapping value b%d\n",a,b);
        break;
    case 8:
            printf("Input Value of a");
        scanf("%d",&a);
        printf("Input Value of b");
        scanf("%d",&b);
        a=a+b;
        b=a-b;
        a=a-b;

        printf("%d\n %d\n",a,b);
        break;
    case 9:
        
        printf("Enter Your Number");
        scanf("%d",&a);
        if (a%2==0)
        {
            printf("This is Even Number\n");

        }
        else{
            printf("This Number is odd\n");
        }
        break;
    case 10:
        printf("enter Your First City Distance Km");
    scanf("%f",&c1);
    printf("enter Your Second City Distance Km");
    scanf("%f",&c2);
    sum=c1-c2;
    met=sum*1000;
    inch=sum*39370;
    feet=sum*3281;
    centi=sum*100000;
    printf("Metter of Diatance%d\n",met);
    printf("inches of Kilometer%d\n",inch);
    printf("Feet of Kilometer%d\n",feet);
    printf("Centimeeter of kilometer%d\n",centi);
        break;
    case 11:
    printf("Enter the number to check prime:");    
    scanf("%d",&n);    
    m=n/2;    
    for(i=2;i<=m;i++)    
    {    
    if(n%i==0)    
    {    
    printf("Number is not prime");    
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)    
    printf("Number is prime");
    break;
    case 12:
    printf("Enter Your Character");    
    scanf("%s",&v);
        switch (v)
        {
        case 'a':
            printf("This is vowel");

            break;
        case 'e':
        printf("This is vowel");
        break;
        case 'i':
        printf("This is Vowel");
        break;
        case 'o':
        printf("This is Vowel");
        break;
        case 'u':
        printf("This is Vowel");
        break;
        case 'A':
        printf("This is Vowel");
        break;
        case 'E':
        printf("This is Vowel");
        break;
        case 'I':
        printf("This Is Vowel");
        break;
        case 'O':
        printf("This is Vowel");
        break;
        case 'U':
        printf("This is Vowel");
        break;
        default:
        printf("This is Consonent");
            break;
        }
        break;
    case 13:
        printf("Enter Youro Valid Number");
        scanf("%d",&n0);
        origi=n0;
        while (n0!=0)
        {
            remin=n0%10;
            rev=rev*10+remin;
            n0/=10;

        }
        if (origi == rev )
        {
            printf("This is Palidrome No%d",origi);
        }
        else
        {
            printf("This is Not Palidrome %d",origi);
        }
        break;
        case 14:
        printf("Enter The Number");
   scanf("%d",&n_0);
   if (n_0>0)
   {
    printf("This Is prsitive(+ve)No");
   }
   else if (n_0<0)
   {
    printf("This is Negative(-ve) No");
   }
   else{
    printf("This is zero");
   }
   break;
   case 15:
      printf("Enter Your Character");
   scanf("%s",&charac);
    a_0='a',e_0='e',i_0='i',o_0='o',u_0='u',A_0='A',E_0='E',I_0='I',O_0='O',U_0='U';
   if ( charac==a_0 || charac==e_0 || charac==i_0 || charac==o_0 || charac==u_0 || charac==A_0 || charac==E_0 || charac==I_0 || charac==O_0 || charac==U_0)
   {
    printf("This is Vowel %c",charac);
   }
   else{
    printf("This is Consonent");
   } 
    break;
    case 16:
    printf("Enter Your Cost Price");
scanf("%d",&cost);
printf("Enter Your Selling Price");
scanf("%d",&selling);
profit=selling-cost;
if ( cost<selling )
{
    printf("This is Profit amount%d",profit);

}
else if (selling<cost)
    {
        printf("This is Loss amoount %d",profit);
    }
else if (cost==selling)
{
    printf("this is non Profit beause cost and selling is%d",profit);
}
    break;
    case 17:
    printf("Enter Year");
   scanf("%d",& year);
   if ( year%4==0 )
   {
    printf("Leap Year");
   }
   else
   {
    printf("Not Leap Year");
   }
        break;
    case 18:
    printf("Enter Your Character");
   scanf("%s",& con);
    if (con>='a' && con<='z')
    {
        printf("This is Lower Case");
    }
    else if (con>='A' && con<='A')
    {
        printf("This is Upper Case");
    }
    else if (con==0)
    {
        printf("This is zero");
    }
    else if (con==con)
    {
        printf("This is Number");
    }
    else{
        printf("This is space");
    }
    break;
            default:
    printf("Invalid input");
        break;

    }
    return 0;
}