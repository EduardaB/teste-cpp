#include <iostream>

using namespace std;

int main()
{
    int valC;
    double tm;

    // Pt. 1: cabecalho
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ÚLTIMO ANO" << endl;

    // Pt. 2: leitura do volume
    cout << endl << "Quantas compras o cliente fez no último ano? ";
    cin >> valC;
    cout << "Qual o ticket médio? ";
    cin >> tm;
    return 0;
}
