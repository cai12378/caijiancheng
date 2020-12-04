#ifndef cjc7_h
#define cjc7_h
#include <stdio.h>
#include <stdlib.h>
typedef int dataType;
typedef struct LinkStack {
	dataType data;
	struct LinkStack *next;
}LinkStack;
LinkStack* InitStack()
	int Empty(LinkStack *s)
	void Push(LinkStack *s,dataType x)
	void Pop(LinkStack *s)
	dataType GetTop(LinkStack *s)
