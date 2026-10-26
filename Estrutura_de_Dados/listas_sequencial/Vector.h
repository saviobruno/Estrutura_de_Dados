#ifndef VECTOR_H
#define VECTOR_H
#include <stdexcept>

class Vector{
    private:
       int* m_list; //ponteiro pra lista de inteiros
       int m_size; // numeros da lista
       int m_capacity; //capacidade da lista

    public:
    //construtor default: cria uma lista vazia com
    //capacidade inicial para 16 elementos
       Vector(){
        m_size = 0;
        m_capacity = 16;
        m_list = new int[m_capacity];
       }
      
       //construtor de cópia
       Vector(const Vector& v){
          m_size = v.m_size;
          m_capacity = v.m_capacity;
          m_list = new int[m_capacity];
          for(int i=0; i<m_size; i++){
            m_list[i] = v.m_list[i];
          }
       }

    //destrutor: libera a memória

    ~Vector(){
        delete[] m_list;
    }

    //retornar o tamanho da lista
    int size(){
       return m_size;
    }

    //retorna a capacidade da lista
    int capacity(){
       return m_capacity;
    }

    //retorna true se somente se a lista esta vazia
    bool empty(){
       return m_size == 0;
    }
    
    //funcao que recebe um indice k e retorna o elemento
    //que esta na posicao k da lista
    //essa funcao checa se o indice é válido
    // se não for, ela lança uma exceção do tipo 'out_of_range'
    int& at(int k){
        if(k>=0 && k <= m_size-1){
            return m_list[k];
        }else{
          throw std::out_of_range("indice invalido");
        }
    }
    //solicita que a capacidade seja >=n
    //se n for maior que a capacidade atual, a funcao faz
    //com que a lista aumente sua capacidade
    //realocando os elemnetos para o novo vetor.
    //em todos os outros casos, a chamada da função
    //não causa uma realocação e a capacidade do vetor não é afetada;
    //comlexidade: 0(n)
    void reserve(int n){
       if(n > m_capacity){
          int* aux = new int[n];
          for(int i=0; i<m_size; i++){
            aux[i] = m_list[i];
          }
          delete[] m_list;
          m_list = aux;
          m_capacity = n;
       }
    }

    //recebe um inteiro como argumento e o adiciona
    //logo apos o ultimo elemento da lista
    void push_back(int value){
        //caso 1: lista cheia
        if(m_size==m_capacity){
            reserve(2*m_capacity);
            m_list[m_size] = value;
        }
        m_list[m_size] = value;
        m_size++;
    }
    //sobrecerga de operador de atrinuição
    //essa fução recebe o indice e retorna uma
    //referência para a posição respectiva no array.  
    //se o indice for inválido, o comportamento é indefinido.
    int& operator[](int index){
         return m_list[index];
    }

    //versão const do operdord de atribuição
    const int& operator[](int index) const{
         return m_list[index];
    }

    void removeAt(int k){
         if(k>=0 && k<=m_size-1){
            for(int i=0; i<m_size-1; i++){
               m_list[i] = m_list[i+1];
            }
            m_size--;
      }else{
          throw std::out_of_range("indice invalido");
      }
    }

    bool insert(int value, int k){
      if(k>=0 && k<=m_size-1){
           for(int i=0; i<m_size-1; i++){
               m_list[i] = m_list[i-1];
            }

            m_list[k] = value;
      }else{
          throw std::out_of_range("indice invalido");
      }
    }

    void removeAll(int value){
      int i = 0;
      while(i<m_size-1){
          if(m_list[i]==value){
            removeAt(i);
          }else{
             i++;
          }
      }
    }

};

#endif