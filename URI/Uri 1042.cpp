#include <stdio.h>
int main() {
int a[3], b[3],aux;
for (int i=0; i<3; i++){
	scanf("%d", a+i);
	a[0]= b[0];
	a[1] = b[1];
	a[2] = b[2];}
	
for (int t=0; t<3; t++){
	for (int f = 0;f<3; f++){
		if (a[t] > b[f])
		aux = a[t];
		a[t] = b[f];
		b[f] = aux;
		
		printf("%d\n", a[t]);
	}
}
return 0;
}
