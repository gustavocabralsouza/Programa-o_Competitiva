#include<bits/stdc++.h>
using namespace std;

int main(){
	
  double distance, consum, result;
  
  scanf("%lf",&distance);
  scanf("%lf",&consum);
  
  result = distance / consum;
  
  printf("%.3lf km/l\n",result);
  
  return 0;
}
