#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#iinclude "cjc7.h"


LinkStack* InitStack（）{
	LinkStack *t = (LinkStack*)malloc(sizeof(LinkStack));
	t->next = NULL;
        return t;
}
int Empty(LinkStack *s){
	return s->next == NULL;
}
void Push(LinkStack *s,dataType x){
	LinkStack *t = (LinkStack*)malloc(sizeof(LinkStack));
	t->data =  x;
	t ->next = s->next;
	s->next = t;
}
void Pop(LinkStack *s){
	if (Empty(s)) exit(1);
	LinkStack *p = s->nexxt;
	s->next = p->next;
	free(p);
}
dataType GtTop(LinkStack *s){
	return s->next->data;
}
int main(){
	LinkStack *s = InitStack();
	Push(S,80);
	Push(S,90);
	Pop(S);
	Push(S,70);
	printf("%d",GetTop(s));
}

