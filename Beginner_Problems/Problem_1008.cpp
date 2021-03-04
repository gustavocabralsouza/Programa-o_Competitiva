#include<bits/stdc++.h>
using namespace std;

int main(){
	
  int number_employees, hour_worked;
  double amount_hora, salary;
  
  scanf("%d",&number_employees);
  scanf("%d",&hour_worked);
  scanf("%lf",&amount_hora);
  
  salary = (number_employees*hour_worked*amount_hora)/number_employees;
  
  printf("NUMBER = %d\n",number_employees);
  printf("SALARY = U$ %.2lf\n",salary);
  
  return 0;
}
