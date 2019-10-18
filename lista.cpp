#include "lista.h"

Lista::Lista()
{
    head = nullptr;
}
bool Lista::insere(int *dat)
{
    Node *p = Node::MontaNo(dat);

    if(p)
    {
        p->SetNext(head);
        head = p;
        return true;
    }
    return false;
}
bool Lista::remove(int *dat, int key)
{
    Node **p = &head;

    while(*p && ((*p)->GetD()) != key)
    {
        p = &(*p)->next;
    }
    if(!(*p))
    {
        return false;
    }
    Node *aux = *p;
    *p = aux->next;
    Node::DesmontaNo(dat, aux);
    return true;
}
bool Lista::search(int *d, int key)
{
    Node *p = head;

    while(p && p->GetD() != key)
    {
        p = p->next;
    }
    if(p)
    {
        *d = p->GetD();
        return true;
    }
    return false;
}
