#include <iostream>
#include <lista.h>

using namespace std;

int main()
{
    Lista list;

    int elemento = 20, elemento2 = 14, elemento3 = 15;

    int k;

    cout<<list.insere(&elemento);
    cout<<list.insere(&elemento2);
    cout<<list.insere(&elemento3);

    cout<<list.search(&k, 20);

    cout<<k;

    cout<<list.remove(&k, 14);

    cout<<k;


}
