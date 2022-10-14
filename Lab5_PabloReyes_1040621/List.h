#pragma once


class Lista
{
    struct Node
    {
        int data;
        Node* next;
    };


private:

    //apunta al primer nodo de la lista
    Node* header = nullptr;


public:
    //Agregar elemento al Final
    void Add(int item);

    //Elimina todos los elementos
    void Clear();

    //Cuenta la cantidad de elementos
    int Count();

    //Verifica si el elemento se encuentra
    bool Contains(int item);

    //Obtiene el indice de la primer ocurrencia del elemento indicado
    int IndexOf(int item);

    //Inserta un elemento en una posición especifica
    void Insert(int index, int item);

    //Obtiene el valor del elemento en laposición indicada
    int GetItem(int index);

    //Cambia el elemtno en la posición indicada
    void SetItem(int index, int item);

    //Obtiene el indice de la última ocurrencia del elemento indicado
    int LastIndexOf(int item);

    //Elimina la primera ocurrencia del elemento
    void Remove(int item);

    //Elimina el elemento en la posicion indicada
    void RemoveAt(int index, int max);
};