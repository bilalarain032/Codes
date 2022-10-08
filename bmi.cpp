#include<stdio.h>
#include<math.h>
int main(){
	float a=100, b=50, c, d, e, f, g=20, h=70, i, j, k, l, m, n, o, p;
	//Addition of two numbers
	c= a + b;
	printf("Addition of two numbers = %.1f\n", c);	
	//Division of two numbers(i)
	d= a/b;
	printf("Division of two numbers = %.1f\n", d);
	//Trur or false
	n = (a > b) || (a == b);
	printf("(a > b) || (a == b) is = %.0f \n", n); //1 for true and 0 for false
	//mod function(i)
	e= fmod(a , b);
	printf("a mod of b = %.0f\n", e);
	//less than function
	f = a<b;
	printf("a is less than b = %.0f\n", f); //1 for true and 0 for false
	//mod function(ii)
	i= fmod(g , h);
	printf("g mod of h = %.0f\n", i);
	//greater than function
	j = a>h;
	printf("a is greater than h = %.0f\n", j); //1 for true and 0 for false
	//Not true
	p = !(a > b);
	printf("!(a > b) is %.0f\n", p);
	//Division of two numbers(ii)
	k= a/g;
	printf("Division of two numbers = %.1f\n", k);
	//False and True
	o = (a == b) && (a > b);
	printf("(a == b) && (a > b) is %.0f\n", o);
	//Multiplication of two numbers
	l= a * b;
	printf("Multiplication of two numbers = %.1f\n", l);
	//Less than equal to function
	m= a<=b;
	printf("a is less than equal to b = %.0f\n", m); //1 for true and 0 for false
	return 0;
}