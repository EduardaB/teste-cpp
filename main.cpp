#include <iostream>

using namespace std;

int main()
{
    int valC, at, pts, pts2, pts3, st;
    double tm;
    string tp, c;

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

    // Pt. 5: Scores inadimplencia e pagamento
    if(at>1 || tm==0)
    {
      pts2 = 0;
    }
    else if(tm!=0 && at==1)
    {
      pts2 = 15;
    }
    else if(tm!=0 && at==0)
    {
      pts2 = 30;
    }
    cout << endl << "Score de inadimplência = " << pts2 << " pontos" << endl;
    if(tm!=0 && tp=="D")
    {
      pts3 = 5;
    }
    else if(tm!=0 && (tp=="C" || tp=="B"))
    {
      pts3 = 10;
    }
    cout << "Score de forma de pagamento = " << pts3 << " pontos" << endl;

    // Pt. 6: final
    st = pts+pts2+pts3;

    if(st<=25)
    {
      c = "BRONZE";
    }
    else if(st>25 && st<=75)
    {
      c = "PRATA";
    }
    else if(st>75)
    {
      c = "OURO";
    }
    cout << endl << "Classificação final = CLIENTE " << c << endl;
    return 0;
}
