#include <memory.h>
#include <stdio.h>

#ifdef DEFINED
	#define DEFINE	    0
	#define LONG_DEFINE 0
#else
	#define DEFINE	    0
	#define LONG_DEFINE 0
#endif

typedef enum my_enum_e {
	A
} my_enum_t;

typedef struct my_struct_s {
	int a;
} my_struct_t;

void empty_function()
{
}

unsigned int function_with_parameters(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f, unsigned int g,
				      unsigned int h, unsigned int i)
{
	return a + b + c + d + e + f + g + h + i;
}

int main()
{
	// Comment
	int a		  = 0; // Trailing comment
	const char *arr[] = {
		[0] = "a",
		[1] = "b",
		[2] = "c",
		[3] = "d",
		[4] = "e",
		[5] = "f",
	};

	for (int i = 0; i < 1; i++) {
		a++;
		printf("%s\n", arr[a]);
	}

	empty_function();

	unsigned int long_argument = 0;

	unsigned int res = function_with_parameters(long_argument,
						    long_argument,
						    long_argument,
						    long_argument,
						    long_argument,
						    long_argument,
						    long_argument,
						    long_argument,
						    long_argument);

	return res;
}
