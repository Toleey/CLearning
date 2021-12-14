#include <stdio.h>
#include <stdlib.h>

#define N 20

union data{
    int k;
    char c;
    float f;
} a;

void main() {

    printf("%d\n",a);

//    int n;
//    a={2,'a',1.2};
//    n=a.f;
//    printf("%d\n",n);


//    float a = 2.0;
//    int b = 1;
//    b=a;
//    printf("%d\n",a);

//    int i = 1;
//    for (i = 1;  ; ) {
//        printf("%d\n",i);
//        if (++i<10){
//            printf("%d\n",i);
//            continue;}
//    }

//    int i = 32767;
//    do {
//        if (i<0) break;
//        printf("%d\n",i);
//    } while (++i);

//      int a[N],i;
//        for(i=0;i<N;i++) scanf("%d",&a[i]);
//        for(i=0;i<N;i++){
//            if((i+1)%4 == 0) printf("\n");
//            printf("%3d",a[i]);
//        }


//    int x=2;
//    do{
//        printf("*");
//        x--;
//    } while (!x==0);

//    int *p;
//     p = (char*) malloc(sizeof (char ));

//    int i = 1, t = 1, s = 0;
//     for (i = 1; i <= 101 ; i += 2) {
//        if() {
//            s = s + t;
//        }else{s = s - t};
//         printf("%d",s);
//     }
//     printf("hi");
//     printf("%d",s);

//     int a,b,c;
//     scanf("a=%db=%dc=%d",&a,&b,&c);
//     printf("%d,%d,%d",a,b,c);



//    char a = '1';
//
//     a = (int)a;
//     printf("%d\n",a);
//
//      a = int (a);
//      printf("%d\n",a);
//     a = a-48;
//     printf("%d\n",a);
//
//     a = a/(int)a;
//     printf("%d\n",a);

//     int b = (int)a;
//     printf("%d\n",b);

//     int e = int (a);
//     printf("%d\n",e);


//     int c = a-48;
//     printf("%d\n",c);
//
//     int d = a/(int)a;
//     printf("%d\n",d);



//     float x,y;
//     scanf("x=%f,y=%f",&x,&y);
//     printf("%f,%f",x,y);

//     printf("Hello, World!\n");

}
