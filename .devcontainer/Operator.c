// #include<stdio.h>
// void main(){
//     int j=3;
//     int a= j/ -2;
//     int b= j% -2;
//     printf("%d %d\n",a,b);    
// }

// Ans:-  -1,1
// ----------------------------------------

// #include<stdio.h>
// void main(){
//     int j=5;
//     j=j/3;
//     printf("%d\n",j);
// } 

//Ans:- 1
//----------------------------------------
    
    // #include<stdio.h>
    // void main(){
    //     int x=5,y=10;
    //     printf("%d\n",(x<y));
    // }

// Ans :- 1
//--------------------------------------------


// #include<stdio.h>
// void main(){
//     int var=6;
//     float var=6;
//     printf("%d",var);
// }

// Ans:- Compiler Error
// ----------------------------------------------------

// #include<stdio.h>
// void main(){
//     double x=1.2;
//     int sum = (int)x + 1;
//     printf("Sum = %d\n",sum);
// }

// Ans:- sum is = 2
// ----------------------------------------------------------

// #include<stdio.h>
// void main(){
//     double a = 14728749.22;
//     int b=a;
//     printf("%d\n",b);
//     printf("%lf\n",b);
// }

// Ans:- 14728749, 0.000000
// --------------------------------------------------------------

// #include<stdio.h>
// void main(){
//     int a=97;
//     char b=a;
//     printf("%c\n",b);
// }

// Ans:- a
// -----------------------------------------------------------------

// #include<stdio.h>
// void main(){
//     int a=2,b=5,c;
//     c=a&&b;
//     printf("%d\n",c);
// }

// Ans:- 1
//----------------------------------------------------------------

// #include<stdio.h>
// #define CUBE(x)(x * x * x);
// int main(){
//     int a,b=3;
//     a = CUBE(b++);
//     printf("%d %d\n",a,b);
//     return 0;
// }

// Ans:- 27,6
//---------------------------------------------------------------

// #include<stdio.h>
// #define SQR(x)(x*x);
// int main(){
//     int a,b=3;
//     a = SQR(b+2);
//     printf("%d\n",a);
//     return 0;
// }

// Ans:- 11
//-----------------------------------------------------------------

// #include<stdio.h>
// #define MAN(x,y)((x)>(y)) ? (x):(y);
// int main(){
//     int i=10,j=5,k=0;
//     k= MAN(++i,j++);
//     printf("%d,%d, %d\n",i,j,k);
//     return 0;
// }

//Ans:- 12,6, 12
//-------------------------------------------------------------------