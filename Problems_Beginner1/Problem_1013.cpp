#include<bits/stdc++.h>

using namespace std;

int main(){
	
 int n1, n2,n3, maior;
 
 scanf("%d %d %d", &n1, &n2, &n3);
 if(n1>n2 && n1>n3) maior = n1;
 else if(n2>n1 && n2>n3) maior = n2;
 else if(n3>n1 && n3>n2) maior = n3;

 printf("%d eh o maior\n",maior);

return 0;
}
