
// #include<stdio.h>
// void main(){
//     int a = 40;
//     float b;
//     b = ++a;
//     printf("%d,%f",a,++b);

// }

// Ans:- 41,42.00000
//--------------------------------------------

// #include<stdio.h>
// void main(){
//     int a = -7;
//     float b;
//     b = a++;
//     printf("%d,%f",a,++b);
// }

// Ans:-   -6,-6.000000
//----------------------------------------------------

// #include<stdio.h>
// void main(){
//     int i = -9;
//     printf("%d%d%d",i++,++i,++i);
// }

// Ans:- -7,-6,-6
//-----------------------------------------


// #include<stdio.h>
// void main(){
//     int i= -1;
//     printf("sizeof(i) = %d\n",sizeof(i));
// }

// Ans:- 4
//------------------------------------------------------


// #include<stdio.h>
// void main(){
//     int x = -1,y = 1,z = 0;
//     if(x && y++ && z)
//        ++x,y++,--z;
//        printf("%d,%d,%d",x++,y++,z++);
// }

// Ans:- -1,2,0
//------------------------------------------------------


// #include<stdio.h>
// enum colors{RED,BROWN,ORANGE};
// void main(){
//     printf("%ld..%f..%d",RED,BROWN,ORANGE);
// }

// Ans:- 0..0.000000..1
//-------------------------------------------------------


// #include<stdio.h>
// void main(){
//     char M = 'M';
//     printf("%d %c",M,M);
// }

// Ans:- 77 M
//------------------------------------------------------


// #include<stdio.h>
// void main(){
//     int **ptr;
//     int temp = 65;
//     ptr[0] = &temp;
//     printf("%d",ptr[0][0]);
// }

// Ans:- 65
//---------------------------------------------------------

// #include<stdio.h>
// #include<stdlib.h>
// void main(){
//     int *ptr;
//     ptr = (int*)calloc(3,sizeof(int));
//     ptr[2] = 30;
//     printf("%d\n",*ptr);
// }

//Ans:- 0
//---------------------------------------------------------

// #include<stdio.h>
// int main(){
//     static char *s[]={"black","white","pink","violet"};
//     char **ptr[]={s+3,s+2,s},***p;
//     p=ptr;
//     ++p;
//     printf("%s\n",**p+1);
//     return 0;
// }

// Ans:- ink
//-------------------------------------------




