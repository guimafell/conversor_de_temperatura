#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
    //Declaração de variáveis
    double TEMP,CONV_TEMP;
    int i;

start://<== declaração de um ponto de partida

    //Entrada de dados
    system("CLS");
    cout << "Digite a temperatura que tu deseja converter: ";
    cin >> TEMP;
    system("cls");
    block://<== declaração de um ponto de partida
    cout << "Para qual escala tu deseja converter\n\t 1 - C para F\n\t 2 - F para K\n\t 3 - K para C\n\t 4 - F para C\n\t 5 - K para F\n\t 6 - C para K\n\n";
    cin >> i;
    //processamento de dados
    switch (i)
    {
    case 1:
        CONV_TEMP = (TEMP * 9 / 5) + 32;
        break;
    case 2:
        CONV_TEMP = (TEMP - 32) * 5 / 9 + 273.15;
        break;
    case 3:
        CONV_TEMP = TEMP - 273.15;
        break;
    case 4:
        CONV_TEMP = (TEMP - 32) * 5 / 9;
        break;
    case 5:
        CONV_TEMP = (TEMP - 273.15) *9/5+32;
        break;
    case 6:
        CONV_TEMP = TEMP - 273.15;
        break;
    default:
        system("CLS");
        cout << "Coloque uma opçao valida";
        goto block;//<== declaração para a ida ao ponto de partida block
        break;
    }
    //Saídas de informações
    system("cls");
    cout << "o Resultado da sua conversao e: " << CONV_TEMP << endl;
    cout << "deseja refazer? \n\t 1 - Sim \n\t 2 - Nao\n";
    cin >> i;
    if (i == 1)
    {
        goto start;//<== declaração para a ida ao ponto de partida start
    }
    else
    {
        system("CLS");
        cout << "Ate a proxima"<<endl;
        system("pause");
    }
}