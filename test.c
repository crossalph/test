#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int r, input;
    int x = 99999;
    int y = 9999999;
    int diff = y - x;
    srand(time(NULL));
    r = rand() % (diff + 1) + x;
    printf("%d\n", r);
    FILE *out=fopen("test.txt","w");
	fprintf(out,"%d\n",r);
	fclose(out);
	printf("Sukses mengirim token.\n");

    printf("Masukkan token: ");
    scanf("%d", &input);


    if (r == input)
    {
        printf("Token sama");
    }
    else
    {
        printf("Token salah");
    }
    
    
}
