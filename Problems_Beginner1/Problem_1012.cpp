#include<bits/stdc++.h>

using namespace std;

int main(){
	
 double a,b,c,tri, cir, quad, trap, ret;

 scanf("%lf %lf %lf",&a,&b,&c);

 tri    = (a*c)/2;
 cir    = 3.14159*(c*c);
 trap   = ((a+b)*c)/2;
 quad   = b*b;
 ret    = a*b;

 printf("TRIANGULO: %.3lf\n",tri);
 printf("CIRCULO: %.3lf\n",cir);
 printf("TRAPEZIO: %.3lf\n",trap);
 printf("QUADRADO: %.3lf\n",quad);
 printf("RETANGULO: %.3lf\n",ret);

return 0;
}
