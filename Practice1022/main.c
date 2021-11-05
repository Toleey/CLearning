#include <stdio.h>

void prtv(int *x){
    printf("%d\n",++*x);
}
void fun(int x,int y,int *cp,int *dp){
    *cp=x+y;*dp=x-y;
}

int f(int b[],int m,int n){
    int i,s=0;
    for (int i = m; i < n; i=i+2) {
        s=s+b[i];
    }
    return s;
}


void main() {

    int a[]={1,2,3,4,5};
    printf("%d\n",*a);
    printf("%d\n",*(a+2));

    int *p = &a[1];
    printf("%d\n",*p);


//    int a[2][3]={{1,2,3},{4,5,6}};
//    int m,*p;
//    p=&a[0][0];
//    m=(*p)*(*(p+2))*(*(p+4));
//    printf("%d",m);

//    int i,x[3][3]={9,8,7,6,5,4,3,2,1},*p=&x[1][1];
//    for (int i = 0; i < 4; i+=2) {
//        printf("%d",p[i]);
//    }



//    int x,a[]={1,2,3,4,5,6,7,8,9};
//    x= f(a,3,7);
//    printf("%d\n",x);


//    int a= 30,b=50,c,d;
//    fun(a,b,&c,&d);
//    printf("%d,%d\n",c,d);

//    int a=25;
//    prtv(&a);

//    int a=7,b=8,*p,*q,*r;
//    p=&a;
//    q=&b;
//    r=p;p=q;q=r;
//    printf("%d,%d,%d,%d\n",*p,*q,a,b);

}
