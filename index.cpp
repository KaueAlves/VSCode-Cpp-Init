#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){

    //Array de Chave(Primeiro Elemento), Valor(Segundo Elemento)
    map<int,string> map{{1,"k"},{1,"a"}};
    
    //Par de dados
    pair<int,int> par{1,2};
    
    //Vetor simples
    vector<int> vet1{21,31,41,76};

    //Matriz | Vetor de Vetor
    vector<vector<int>> vet{{5,7,9,4,5,6},{21,31,41,76}};

    //Criando Funções lambdas 
    //Imprimir Valores de um vetor
    auto imprimirVector = [vet1](){
        for(auto&& i : vet1)
            {
                cout << i << ",";
            }
        cout << endl;
    };
    
    //Imprimir uma Matriz Vector
    auto imprimirMatrizVector = [vet](){
        for(auto&& i : vet)
        {
            for(auto&& j : i)
            {
                cout << j;
            }
            cout << endl;
        }
    };
    

    //Chamando funções Lambdas
    imprimirMatrizVector();
    imprimirVector();
    
    system("pause");
}