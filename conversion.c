#include<stdio.h>
int main()
{
	int km,m,cm;
	float inch,ft;
	printf ("Distance bet two cities=");
	scanf ("%d",&km);
    
    m=km*1000;
    printf("m=%d\n",m);
	    
    inch=km*39370.1;
    printf("inch=%f\n",inch);
    
    ft=km*3280.84;
    printf("ft=%f\n",ft);
    
    return 0;
}