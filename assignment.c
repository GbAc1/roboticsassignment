#include<stdio.h>
#include<math.h>
 int main(){
     int rds;
     printf("enter the radius of the circle\t");
     scanf("%d",&rds);
     
     for(int i=0;i<=(2*rds);i++){
         for(int j=0;j<=(2*rds);j++){
              int disofstar=sqrt((rds-i)*(rds-i)+(rds-j)*(rds-j));
              if(disofstar<=(rds)){
                  printf("G");
              }
              else{
                  printf(" ");
              }
         }printf("\n");
     }
 }
