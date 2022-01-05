#include <stdio.h>
#include <stdlib.h>

#define A(x,y) x+y
#define B A(4,5)*2

struct NODE{
    int num;
    struct NODE *next;
};

int main() {

    int i = 1,j;
    j=(i++,i++||i++);
    printf("%d",j);

//    struct NODE *p,*q,*r;
//    p=(struct NODE*)malloc(sizeof (struct NODE));
//    q=(struct NODE*)malloc(sizeof (struct NODE));
//    r=(struct NODE*)malloc(sizeof (struct NODE));
//    p->num=12;q->num=8;r->num=28;
//    p->next=q;q->next=r;
//    printf("%d\n",p->num+q->next->num);


//    int a[2][4] = {9,4,6,7,5,8,2,3};
//    int i,j,k,t;
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 3; j++) {
//            for (int k = 0; k < 3-j; k++) {
//                if(a[i][j]<a[i][k+1]){
//                    t=a[i][k],a[i][k]=a[i][k+1],a[i][k+1]=t;
//                }
//            }
//        }
//        printf("%2d%2d\n",a[0][1],a[1][3]);
//    }


//    int i,k;
//    i= A(2,3)+B;
//    k= B-B;
//    printf("%4d%4d",i,k);

//    int flag,n,k;
//    int a[30]={0},i=1;
//    for (n = 3; n <= 30 ; n+=2) {
//        flag = 1;
//        for (k = 2; k <=n/2 ; k++) {
//            if(n%k==0){
//                flag=0;
//                break;
//            }
//            if(flag) a[i++]=n;
//        }
//        printf("%4d%4d",a[3],a[7]);
//    }


    return 0;
}
