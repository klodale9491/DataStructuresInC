//
// Created by Alessio on 16/12/2018.
//

#ifndef DATASTRUCTURESINC_LIST_H
#define DATASTRUCTURESINC_LIST_H
#endif //DATASTRUCTURESINC_LIST_H


/*
 * Definizione del nodo della lista
 * */
typedef struct listnode{
    int value;
    struct ListNode *next;
} ListNode;


/*
 * Definizione della funzioni della lista
 * */


/*
 * Inizializzazione della lista
 * */
ListNode *init_list();

/*
 * Inserimento di un elemento in testa
 * */
ListNode *insertHeadNode(ListNode *head, int value);


/*
 * Cancellazione di un elemento in testa
 * */
ListNode *deleteHeadNode(ListNode *head);


/*
 * Inserimento di un elemento in coda
 * */
ListNode *insertTailNode(ListNode *head, int value);


/*
 * Cancellazione di un elemento in coda
 * */
ListNode *deleteTailNode(ListNode *head);


/*
 * Definizione della funzioni della pila
 * */


/*
 * Inserisce un elemento in testa
 * */
ListNode *push(ListNode *head);


/*
 * Cancella un elemento in testa
 * */
ListNode *pop(ListNode *head);
