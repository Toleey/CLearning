#include <stdio.h>
#include <strings.h>

#define PS 3+4
#define MA(x)x*(x-1)
#define MIN(x,y) (x)<(y)?(x):(y)
#define MAX(x,y) (x)>=(y)?(x):(y)

struct abc{
    int a,b,c;
};

int fun(int n){
    static int s = 2;
    s+=n;
    return s;
}

#define MIN(x,y) (x)<(y)?(x):(y)

void main() {


//    int i = 10,j=15,k;
//    k=10* MIN(i,j);
//    printf("%d\n",k);

//    int x=2;
//    printf("%d\n", fun(x));
//    printf("%d\n", fun(x));


    char s[]="china";
    char *p=s;
    printf("%d\n", strlen(s));//不一定计\0
    printf("%d\n", strlen(p));//计算字符串的长度

//    printf("%d\n", sizeof 8 (s));//算\0全部所占空间 定义数组后可以用sizeof命令获得数组的长度
//    printf("%d", sizeof (p));

    //字符数组的长度算上\0，字符串的长度遇到\0结束 不算\0


//    char A[]={"I am a student"};
//    printf("%d", strlen(A));

//    char s[20]="ABC";
//    char t[20]="DEF";
//    //strcpy(s,t);
//    strcat(s,t);
//    printf("%s,%s\n",s,t);
//    printf("%d,%d", strlen(s),sizeof (s));




//    int a[3][4]= {1,3,5,7,9,11,13,15,17,19,21,23};
//    int (*p)[4];
//    int sum=0,i,j;
//    //ptr=a;
//    for(i=0;i<3;i++)
//        for(i=0;j<2;j++)
//            sum+=*(*(p+i)+j);
//    printf("%d\n",sum);



//    char s[]="china";//数组长度+/0
//    //字符串到/0结束，不算/0
//    char  *p=s;
//    printf("%d\n", strlen(s));
//    printf("%d\n", strlen(p));
//    printf("%d\n", p);
//    printf("%d\n", sizeof (s));
//    printf("%d", sizeof (p));

//    union data{
//        int i;
//        char ch;
//        double f;
//    }x;
//    printf("%d\n",sizeof (x));


//    struct complx{
//        int x;
//        int y;
//    } cnum[2]={1,3,2,7};
//    printf("%d\n",cnum[0].y/cnum[0].x*cnum[1].x);

//    struct abc s[2]={{1,2,3},{4,5,6}};
//    int t;
//    t=s[0].a+s[1].b;
//    printf("%d\n",t);





//    struct a{
//       char x;
//       double y;
//    } data,*t;
//    (*t).x;




//    struct worker
//    {int no;
//        char *name;
//    }work,*p=&work;
//    work.no;
//    (*p).no;
//    p->no;



//    int i=10,j=15;
//    printf("%d\n",10* MAX(i,j));


//    int i=10,j=15,k;
//    k=10*MIN(i,j);
//    printf("%d\n",k);


//    int a=1,b=2;
//    printf("%d\n", MA(1+a+b));

//    int z;
//    z=PS*2;
//    printf("%d",z);



//    char str1[20]={'a','b','c'};
//    char str2[20]={'d','e','f'};
//    strcpy(str1,str2);
//    printf("%s\n",str1);
//    printf("%d\n",sizeof (str1));
//    printf("%d\n",strlen(str1));



//    char s[]="china";
//    char *p=s;
//    printf("%d\n",s==p);


//    char s[20]="ABC";
//    char t[20]="DEF";
//    strcpy(s,t);
//    printf("%s,%s\n",s,t);



//    char s[]="\n123\\";
//    printf("%d,%d\n",strlen(s),sizeof(s));
//
//    char str[20]="hello\0\t\'\\";
//    printf("%d %d\n", strlen(str),sizeof (str));



//    char a[]={'a','b','c','d','e','f','g','h','\0'};
//    int i,j;
//    i=sizeof (a);
//    j= strlen(a);
//    printf("%d,%d\n",i,j);
//

//    char s[]="ABCD";
//    strlen(s);
//    sizeof(s);



//    char sp[]="\t\n\\0will\n";
//    printf("%d\n", strlen(sp));
//
//    char *p="abcde\0fghjik\0";
//    printf("%d\n", strlen(p));



//    printf("%d\n",strlen("ATS\n012\1\\"));
//    printf("%d\n", strlen("\t\"\065\xff\n"));



//    char str[][10]={"China","Beijing"},
//    *p=str;
//    printf("%s\n",p+10);


//    char a[]="ABCDEFGH";
//    char b[]="aBCdefGh";
//    char *p1,*p2;
//    int k;
//    p1=a;p2=b;
//    for (k = 0; k <=7; k++) {if(*(p1+k)==*(p2+k)) printf("%c",*(p1+k)); }
//        printf("\n");



//    char str[]="ABCD",*p=str;
//    printf("%d\n",*(p+4));

}
