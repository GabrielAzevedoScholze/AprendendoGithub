#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1;
	int n2;
    
    double media;
    
    printf ("informe o primeiro numero: " );
    scanf ("%d", &n1), "\n";
    
    printf ("informe o valor do segundo numero: ");
    scanf ("%d", &n2), "\n";
    
    media = (n1 + n2) / 2;
    
    printf ("\n a media eh: %f \n\n",media);
    
	system("pause");
}
