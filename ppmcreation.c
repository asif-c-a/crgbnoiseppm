#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *fptr;

	int w, h;

	fptr = fopen("file.ppm", "w");

	printf("Input width  :");
	scanf("%d", &w);
	printf("Input height :");
	scanf("%d", &h);

	fprintf(fptr, "P3\n%d\n%d\n#Comment\n%d\n", w, h, 5);

	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < w; j++)
		{

			int a, b, c;

			a = rand() % (5 - 0 + 1) + 0;
			b = rand() % (5 - 0 + 1) + 0;
			c = rand() % (5 - 0 + 1) + 0;

			fprintf(fptr, "%d %d %d ", a, b, c);
		}
		fprintf(fptr, "\n");
	}


	fclose(fptr);

	system("xv file.ppm");

	return 0;
}