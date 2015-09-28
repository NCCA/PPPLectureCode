#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
	%c     The character format specifier.
%d     The integer format specifier.
%i     The integer format specifier (same as %d).
%f     The floating-point format specifier.
%e     The scientific notation format specifier.
%E     The scientific notation format specifier.
%g     Uses %f or %e, whichever result is shorter.
%G     Uses %f or %E, whichever result is shorter.
%o     The unsigned octal format specifier.
%s     The string format specifier.
%u     The unsigned integer format specifier.
%x     The unsigned hexadecimal format specifier.
%X     The unsigned hexadecimal format specifier.
%p     Displays the corresponding argument that is a pointer.
%n     Records the number of characters written so far.

%%     Outputs a percent sign.
*/

	printf("%c \n",'c');
	printf("%d \n",2);
	printf("%i \n",3);
	printf("%f \n",2.4);
	printf("%e \n",2.6);
	printf("%E \n",2.6);
	printf("%g \n",0.001);
	printf("%G \n",0.00002);
	printf("%o \n",10);
	printf("%s \n","This is a string");
	printf("%u \n",-123123);
	printf("%x \n",12);
	printf("%X \n",0x100);
	printf("%% \n");

	return EXIT_SUCCESS;
}