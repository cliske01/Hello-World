#include "STRcat.h"

char *STRcat(char *x, char *y) {
	char *cptr;
	int i=0, k=0, j;
	for (;*cptr!='\0';i++) {
		cptr=&x[i];
		}
		cptr++;
		i--;
	for (j=i;*cptr!='\0';j++, k++) {
		cptr=&y[k];
		}
		j--;
	cptr=malloc(sizeof(char)*j);
	assert(cptr!=NULL);
	for (int k=0;k<i;k++) {
		cptr[k]=x[k];
		}
	for (int k=i,x=0;k<j;k++, x++) {
		cptr[k]=y[x];
		}
	cptr[j]='\0';
	return cptr;
}
