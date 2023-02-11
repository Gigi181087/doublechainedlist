#include "doublyLinkedList.h"

void DLList_MoveBefore(knot_t* knot) {
    knot->prev->next = knot->next;
    knot->next = knot->prev;
    knot->prev = knot->next->prev;
    knot->next->prev = knot;

    return;
}

void DLList_MoveAfter(knot_t* knot) {
    knot->next->prev = knot->prev;
    knot->prev = knot->next;
    knot->next = knot->prev->next;
    knot->prev->next = knot;

    return;
}

void DLList_MoveToIndex(knot* knot, int index) {

    return;
}

void DLList_Internal_SwitchNodes(node_t* node1, node_t* node2) {
    node_t buff;
    node1->prev->next = &buff;
    node1->next->prev = &buff;
    buff.next = node1->next;
    buff.prev = node1->prev;

    node2->prev->next = node1;
    node2->next->prev = node1;
    node1->prev = node2->prev;
    node1->next = node2->next;

    node2->prev = buff.prev;
    node2->next = buff.next;
    node2->prev->next = ndoe2;
    node2->next->prev = node2;

    return;
}