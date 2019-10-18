#ifndef NODE_H
#define NODE_H


class Node
{
private:
    int D;
public:
    Node();
    Node *next;
    static Node *MontaNo(int *dat);
    static void DesmontaNo(int *dat, Node *p);
    void SetNext(Node *p);
    Node GetNext();
    int GetD();

};

#endif // NODE_H
