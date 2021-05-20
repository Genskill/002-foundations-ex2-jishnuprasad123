#include <stdio.h>
#include <cs50.h>
int main (void){
 int a = get_int("side 1 ");
 int b = get_int("side 2 ");
 int c = get_int("side 3 ");
 float d = (a*a)+(b*b);
 float e = (c*c);
 if (d==e){
 printf("Yes\n");
 }
 else{
 printf("No\n");
 }

}
