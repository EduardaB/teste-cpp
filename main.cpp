#include <iostream>

using namespace std;

int main()
{
    int valC, at, pts;
    double tm;
    string tp;

    // Pt. 1: cabecalho
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ÚLTIMO ANO" << endl;

    // Pt. 2: leitura do volume
    cout << endl << "Quantas compras o cliente fez no último ano? ";
    cin >> valC;
    cout << "Qual o ticket médio? ";
    cin >> tm;

    //Pt. 3: leitura dos outros dados
    cout << endl << "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> at;
    cout << "A maioria das compras foi em dinheiro, cartão, ou boleto (D/C/B)? ";
    cin >> tp;

    //Pt.4: Score volume
    if(tm==0)
    {
      pts = 0;
    }
    if(valC<=3000 && tm<=2)
    {
      pts = 20;
    }
    else if(valC<=3000 && tm>2)
    {
      pts = 40;
    else if(valC>3000)
    {
    pts = 60;
    }
    cout << endl << "Score de volume de compras = " << pts << " pontos" << endl;
    return 0;
}
