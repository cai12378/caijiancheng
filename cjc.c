#include<stdio.h>
#include<stdlib.h>
#include "cjc.h"


LinkList* CreateList(){
	LinkList *head;
	head=(LinkList*)malloc(sizeof(LinkList));
head->next=NULL;
return head;
}

int Size(LinkList *l){
	LinkList *p=l->next;
	int k=1;
	while(p){
		k++;
		p = p->next;
	}
	return k;
}
void Insert(LinkList *l,int k,dataType x){
	if(k<1)
		exit(1);
	LinkList *p= l;
	int i = 0;
	while (p && i<k-1){
		p = p->next;
		p->next;
		i++;
	}
	if(!p) exit(1);
	LinkList *s =(LinkList*)malloc(sizeof(LinkList));
	s->data = x;
	s->next = p->next;
	p->next = s;
}
void Delete(LinkList *l, int k ){
	if (k<1) exit(1);
	LinkList *p = l;
	int i = 0;
	while (p->next && i<k-1){
		p = p->next;
		i++;
	}
	if (p->next==NULL) exit(1);
	LinkList *q = p->next;
	p->next = q->next;
	free(q);
}
int Empty(LinkList *l)
{return l->next==NULL;    }

      dataType GetData(LinkList *l, int k)
       {
	if (k<1) exit(1);
	LinkList *p =l;
	int i = 0;
	while (p && i<k){
		p = p->next;
		i++;
	}
	if (!p) exit(1);
	return p->data;}

	LinkList* Find(LinkList *l, dataType x){
		LinkList *p = l->next;
		while (p && p->data!=x)
			p = p->next;
		return p;
	}

	void Print(LinkList *l){
		LinkList *p = l->next;
		while (p) {
			printf("%d\n", p->data);
			p = p->next;
		}
		printf("\n");
	}
	void ClearList(LinkList *l) {
		LinkList *p, *q;
		p = l->next;
		while (p) {
			q =p;
			p = p->next;
			free(q);
		}
		l->next = NULL;
	}
	
	   
