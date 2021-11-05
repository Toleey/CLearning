#include <stdio.h>
#define PI 3.1415//符号常量，一次修改，多处使用

//int main(){             //float转不了太长，能运行是因为运行时截断了
//    const float pi=3.1415926; //const关键字 不可以当作变量名使用（关键字都不可以）
//    int r;
//    r = 5;
//    //pi=3.14; 因为是常变量，不能再修改了
//    float s=PI*r*r;
//    printf("面积为%-4.3f平方米\n",s);//格式化输出 f代表浮点数,需要对应类型，一一对应关系 虽然给了4位，但还是按5位的方式输出
//    printf("面积为%10.2f平方米",s); //-左对齐 ，右对齐
//    //一共占10位，他的小数占2位
//    return 0;
//}

//void main(){
//    printf("Hello, World!\n");
//
//}

//\n \r \t \\ \ddd \xhh 算作一个字符

//int main(){
//    char c1,c2;
//    c1 = 97;
//    c2 = 'A';
//    printf("%c,%d,%c,%d",c1,c1,c2,c2);//c字符型，d整型
//
//}

//int main()
//{
//    int a1 = 5, a2 = 0x1fd, a3 = 0171;  //0x开头 16进制 ， 0开头 8进制 171
//    long L1 = 32987, L2 = 5252352L;
//    float  f1 = 123.345, f2 = 3.25e-3;
//    double d1 = 6.25e3, d2 = 0.00005;
//    char c1 = 'a', c2 = 'b';
//    printf("%d,%d,%d\n", a1, a2, a3);
//    printf("%ld,%ld\n", L1, L2);
//    printf("%f,%f\n", f1, f2);
//    printf("%lf,%f\n", d1, d2);
//    printf("%c,%d\n", c1, c2);
//}

//int main(){
//    float f,c;
//    f=64;
//    c=(f-32)*5/9;
//    printf("f=%f c=%f",f,c);
//    return 0;
//
//    float a = 3.5;
//    int b = 1;
//    float s = a*b;
//}

//void main(){
////    int a = 0,b = 0,c = 0;
////    c = (a+=a-=5),(a=b,b+3);
////    printf("%d,%d,%d\n",a,b,c);
//
////    int j =5;
////    printf("%d",j+=j-=j*j);
//
//
////    char a='a',b='b',c='c';
////    printf("a%cb%cc%c\n",a,b,c);
//
//      int a = 234;
//      float f = 24.56;
//      printf("%d,%f\n",a,f);
//      printf("(%d,%f)\n",a,f);
//
//      float g = 24.3567;
//      printf("g=%7.2f\n",g);
//      printf("g=%10.5f\n",g);
//
//}

void main(){

      int a = 234;
      float f = 24.56;
      printf("a=%d,f=%f\n",a,f);
      printf("(%d,%f)\n",a,f);
}
