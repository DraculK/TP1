#include <iostream>

#include "dominios.h"
#include "testes.h"
#include "entidades.h"
#include "testesEntidades.h"

using namespace std;

int main()
{
    //Usuário
    TUUsuario testeUsuario;
    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO : cout << "SUCESSO - USUARIO" << endl;
            break;
        case TUUsuario::FALHA : cout << "FALHA - USUARIO" << endl;
            break;
    }

    TUNome testeNome;
    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME \n";
            break;
        case TUNome::FALHA  : cout << "FALHA - NOME \n";
            break;
    }

    TUEmail testeEmail;
    switch(testeEmail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL \n";
            break;
        case TUEmail::FALHA  : cout << "FALHA - EMAIL \n";
            break;
    }

    TUSenha testeSenha;
    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA \n";
            break;
        case TUSenha::FALHA  : cout << "FALHA - SENHA \n";
            break;
    }

    TUTelefone testeTelefone;
    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE \n";
            break;
        case TUTelefone::FALHA  : cout << "FALHA - TELEFONE \n";
            break;
    }

    //Imóvel
    TUImovel testeImovel;
    switch(testeImovel.run()){
        case TUImovel::SUCESSO : cout << "SUCESSO - IMOVEL" << endl;
            break;
        case TUImovel::FALHA : cout << "FALHA - IMOVEL" << endl;
            break;
    }
    TUCodigoImovel testeCodigoImovel;
    switch(testeCodigoImovel.run()){
        case TUCodigoImovel::SUCESSO: cout << "SUCESSO - CODIGO IMOVEL \n";
            break;
        case TUCodigoImovel::FALHA  : cout << "FALHA - CODIGO IMOVEL \n";
            break;
    }
    TUClasse testeClasse;
    switch(testeClasse.run()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE \n";
            break;
        case TUClasse::FALHA  : cout << "FALHA - CLASSE \n";
            break;
    }
    TUDescricao testeDescricao;
    switch(testeDescricao.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO \n";
            break;
        case TUDescricao::FALHA  : cout << "FALHA - DESCRICAO \n";
            break;
    }

    TUEndereco testeEndereco;
    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO \n";
            break;
        case TUEndereco::FALHA  : cout << "FALHA - ENDERECO \n";
            break;
    }

    TUDataInicialImovel testeDataInicialImovel;
    switch(testeDataInicialImovel.run()){
        case TUDataInicialImovel::SUCESSO: cout << "SUCESSO - DATA INICIAL IMOVEL \n";
            break;
        case TUDataInicialImovel::FALHA  : cout << "FALHA - DATA INICIAL IMOVEL \n";
            break;
    }

    TUDataFinalImovel testeDataFinalImovel;
    switch(testeDataFinalImovel.run()){
        case TUDataFinalImovel::SUCESSO: cout << "SUCESSO - DATA FINAL IMOVEL \n";
            break;
        case TUDataFinalImovel::FALHA  : cout << "FALHA - DATA FINAL IMOVEL \n";
            break;
    }

    TUNumeroImovel testeNumeroImovel;
    switch(testeNumeroImovel.run()){
        case TUNumeroImovel::SUCESSO: cout << "SUCESSO - HOSPEDES IMOVEL \n";
            break;
        case TUNumeroImovel::FALHA  : cout << "FALHA - HOSPEDES IMOVEL \n";
            break;
    }

    TUMoedaImovel testeMoedaImovel;
    switch(testeMoedaImovel.run()){
        case TUMoedaImovel::SUCESSO: cout << "SUCESSO - VALOR IMOVEL \n";
            break;
        case TUMoedaImovel::FALHA  : cout << "FALHA - VALOR IMOVEL \n";
            break;
    }

    //PROPOSTA
    TUProposta testeProposta;
    switch(testeProposta.run()){
        case TUProposta::SUCESSO : cout << "SUCESSO - PROPOSTA" << endl;
            break;
        case TUProposta::FALHA : cout << "FALHA - PROPOSTA" << endl;
            break;
    }
    TUCodigoProposta testeCodigoProposta;
    switch(testeCodigoProposta.run()){
        case TUCodigoProposta::SUCESSO: cout << "SUCESSO - CODIGO PROPOSTA \n";
            break;
        case TUCodigoProposta::FALHA  : cout << "FALHA - CODIGO PROPOSTA \n";
            break;
    }

    TUDataInicialProposta testeDataInicialProposta;
    switch(testeDataInicialProposta.run()){
        case TUDataInicialProposta::SUCESSO: cout << "SUCESSO - DATA INICIAL PROPOSTA \n";
            break;
        case TUDataInicialProposta::FALHA  : cout << "FALHA - DATA INICIAL PROPOSTA \n";
            break;
    }

    TUDataFinalProposta testeDataFinalProposta;
    switch(testeDataFinalProposta.run()){
        case TUDataFinalProposta::SUCESSO: cout << "SUCESSO - DATA FINAL PROPOSTA \n";
            break;
        case TUDataFinalProposta::FALHA  : cout << "FALHA - DATA FINAL PROPOSTA \n";
            break;
    }

    TUNumeroProposta testeNumeroProposta;
    switch(testeNumeroProposta.run()){
        case TUNumeroProposta::SUCESSO: cout << "SUCESSO - HOSPEDES PROPOSTA \n";
            break;
        case TUNumeroProposta::FALHA  : cout << "FALHA - HOSPEDES PROPOSTA \n";
            break;
    }

    TUMoedaProposta testeMoedaProposta;
    switch(testeMoedaProposta.run()){
        case TUMoedaProposta::SUCESSO: cout << "SUCESSO - VALOR PROPOSTA \n";
            break;
        case TUMoedaProposta::FALHA  : cout << "FALHA - VALOR PROPOSTA \n";
            break;
    }
    system("pause");
    return 0;
}
