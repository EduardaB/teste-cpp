#include <iostream>

using namespace std;

int main()
{
    int valC, at;
    double tm;
    string tp;

    // Pt. 1: cabecalho
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO �LTIMO ANO" << endl;

    // Pt. 2: leitura do volume
    cout << endl << "Quantas compras o cliente fez no �ltimo ano? ";
    cin >> valC;
    cout << "Qual o ticket m�dio? ";
    cin >> tm;

    //Pt. 3: leitura dos outros dados
    cout << endl << "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> at;
    cout << "A maioria das compras foi em dinheiro, cart�o, ou boleto (D/C/B)? ";
    cin >> tp;
    return 0;
}
