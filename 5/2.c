#include <stdio.h>
#include <stdlib.h>

int main(){
   int a = 1;
   int b = 0;
   int c = 4000000;
   int d = 0;
   int e = 0;
   while(c > a){
	if(a%2 == 0){
	  d = d + a;
	}
	e = a;
	a = a + b;
	b = e;
   }
   printf("%d\n",d);
   return d;
}