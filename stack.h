typedef int bool;
typedef struct {
	int loglength;
	int alloclength;
	char *elems;
	} stack;

void structNew(stack *);
void structRem(stack *);
void structPush(stack *, const char *);
char *structPop(stack *);
bool isEmpty(stack *);
