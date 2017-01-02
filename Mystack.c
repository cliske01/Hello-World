 #include <stdio.h>
 #include <stdlib.h>
 #include <assert.h>
 #include <string.h>
 #include "stack.h"
 #define true 1
 #define false 0

void structNew(stack *s) {
	s->loglength=0;
	s->alloclength=4;
	s->elems=malloc(4*sizeof(char *));
	}
	
void structRem(stack *s) {
	if (s->elems==NULL) {
    printf("Stack is empty!\n");
    return;
  }
	free(s->elems);
	s->elems=NULL;
	}
	
bool isEmpty(stack *s) {
	if (s->elems==NULL) return true;
	else return false;
	}

void structPush(stack *s, const char *x) {
	if (s->loglength==s->alloclength) {
		printf("Resizing \n");
		s->alloclength*=2;
		s=realloc(s->elems,(s->alloclength)*sizeof(char *));
		assert(s!=NULL);
		}
	strcpy((s->elems)+(s->loglength*sizeof(char *)), x);
	s->loglength++;
	}
	
char *structPop(stack *s) {
	if (isEmpty(s)==true) {
		printf("Stack Overflow!");
		return NULL;
		}
	else if (s->loglength==1) {
		s->elems=NULL;
		s->loglength--;
		return NULL;
		}
	s->loglength--;
	return s->elems+(s->loglength+1);
	}
