#include<bits/stdc++.h>
using namespace std;

int main(){
	
  char name[61];
  double salary_fix,sales_total,salary;
  
  scanf("%s",name);
  scanf("%lf",&salary_fix);
  scanf("%lf",&sales_total);
  
  salary = salary_fix + (0.15 * sales_total);
  
  printf("TOTAL = R$ %.2lf\n",salary);
  
  return 0;
}
