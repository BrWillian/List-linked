#ifndef LISTA_H
#define LISTA_H
#include <node.h>

class Lista
{
    Node *head;
public:
    Lista();
    bool insere(int *dat);
    bool remove(int *dat, int key);
    bool search(int *d, int key);
};

#endif // LISTA_H
