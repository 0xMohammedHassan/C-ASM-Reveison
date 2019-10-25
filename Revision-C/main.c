#include<stdio.h>
#include<stdlib.h>

int x = 10;
int x2 = 5;
int a() {

	x = 10;
	return x;
}

int b() {

	int x = 20;
	return a();
}
int j() {
	{
	int *a;
	a = &x;
	*a = 15;
	return x;
	}

} loiok;

//Embeeded Programming :p
union myU
{
	int b;
	int *a;
	int **k;
	int ***trip;
	struct emb1
	{
		union MyUnion
		{
			struct emb2
			{
				union MyUnion2
				{
					struct MyStruct2
					{
						union MyUnion3
						{
							int y;
						};

					};

				};
				int b;
			};
			int a;
			
		};
		char a1;
		int b1;
	}MyU1;
}myU2; //End of Embeeded 

// Passing pointer array

int pa(int *arr[], int size) {

	for (int i = 0; i < size; i++) {



	}

}//End of passing pointers

//Sum array
int sumarr(int arr[], int size) {

	int sum = 0;
	for (int i = 0; i < size; i++) {

		sum += arr[i];



	}
	//printf("the Sum of array records is %d%", sum);

	return sum;
}
int main() {
	system("title Main.c");
	// Dynamic scoping example start
	printf("\n Dynamic scoping of X is %d%", j());
	
	// Dynamic end
	
	//Arrary example 
	int size = 0;
	int arr1[5] = { 1,1,1,1,6 };

	int finalSum =sumarr(arr1, 5);
	printf("\n the final sum of array records is %d", finalSum);
	//
	//asm(x, size);
	int size1 = 4;
	//Simple calculation in inline assembly
	int c=0;
	/*__asm {

		mov eax, x2
		mov ebx, size1
		add eax, ebx
		mov c, eax
	}*/
	
	//printf("\n the total value of X2 is: %d", x2);


	//Changing global variable via Inline Asm

	char *Bypass = "\n New value Bypass restriction of X : ";
		
	__asm {
		mov x,200
		mov ebx,x
		mov eax,Bypass
		push eax
		//push ebx
		call printf
		pop eax
		//pop ebx
	}
		printf("%d", x);
		printf("\n Global Change proof X: %d", x);

	//printf("\n the new value of size1 is %d", size1);
	
	
	getchar();

	return 0;

}