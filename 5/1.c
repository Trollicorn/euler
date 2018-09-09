#include <stdio.h>
#include <stdlib.h>

int main(){
   int a = 3;
   int b = 0;
   int c = 1000;
   while(c > a){
	if(a%3 == 0 || a%5 == 0){
	  b = b + a;
	}
	a++;
   }
   printf("%d\n",b);
   return b;
}