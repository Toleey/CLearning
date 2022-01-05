#include <stdio.h>
#include <string.h>

fun(int y){

    if(y>0) fun(y-1);
    printf("%d",y);

}

void main() {

//    char str[]="Beijing";
//    printf("%d\n",strlen(strcpy(str,"China")));

    int x =4;
    fun(x);
    printf("\n");

//    int x=2,y=-1,z=2;
//    if(x<y)
//        if(y<0) z=0;
//        else z+=1;
//    printf("%d\n",z);


}

