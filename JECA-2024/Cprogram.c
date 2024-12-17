// #include<stdio.h>
// int main(){
//     int x =65 , *p = &x;
//     void *q=p;
//     char *r=q;
//     printf("%c\n",*r);
//     return 0;
// }

//o/p -> A
//-----------------------------


// #include<stdio.h>
// int main(){
//    const int a=20;
//    printf("%d",++a);
//    return 0;
// }

// o/p ->  Compilation Error
//----------------------------------------


// #include<stdio.h>
// #define CUBE(x)(x*x*x)
// int main(){
//    int a,b=3;
//    a = CUBE(b++);
//    printf("%d %d\n",a,b);
//    return 0;
// }

// o/p -> 60,6
//------------------------------------------


// #include<stdio.h>
// int main(){
//    int x=2,y=1;
//    x*=x+y;
//    printf("%d\n",x);
   
// }

//o/p -> 6
// ----------------------------------------------


// #include<stdio.h>
// int main(){
//   int i=0;
//   int x=i++;
//   int y=++i;
//   printf("%d %d\n",x,y);
     
// }

// o/p-> 0,2
//------------------------------------------------


// #include<stdio.h>
// int main(){
//    int i=0;
//    while(i=0)
//    printf("\n True");
//    printf("\n False");
//    return 0;
// }

// o/p -> False
//----------------------------------

// #include<stdio.h>
// int main(){
//    int i,k=5;
//    if(i=k){
//     printf("YES\n");
//    }
//    else{
//     printf("NO\n");
//    }
   
//    return 0;
// }

// o/p -> YES
//------------------------------------

// #include<stdio.h>
// int main(){
//    int a=20;
//    printf("CINEMA");
//    return 1;
//    printf("DINOSAUR");
//    return 1;
// }

// o/p -> CINEMA
//-------------------------------