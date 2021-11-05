#include <stdio.h>
#include <string.h>

int fun(int x,int y){
    return (x+y);
}

int f(int x,int y){
    return ((y-x)*x);
}

long fun2(int n){
    long s;
    if(n==1||n==2)s=2;
    else s=n-fun2(n-1);
    return s;
}
int fun3(int x){
    int p;
    if(x==0||x==1)p=3;
    else p=x- fun3(x-2);
    return p;
}

int f2(int x){
    int y;
    if(x==0||x==1) return 3;
    else y=x*x- f2(x-2);
    return y;
}

void t1(int a){
    a=10;
}


void main() {

    int t2(int m, int n);
    int s=t2(1,1);
    printf("%d\n",s);

//    int a =1;
//    t1(a);
//    printf("%d\n", a);

//    char A[]={"I am a student"};
//    printf("%d\n", strlen(A));


//    int i;
//    for (i = 1; i < 10; i+=2) {
//        if(i%3==0)printf("*");
//        else continue;
//        printf("#");
//    }


//    int p[7]={11,13,14,15,16,17,18},i=0,k=0;
//    while (i<7&&p[i]%2){
//        k=k+p[i];i++;
//    }
//    printf("%d\n",k);

//    int i,a[10];
//    for (int i = 9; i >=0 ; i--) a[i]=10-i;
//    printf("%d%d%d",a[2],a[5],a[8]);

//    int a[5],i;
//    for (i = 0; i < 5; i++) {
//        a[i]=2*i+1;
//        printf("%d",a[i]);
//    }

//    printf("%ld\n",f2(3));

//    printf("%ld\n",fun3(7));

//    printf("%ld\n",fun2(3));

//    int a=3,b=4,c=5,d;
//    d= f(f(a,b), f(a,c));
//    printf("%d\n",d);

//    int a=1,b=2,c=3,sum;
//    sum = fun((a++,b++,a+b),c++);
//    printf("%d\n",sum);


//    printf("Hello, World!\n");

//    int i = 0 , s=0;
//    do {
//        if(i%2){
//            i++;
//            continue;
//        }
//        i++;
//        s+=i;
//    } while (i<7);
//    printf("%d\n",s);

//    int i,j;
//    for (i = 1; i <= 2; i++) {
//        for (j = 1; j <= 3; j++) {
//            printf("*");
//        }
//    }

//    for (int i = 5; i ; i--) {
//        for (int j = 0; j < 4 ; j++) {
//            printf("b");
//        }
//    }

//    int i,j,x=0;
//    for (i = 0;i  < 2; i++) {
//        x++;
//        for (j = 0; j < 3; j++) {
//            if(j%2) continue;
//            x++;
//        }
//        x++;
//    }
//    printf("x=%d\n",x);

//    int m,n;
//    scanf("%d%d",&m,&n);
//    while (m!=n){
//        m-=n;
//        while (n>m) n-=m;
//    }
//    printf("m=%d,n=%d\n",m,n);



}
int t2(int m, int n){
    return 10;
}

