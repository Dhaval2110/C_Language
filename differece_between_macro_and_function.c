//1---> Macro

#define CUBE(b) b*b*b
main()
{
	printf("%d",CUBE(1+2));
}
// Wrong O/P ==7

//2 --> Function
int cube(int b)
{
	return b*b*b;
}
main()
{
	printf("%d",cube(1+2));
}

// Correct O/P = 27 
