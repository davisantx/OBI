// código feito por davisantx

#include<iostream>
#include<vector>

using namespace std;

int calcular(int numeroDeMeses, int valorPadraoDaQuota, std::vector<int> quotaEmCadaMes, int quantidadeDeMegabytesDisponivelNoProximoMes) {
    if(((valorPadraoDaQuota && numeroDeMeses) >= 1 && (valorPadraoDaQuota && numeroDeMeses) <= 100)) {
        for(int i = 0; i < numeroDeMeses; ++i) {
        cout << "Quantidade de megabytes utilizados no mes " << i + 1 << ": ";
        cin >> quotaEmCadaMes[i];

        if(quotaEmCadaMes[i] <= valorPadraoDaQuota) {
          quantidadeDeMegabytesDisponivelNoProximoMes += valorPadraoDaQuota - quotaEmCadaMes[i];
        }else {
          quantidadeDeMegabytesDisponivelNoProximoMes -= quotaEmCadaMes[i] - valorPadraoDaQuota;
        }
      }
      
      cout << "\n\n" << "Quantidade de megabytes que joao tem para usar no mes " << numeroDeMeses + 1 << ": \n\n";
      return quantidadeDeMegabytesDisponivelNoProximoMes;
  }else {
    cout << "Valor da quota mensal, ou numeros de meses invalido!";
  }
}
    

int main() {
    
    unsigned valorPadraoDaQuota = 0;
    unsigned numeroDeMeses = 0;
    int quantidadeDeMegabytesDisponivelNoProximoMes = 0;
    
    cout << "Insira o valor padrao da quota em megabytes por mes: ";
    cin >> valorPadraoDaQuota;
    cout << "Insira o numero de meses: ";
    cin >> numeroDeMeses;

    std::vector<int> quotaEmCadaMes (numeroDeMeses);

    cout << calcular(numeroDeMeses, valorPadraoDaQuota, quotaEmCadaMes, quantidadeDeMegabytesDisponivelNoProximoMes);
    return 0;
}