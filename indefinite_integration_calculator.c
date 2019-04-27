#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,option;
clrscr();
printf("\n1.  k\n2.  x^n\n3.  1/x\n4.  1/(ax+b)\n5.  e^(mx)\n6.  a^x  ");
printf("\n7.  sin(ax)\n8.  cos(ax)\n9.  tan(ax)\n10. sec(ax)\n11. cosec(ax)\n12. cot(ax)");
printf("\n13. (secax)^2\n14. (cosecax)^2\n15. cosec(ax)cot(ax)\n16. sec(ax)tan(ax)");
printf("\n\nChoose function to integrate\n");
scanf("%d",&option);
clrscr();
switch(option)
{
case 1:
printf("\nf(x)=k\nF(x)=kx+c");
printf("\n\nEnter the value of k\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=0\nF(x)=0");
}
else
{
printf("\nf(x)=%d",a);
printf("\nF(x)=%dx+c",a);
}
break;
case 2:
printf("\nf(x)=x^n\nF(x)=(x^n)/n+c");
printf("\n\nEnter the value of n\n");
scanf("%d",&a);
if(a==-2)
{
printf("\nf(x)=x^-2");
printf("\nF(x)=(-1/x)+c");
}
else if(a==-1)
{
printf("\nf(x)=1/x");
printf("\nF(x)=logx+c");
}
else if(a==0)
{
printf("\nf(x)=1");
printf("\nF(x)=x+c");
}
else
{
printf("\nf(x)=x^%d",a);
printf("\nF(x)=[(x^%d)/(%d)]+c",a+1,a+1);
}
break;
case 3:
printf("\nf(x)=1/x\nF(x)=logx+c");
break;
case 4:
printf("\nf(x)=1/(ax+b)\nF(x)=[(1/a)log(ax+b)]+c");
printf("\n\nEnter the values of a & b\n");
scanf("%d%d",&a,&b);
if(a==0&&b==0)
{
printf("Denominator cannot be zero\n");
}
else if(a==-1)
{
printf("\nf(x)=1/(-x+%d)",b);
printf("\nF(x)=-log(%d-x)+c",b);
}
else if(a==0&&b==1)
{
printf("\nf(x)=1");
printf("\nF(x)=x+c");
}
else if(a==0&&b==-1)
{
printf("\nf(x)=-1");
printf("\nF(x)=-x+c");
}

else if(a==1)
{
printf("\nf(x)=1/(x+%d)",b);
printf("\nF(x)=[log(x+%d)]+c",b);
}
else if(a==0)
{
printf("\nf(x)=1/%d",b);
printf("\nF(x)=(x/%d)+c",b);
}
else if(b==0)
{
printf("\nf(x)=1/(%dx)",a);
printf("\nF(x)=[(1/%d)log(%dx)]+c",a,a);
}
else
{
printf("\nf(x)=1/(%dx+%d)",a,b);
printf("\nF(x)=[(1/%d)log(%dx+%d)]+c",a,a,b);
}
break;
case 5:
printf("\nf(x)=e^(mx)\nF(x)=[e^(mx)/m]+c");
printf("\n\nEnter the value of m\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=1");
printf("\nF(x)=x+c");
}
else if(a==-1)
{
printf("\nf(x)=e^(-x)");
printf("\nF(x)=[-e^(-x)]+c");
}
else if(a==1)
{
printf("\nf(x)=e^x");
printf("\nF(x)=(e^x)+c");
}
else
{
printf("\nf(x)=e^(%dx)",a);
printf("\nF(x)=[e^(%dx)/(%d)]+c",a,a);
}
break;
case 6:
printf("\nf(x)=a^x\nF(x)=[(a^x)/(loga)]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=0");
printf("\nF(x)=0");
}
else if(a==1)
{
printf("\nf(x)=1^x");
printf("\nF(x)=x+c where x is a real number");
}
else if(a<0)
{
printf("a cannot be negative\n");
}
else
{
printf("\nf(x)=%d^x",a);
printf("\nF(x)=[(%d^x)/(log%d)]+c",a,a);
}
break;
case 7:
printf("\nf(x)=sin(ax)\nF(x)=[-cos(ax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=0");
printf("\nF(x)=0");
}
else if(a==-1)
{
printf("\nf(x)=sin(-x)");
printf("\nF(x)=cosx+c");
}
else if(a<0)
{
printf("\nf(x)=sin(%dx)",a);
printf("\nF(x)=[cos(%dx)/%d]+c",abs(a),abs(a));
}
else if(a==1)
{
printf("\nf(x)=sinx");
printf("\nF(x)=-cosx+c");
}
else
{
printf("\nf(x)=sin(%dx)",a);
printf("\nF(x)=[-cos(%dx)/%d]+c",a,a);
}
break;
case 8:
printf("\nf(x)=cos(ax)\nF(x)=[sin(ax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=1");
printf("\nF(x)=x+c");
}
else if(a==1)
{
printf("\nf(x)=cosx");
printf("\nF(x)=sinx+c");
}
else if(a==-1)
{
printf("\nf(x)=cos(-x)");
printf("\nF(x)=sinx+c");
}
else if(a<0)
{
printf("\nf(x)=cos(%dx)",a);
printf("\nF(x)=[sin(%dx)/%d]+c",abs(a),abs(a));
}
else
{
printf("\nf(x)=cos(%dx)",a);
printf("\nF(x)=[sin(%dx)/%d]+c",a,a);
}
break;
case 9:
printf("\nf(x)=tan(ax)");
printf("\nF(x)=[log(secax)/a]+c");
printf("\n    =[(-log(cosax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=0");
printf("\nF(x)=0");
}
else if(a==1)
{
printf("\nf(x)=tanx");
printf("\nF(x)=log(secx)+c");
printf("\n    =-log(cosx)+c");
}
else if(a==-1)
{
printf("\nf(x)=tan(-x)");
printf("\nF(x)=-log(secx)+c");
printf("\n    =log(cosx)+c");
}
else if(a<0)
{
printf("\nf(x)=tan(%dx)",a);
printf("\nF(x)=[-log(sec%dx)/%d]+c",abs(a),abs(a));
printf("\n    =[log(cos%dx)/%d]+c",abs(a),abs(a));
}
else
{
printf("\nf(x)=tan(%dx)",a);
printf("\nF(x)=[log(sec%dx)/%d]+c",a,a);
printf("\n    =[-log(cos%dx)/%d]+c",a,a);
}
break;
case 10:
printf("\nf(x)=sec(ax)");
printf("\nF(x)=[log(secax+tanax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=1");
printf("\nF(x)=x+c");
}
else if(a==1)
{
printf("\nf(x)=secx");
printf("\nF(x)=[log(secx+tanx)]+c");
}
else if(a==-1)
{
printf("\nf(x)=sec(-x)");
printf("\nF(x)=[log(secx+tanx)]+c");
}

else if(a<0)
{
printf("\nf(x)=sec(%dx)",a);
printf("\nF(x)={[log(sec%dx+tan%dx)]/%d}+c",abs(a),abs(a),abs(a));
}
else
{
printf("\nf(x)=sec(%dx)",a);
printf("\nF(x)={[log(sec%dx+tan%dx)]/%d}+c",a,a,a);
}
break;
case 11:
printf("\nf(x)=cosec(ax)");
printf("\nF(x)=[log(cosecax-cotax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=0");
printf("\nF(x)=0");
}
else if(a==1)
{
printf("\nf(x)=cosecx");
printf("\nF(x)=[log(cosecx-cotx)]+c");
}
else if(a==-1)
{
printf("\nf(x)=cosec(-x)");
printf("\nF(x)=[-log(cosec(-x)-cot(-x))]+c");
}
else if(a>0)
{
printf("\nf(x)=cosec(%dx)",a);
printf("\nF(x)=[log(cosec%dx-cot%dx)/%d]+c",a,a,a);
}
else
{
printf("\nf(x)=cosec(%dx)",a);
printf("\nF(x)=[-log(cosec(%dx)-cot(%dx))/%d]+c",a,a,abs(a));
}
break;
case 12:
printf("\nf(x)=cot(ax)");
printf("\nF(x)=[log(sinax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=0");
printf("\nF(x)=0");
}
else if(a==1)
{
printf("\nf(x)=cotx");
printf("\nF(x)=log(sinx)+c");
}
else if(a==-1)
{
printf("\nf(x)=cot(-x)");
printf("\nF(x)=-log(sin(-x))+c");
}
else if(a<0)
{
printf("\nf(x)=cot(%dx)",a);
printf("\nF(x)=[-log(sin(%dx))/%d]+c",a,abs(a));
}
else
{
printf("\nf(x)=cot(%dx)",a);
printf("\nF(x)=[log(sin(%dx))/%d]+c",a,a);
}
break;
case 13:
printf("\nf(x)=(secax)^2");
printf("\nF(x)=[tan(ax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=1");
printf("\nF(x)=x+c");
}
else if(a==1)
{
printf("\nf(x)=(secx)^2");
printf("\nF(x)=tanx+c");
}
else if(a==-1)
{
printf("\nf(x)=(sec(-x))^2");
printf("\nF(x)=-tan(-x)+c");
}
else if(a<0)
{
printf("\nf(x)=(sec(%dx))^2",a);
printf("\nF(x)=[-tan(%dx)/%d]+c",a,abs(a));
}
else
{
printf("\nf(x)=(sec(%dx))^2",a);
printf("\nF(x)=[tan(%dx)/%d]+c",a,a);
}
break;
case 14:
printf("\nf(x)=(cosecax)^2");
printf("\nF(x)=[(-cotax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=0");
printf("\nF(x)=0");
}
else if(a==1)
{
printf("\nf(x)=(cosecx)^2");
printf("\nF(x)=-cotx+c");
}
else if(a==-1)
{
printf("\nf(x)=(cosec(-x))^2");
printf("\nF(x)=cot(-x)+c");
}
else if(a<0)
{
printf("\nf(x)=(cosec(%dx))^2",a);
printf("\nF(x)=[cot(%dx)/%d]+c",a,abs(a));
}
else
{
printf("\nf(x)=(cosec(%dx))^2",a);
printf("\nF(x)=[-cot(%dx)/%d]+c",a,a);
}
break;
case 15:
printf("\nf(x)=cosec(ax)cot(ax)");
printf("\nF(x)=[-cosec(ax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=0");
printf("\nF(x)=0");
}
else if(a==1)
{
printf("\nf(x)=cosecxcotx");
printf("\nF(x)=-cosecx+c");
}
else if(a==-1)
{
printf("\nf(x)=cosec(-x)cot(-x)");
printf("\nF(x)=cosec(-x)+c");
}
else if(a<0)
{
printf("\nf(x)=cosec(%dx)cot(%dx)",a,a);
printf("\nF(x)=[cosec(%dx)/%d]+c",a,abs(a));
}
else
{
printf("\nf(x)=cosec(%dx)cot(%dx)",a,a);
printf("\nF(x)=[-cosec(%dx)/%d]+c",a,a);
}
break;
case 16:
printf("\nf(x)=sec(ax)tan(ax)");
printf("\nF(x)=[sec(ax)/a]+c");
printf("\n\nEnter the value of a\n");
scanf("%d",&a);
if(a==0)
{
printf("\nf(x)=0");
printf("\nF(x)=0");
}
else if(a==1)
{
printf("\nf(x)=secxtanx");
printf("\nF(x)=secx+c");
}
else if(a==-1)
{
printf("\nf(x)=sec(-x)tan(-x)");
printf("\nF(x)=-sec(-x)+c");
}
else if(a<0)
{
printf("\nf(x)=sec(%dx)tan(%dx)",a,a);
printf("\nF(x)=[-sec(%dx)/%d]+c",a,abs(a));
}
else
{
printf("\nf(x)=sec(%dx)tan(%dx)",a,a);
printf("\nF(x)=[sec(%dx)/%d]+c",a,a);
}
break;
default:
printf("\nWrong input\n");
}
getch();
return 0;
}
