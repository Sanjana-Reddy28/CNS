#include<stdio.h>
#include<math.h>
int main(){
	int a,q,xa,xb,ya,yb,ka,kb;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of q:");
	scanf("%d",&q);
	printf("enter the value of xa:");
	scanf("%d",&xa);
	printf("enter the value of xb:");
	scanf("%d",&xb);
	int x=pow(a,xa);
	ya=x%q;
	int y=pow(a,xb);
	yb=y%q;
	int n=pow(ya,xb);
	kb=n%q;
	printf("secret key value of user A: %d",ka);
	printf("secret key value of user B: %d",kb);
}
