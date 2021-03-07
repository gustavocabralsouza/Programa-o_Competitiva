#include<bits/stdc++.h>
using namespace std;

int main(){
	
  int code1, code2, number_units1, number_units2;
  double price1, price2, pay_final;
  
  scanf("%d",&code1);
  scanf("%d",&number_units1);
  scanf("%lf",&price1);
  scanf("%d",&code2);
  scanf("%d",&number_units2);
  scanf("%lf",&price2);

  pay_final = (price1 * number_units1) + (price2 * number_units2);
  
  printf("VALOR A PAGAR: R$ %.2lf\n",pay_final);
  		
  return 0;
}
