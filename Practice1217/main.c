#include<stdio.h>

void dele(char* p)
{
    char strnew[30], * q = strnew, * m = p;
    while(*p!='\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = *p;
    q = strnew;
    p = m;
    while (*q != '\0')
    {
        if (*q >= '0' && *q <= '9')
        {
            q++;
        }
        else
        {
            *p = *q;
            q++;
            p++;
        }
    }
    *p = '\0';
}

void  del(char *s,char ch){

    char* m=s;
    char* n=s;
    while (*s!=0){
        *m=*s;
        m++;
        s++;
    }
    *m=*s;
    s=n;
    m=n;
    while (*m!='\0'){
        if(*m==ch){
            m++;
        } else{
            *s=*m;
            m++;
            s++;
        }
    }
    *s=*m;

}

int main()
{


//    char str[30], * p = str;
//    gets_s(str);
//    dele(p);
//    printf("The new string is:%s", str);

}