#include <stdio.h>

int main() {
//    int x=9,y=8;
//    printf("%d\n",x==y+1);

//    int a=5,b=4,c=12;
//    a>b!=c;
//    printf();

//    int a=12;
//    printf("%d\n",(a/3,a%3,a/10>0));

//    int i,j,k;
//    i=1,j=2,k=3;
//    printf("%d\n",i&&j&&k);

//    int x,y;
//    x=1,y=-1;
//    printf("%d\n",(x--&&++y));

//    printf("%d\n",7&&3+12);

//    int x=-1;
//    printf("%d\n",++x||++x||++x||++x);

//
//    int a=1,b=2,c=3;
//    printf("%d\n",(a>b)&&(c=1));

//    int y;
//    printf("%d\n",(y=4)||(y=5)||(y=6));
//
//    int m = 0;
//    printf("%d\n",m||(m=2)||(m=3)||(m=4));
//
//    int a = 0,b=0,c=2,d=4;
//    printf("%d\n",(c=a==b)||(d=b==a));

//    int a = 3,b = 4,t = 0;
//    if(a>b) t=a;a=b;b=t;
//    printf("%d,%d\n",a,b);

//    int a=2,b=-1,c=2;
//    if(a<b)
//        if(b<0) c=0;
//        else c++;
//    printf("%d\n",c);

//    int x=1,y=2,z=3;
//    if(x>y)
//        if(y<z)printf("%d",++z);
//        else printf("%d",++y);
//    printf("%d",x++);

//    int n;
//    scanf("%d",&n);
//    if(n++<10) printf("%d\n",n);
//    else printf("%d\n",n--);

//    int x;
//    scanf("%d",&x);
//    if(x++>5) printf("%d",x);
//    else printf("%d\n",x--);

//    int x=10,y=20,z=30;
//    if(x>y)z=x;x=y;y=z;
//    printf("%d,%d,%d",x,y,z);

//    int x = 3,y=0,z=0;
//    if(x=y+z) printf("****");
//    else printf("####");

//    int a=5,b=4,c=3,d=2;
//    if(a>b>c) printf("%d\n",d);
//    else if((c-1>=d)==1) printf("%d\n",d+1);
//    else printf("%d\n",d+2);

//    int a=1,b=3,c=5,d=4,x;
//    if(a<b)
//        if(c<d) x=1;
//        else if(a<c)
//            if(b<d) x=2;
//            else x=3;
//        else x=6;
//    else x=7;
//    printf("x=%d\n",x);

    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a;
    if(a<b) c=b;
    c=c*c;
    printf("%d\n",c);



}
