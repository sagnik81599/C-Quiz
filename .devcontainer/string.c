// #include<stdio.h>
// int main(){
// char str[] ="HELLO SAGNIK";
// printf("%s\n",str);
// }

// Ans:- HELLO SAGNIK
//----------------------------------------------------

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char str1[20]="HELLO ";
//    char str2[20]="WORLD";

//     printf("%s\n",strcat(str1,str2));
// }

//Ans:- HELLO WORLD
//------------------------------------------------------------

#include<stdio.h>
#include<string.h>
void main(){
    char str3[]="Mahendra Singh";
    char str4[]="DhoniCaptain";
    strncat(str3,str4,5);
    printf("%s\n",str3);
}

//Ans:- Mahendra SinghDhoni