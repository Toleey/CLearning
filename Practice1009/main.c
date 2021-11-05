#include <stdio.h>

void main() {
//    printf("Hello, World!\n");

//    int w,x,y,z,m;
//    w=1;x=2;y=3;z=4;
//    m=(w<x)?w:x;
//    m=(x<y)?m:y;
//    m=(m<z)?m:z;
//    printf("%d",m);

//    int k;
//    scanf("%d",&k);
//    switch (k) {
//        case 1:
//            printf("%d\n",k++);break;
//        case 2:
//            printf("%d\n",k++);
//        case 3:
//            printf("%d\n",k++);break;
//        default:
//            printf("Full!\n");
//    }

//    int x=0,y=1;
//    switch (x) {
//        case 0:
//            switch (y) {
//                case 1:
//                    printf("**1**\n");break;
//                case 2:
//                    printf("**2**\n");break;
//            }
//        case 1:printf("**3**\n");break;
//    }

//    char grade;
//    scanf("%c",&grade);
//    switch (grade) {
//        case 'A':printf("GREAT!\n");break;
//        case 'B':printf("GOOD!\n");break;
//        case 'C':printf("OK!\n");break;
//        case 'D':printf("NO!\n");break;
//        default:printf("ERROR!\n");
//    }

//    int score;
//    scanf("%d",&score);
//    switch (score/10) {
//        case 10:
//        case 9:printf("\n 优");
//        case 8:printf("\n 良");
//        case 7:
//        case 6:printf("\n 及格");
//        default:printf("\n 不及格");
//    }

//    int n=10;
//    while (n>7)
//    {
//        n--;
//        printf("%d\n",n);
//    }

//    int num = 0;
//    while (num<=2){
//        num++;
//        printf("%d\n",num);
//    }

//    int k=10;
//    while (k==0){
//        k=k-1;
//        printf("%d\n",k);
//    }

//    int k = 3;
//    while (k=0){    //0 false 不执行
//        k=k-1;
//        printf("%d\n",k);
//    }

//    int t,a=2,b=3,c=-2;
//    while (a>b>c){
//        t=a;a=b;b=t;c++;
//    }
//    printf("%d,%d,%d",a,b,c);

//    int k,n,m;
//    n=10;m=1;k=1;
//    while (k<=n){
//        m*=2;
//        k+=3;
//    }
//    printf("%d\n",m);

//    int x=7;
//    do {
//        printf("*",x--);
//    }
//    while (!(x%2));

//    int x=-1;
//    do {
//        x=x*x;
//        printf("执行一次");
//    } while (!x);

//    int n=0,p;
//    do {
//        scanf("%d",&p);n++;
//        printf("hi");
//    } while (p!=12345&&n<3);


//    int x=3;
//    do {
//        printf("%d\n",x-=2);
//    } while (!(--x));

//    int a=1,b=10;
//    do {
//        b-=a;a++;
//    } while (b--<0);
//    printf("a=%d,b=%d\n",a,b);

//    int a,b;
//    a=-1;
//    b=0;
//    do {
//        ++a;
//        ++a;
//        b+=a;
//    } while (a<9);
//    printf("%d\n",b);

//    for (int x = 0,y = 0;(y!=12&&x<4);x++) {
//        printf("he\n");
//    }

//    int x = 10,y=10,i;
//    for (int i = 0; x>8;y=++i) {
//        printf("%d %d ",x--,y);
//    }

//    for (int j = 10; j > 3 ; j--) {
//        if(j%3)j--;--j;--j;
//        printf("%d ",j);
//    }

//    int i;
//    for (int i = 0; i < 3; i++) {
//        switch (i) {
//            case 1:
//                printf("%d",i);
//            case 2:
//                printf("%d",i);
//            default:
//                printf("%d",i);
//        }
//    }

//    int a=0,i;
//    for (i = 1; i < 5; i++) {
//        switch (i) {
//            case 0:
//            case 3:a+=2;
//            case 1:
//            case 2:a+=3;
//            default:a+=5;
//        }
//    }
//    printf("%d\n",a);

//    int k=5,n=0;
//    while (k>0){
//        switch (k) {
//            default:break;
//            case 1:n+=k;
//            case 2:
//            case 3:n+=k;
//        }
//        k--;
//    }
//    printf("%d\n",n);

    int i;
    for (i = 0; i < 3 ; i++) {
        switch (i) {
            case 1:
                printf("%d",i);
            case 2:
                printf("%d",i);break;
            default:
                printf("%d",i);
        }
    }

}
