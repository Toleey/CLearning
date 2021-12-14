#include <stdio.h>
#include <string.h>

void fun(int *a,int n)/*fun 函数的功能是将 a 所指数组元素从大到小排序*/
{ int t,i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]<a[j])
            { t=a[i];a[i]=a[j];a[j]=t; }
}

int tj (){

}
//程序题代码简洁精炼有加分吗

void dele(char *b){

    char c[]={};
    int j = 0;
    for (int i = 0; i < strlen (b); ++i) {
        if(b[i]>47 && b[i]<58) { //数字
            printf("%c\n",b[i]);
        } else{ //非数字
            printf("%c\n",b[i]);
            c[j]=b[i];
            j++;

        }

    }
    printf("c %s\n", c);
    b=c;
}


int main() {
    char a[] = {};
    scanf("%s",a);
    dele(a);
    printf("The new string is: %s", a);


//    int scores[10],*p=scores;
//    while (*p){
//        scanf("%d",scores);
//
//    }

//    int a[10]={1,2,3,4,5,6,7,8,9,0},i;
//    fun(a+4,5);
//    for(i=0;i<10;i++)
//        printf("%d,",a[i]);
//    printf("\n");


//    int x=8;
//    for(;x>0;x--)
//    { if(x%3) { printf("%d ",x--);continue; }
//        printf("%d ",--x);
//    }


//    char p[20]={'E','F','G','H'},q[]="EFGH",r[]="EFGHI";
//    strcat(p,r);strcpy(p+strlen(q),q);
//    printf("%d\n",strlen(p));
//
//    int a[2][3]={{1,2,3},{-10,5,10}};
//    int i,j,m; m=a[0][0];
//    for(i=0;i<2;i++) for(j=0;j<3;j++)
//            if(a[i][j]>m) m=a[i][j];
//    printf("m=%d\n",m);





    return 0;
}
