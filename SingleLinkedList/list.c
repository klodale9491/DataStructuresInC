//
// Created by Alessio on 16/12/2018.
//
#include <stdlib.h>;


/*
 * Inizializzazione della lista
 * */
ListNode *init_list(){
    return NULL;
}


/*
 * Inserimento di un elemento in testa
 * */
ListNode *insertHeadNode(ListNode *head, int value){

    // STEP 1 : Creazione del nodo
    ListNode *node = (ListNode*)malloc(sizeof(ListNode));
    node->value = value;

    // STEP 2 : Aggancio del nuovo nodo
    node->next = head;
    head = node;

    // Torno la testa aggiornata
    return (ListNode*) head;
}


/*
 * Cancellazione di un elemento in testa
 * */
ListNode *deleteHeadNode(ListNode *head){
    if(head == NULL){
        return NULL;
    }
    else{
        ListNode *tmp = head;
        head = head->next;
        free(tmp);
    }
    return (ListNode*)head;
}


/*
 * Inserimento di un elemento in coda
 * */
ListNode *insertTailNode(ListNode *head, int value){

    // STEP 1 : Creazione del nodo
    ListNode *node = (ListNode*)malloc(sizeof(ListNode));
    node->value = value;
    node->next = NULL;

    // STEP 2 : Se la lista è vuota effettuo l'inserimento secco
    if(head == NULL){
        head = node;
    }
    else{
        // STEP 3 : Scorriamo la lista fino ad arrivare all'ultimo nod con un puntatore "tmp"
        ListNode *tmp = head;
    }

    // Torno la testa aggiornata
    return (ListNode*) head;
}


/*
 * Cancellazione di un elemento in testa
 * */
ListNode *deleteTailNode(ListNode *head){
    if(head == NULL){
        return NULL;
    }
    else if(head->next == NULL){
        tmp = head;
        head = head->next;
        free(tmp);
    }
    else{
        ListNode tmp1,tmp2;
        tmp1 = head;
        while(tmp1->next->next != NULL){
            tmp1 = tmp1->next;
        }
        tmp2 = tmp1->next;
        tmp1->next->next = NULL;
        free(tmp2);
    }
    return (ListNode *)head;
}



/*
 * Definizione della funzioni della pila
 * */


/*
 * Inserisce un elemento in testa
 * */
ListNode *push(ListNode *head, int value){
    return insertHeadNode(head, value);
}


/*
 * Cancella un elemento in testa
 * */
ListNode *pop(ListNode *head){
    return deleteHeadNode(head);
}