// #include<stdio.h>
// void main(){
//     int num[]={1,2,3,4};
//     printf("%d\n",num[1]);
//     printf("%d\n",(*num+1));
// }

// Ans:- 2,2
// ---------------------------------------

// #include<stdio.h>
// void main(){
//     int arr[3][2]={{1,2},{3,4},{5,6}};
//     printf("%d \n",arr[1][1]);
//     printf("%d \n",arr[2][0]);
// }

// Ans:- 4,5
//------------------------------------------

// #include<stdio.h>
// void main(){
//     int arr1[5]={1,2,3,4,5};
//     int *ptr=arr1;
//     printf("%d ",*ptr);
//     printf("%d\n",*(ptr+1));
// }

// Ans:- 1,2
// ----------------------------------------------

//  #include<stdio.h>
// void main(){
//     int arr1[5]={1,2,3,4,5};
//     int *ptr=&arr1[3];
//     printf("%d\n",*ptr);  
// }

// Ans:- 4
// ---------------------------------------------------

// #include<stdio.h>
// void main(){
//     int arr2[]={10,20,30};
//     printf("%d\n",arr2[3]);
// } 

// Ans-: Garbage value or 0
// ------------------------------------------

// #include<stdio.h>
// void main(){
//     char arr3[]="JECA PREPARATION";
//     printf("%s\n",arr3);
// }  

// Ans:- JECA PREPARATION
// -------------------------------------------------

// #include<stdio.h>
// void main(){
//     int arr[]={12,13,14,15,16};
//     printf("%d,%d,%d\n",sizeof(arr),sizeof(*arr),sizeof(arr[0]));

// }

// Ans:- 20,4,4
//-----------------------------------------------------------------------------

// #include<stdio.h>
// int main(){
//     printf("%d%d",sizeof(int *),sizeof(int **));
// }

//Ans:- 8 8
//-----------------------------------------------------------------------

// #include<stdio.h>
// int main(){
// char *p;
// printf("%d%d",sizeof(*p),sizeof(p));
// }

// Ans:- 1,2
//-----------------------------------------------------------------------

