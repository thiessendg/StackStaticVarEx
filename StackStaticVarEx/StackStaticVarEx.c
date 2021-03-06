// StackStaticVarEx.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

void func() {
	static int x = 0;
	/* x is initialized only once across five calls of func() and
	the variable will get incremented five
	times after these calls. The final value of x will be 5. */
	x++;
	printf("%d\n", x); // outputs the value of x
}

void func2(int *n) {
	(*n)++;
	printf("%d\n", *n); // outputs the value of x
}

int main() { //int argc, char *argv[] inside the main is optional in the particular program

	func();// prints 1
	func();// prints 2
	func();// prints 3
	func();// prints 4
	func();// prints 5
	static int y = 5;
	//int *p = &y;
	func2(&y); // prints 6
	func2(&y); // prints 7
	func2(&y); // prints 8
	func2(&y); // prints 9
	func2(&y); // prints 10


	return 0;
}