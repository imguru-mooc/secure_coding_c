#if 0
// 위험한 코드
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE (10) 
typedef struct {
	int top;
	int arr[STACK_SIZE];
} Stack;
int is_empty(const Stack* s)
{
	return s->top == 0;
}
Stack* create_stack()
{
	Stack* p = malloc(sizeof(Stack));
	if (p == NULL) {
		perror("malloc");
		return NULL;
	}
	return p;
}
void remove_stack(Stack* s)
{
	free(s);
	s->top = 0;
}
int main()
{
	Stack* stack = create_stack();
	if (is_empty(stack))
		printf("stack is empty\n");
	remove_stack(stack);
	return 0;
}


#endif 

#if 0
// 해결 방법
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE (10) 
typedef struct {
	int top;
	int arr[STACK_SIZE];
} Stack;
int is_empty(const Stack* s)
{
	return s->top == 0;
}
Stack* create_stack()
{
	Stack* p = malloc(sizeof(Stack));
	if (p == NULL) {
		perror("malloc");
		return NULL;
	}
	return p;
}
void remove_stack(Stack* s)
{
	free(s);
	s->top = 0;
}
int main()
{
	Stack* stack = create_stack();
	if (is_empty(stack))
		printf("stack is empty\n");
	remove_stack(stack);
	return 0;
}
#endif 

