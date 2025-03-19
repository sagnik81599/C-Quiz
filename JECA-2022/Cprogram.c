// #include<stdio.h>
// void main(){
//     int a=4;
//     float b;
//     b= ++a;
//     printf("%d %f\n",a,++b);
// }

// ANS:- 5,6.000 it is the right ans but in question option a) compiler error

//-----------------------------------------


// #include<stdio.h>
// void main(){
  
// int *j;
// {
//     int i = 1000;
//     j=&i;
// }
// printf("%d\n",*j);
// }

// Ans:- 1000
//-------------------------------------------------

// #include<stdio.h>
// #define I char
// void main(){
//     I i = 65;
//     printf("sizeof(i)= %d\n", sizeof(i));
// }

// Ans:- 1 
// plz check the define datatypes of their 
//----------------------------------------------------

// #include<stdio.h>
// void main(){
//     int x=0, y=0;
//     if(x && y++)
//     printf("%d..%d",x++,y);
//     printf("%d..%d",x,y);
// }

// Ans:- 0..0 
// The logical AND (&&) operator. Since x is 0,
// the entire expression x && y++ will not evaluate y++ because && stops execution if the first operand (x) is 0.
//------------------------------------------------------------------------


// #include<stdio.h>
// enum colors{BLACK,BLUE,CYAN};
// void main(){
//     printf("%d..%d..%d",BLACK,BLUE,CYAN);
// }

//Ans:- 0..1..2
// enum is user-defined user consisting of the  set of names.
//By default, the first value in an enum is assigned 0, and subsequent values are incremented by 1 automatically.
//-----------------------------------------------------------------------

#include<stdio.h>
void main(){
    int *j;
    {
        int i=1000;
        j=&i;
    }
    printf("%d\n",*j);
}

// Ans:- 1000
//----------------------------------------------------