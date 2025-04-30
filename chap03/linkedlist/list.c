#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/* Place in the implemenation file */
struct Node {
	ElementType Element;
	Position Next;
};

/* Return true if L is empty */
int IsEmpty(List L) { return L->Next == NULL; }

/* Return true if P is the last position in list L */
/* Parameter L is unused in this implemenation */
int IsLast(Position P, List L) { return P->Next == NULL; }

/* Return Position of X in L; NULL if not found */
Position Find(ElementType X, List L) {
	Position P;
	P = L->Next;
	while (P != NULL && P->Element != X) {
		P = P->Next;
	}
	return P;
}

/* Delete first occurance of x from a list */
/* Assume use of a header node */
void Delete(ElementType X, List L) {
	Position P, TmpCell;
	P = FindPrevious(X, L);
	if (!IsLast(P, L)) {
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		free(TmpCell);
	}
}

/* If x is found, then Next field of returned */
/* Position if NULL */
/* Assumes a header */
Position FindPrevious(ElementType X, List L) {
	Position P;
	P = L;
	while (P->Next != NULL && P->Next->Element != X) {
		P = P->Next;
	}
	return P;
}

/* Insert (after legal position P) */
/* Header implemenation assumed */

void Insert(ElementType X, List L, Position P) {
	Position TmpCell;
	TmpCell = (struct Node *)malloc(sizeof(struct Node));
	if (TmpCell == NULL) {
		printf("Out of space!!!");
		return;
	}
	TmpCell->Element = X;
	TmpCell->Next = P->Next;
	P->Next = TmpCell;
}

/* Correct DeleteList algorithm */
void DeleteList(List L) {
	Position P, Tmp;
	P = L->Next;	/* Header assumed */
	L->Next = NULL; /* Header node */
	while (P != NULL) {
		Tmp = P;
		P = P->Next;
		free(Tmp);
	}
	free(L); /* Free the header node */
}
