#include<iostream>
using namespace std;

int procurar(int *vet, int n, int v){
    for (int i=0; i<n; i++)
        if (vet[i]==v)
            return i;
    if(vet[n-1]!=v)
        return -1;
}

int main(){
    int n;
    cout<<"Digite o numero de elementos do vetor: "<<endl;
    cin>>n;
    int vt[n];
    cout<<"Digite os elementos do vetor: "<<endl;
    for(int k=0; k<n;k++)
        cin>>vt[k];
    int v;
    cout<<"Digite o elemento a ser procurado: ";
    cin>>v;
    if (procurar(vt,n,v)>=0)
        cout<<"Elemento se encontra no indice: "<<procurar(vt,n,v)<<endl;
    else
        cout<<"Elemento nao encontrado!"<<endl;
    return 0;
}
//Complexidade: Linear