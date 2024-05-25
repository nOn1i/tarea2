#include <iostream>
using namespace std;

class super_string {
    private:
        struct nodo{
            nodo *left = nullptr, *right = nullptr;
            int index;
            char c;
            nodo(int index, char c) {}
            nodo() {}
        };
        int height = 0; //altura del arbol
        int lenght = 0; //largo del super-string
        nodo* root = nullptr; //raiz del super-string
    public:
        super_string() {}
        void juntar(super_string &s);
        void agregar(char c){
            
        }; //insertar un caracter en la ultima posicion
        // en la izquierda esta el super_string a y en la derecha el super_string b
        void separar(int i, super_string &a, super_string &b);
        void reverso(){

        };// no debe cambiar la altura del arbol
        int recortar();// retorna this->height despues de recortar
        string stringizar(); // debe ser O(n)
        void limpiar(); // se deben borrar todos los nodos del super-string
};


int main(){
    
    return 0;
}