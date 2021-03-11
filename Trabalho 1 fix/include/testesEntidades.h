#ifndef TESTESENTIDADES_H_INCLUDED
#define TESTESENTIDADES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;
//Usu�rio
class TUUsuario {
    private:
        string VALOR_VALIDO_NOME = "Manolo";
        string VALOR_VALIDO_EMAIL = "manolo@email";
        string VALOR_VALIDO_SENHA = "AAaa98";
        string VALOR_VALIDO_TELEFONE = "111111111111";
        Usuario *entidade;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioNome();
        void testarCenarioEmail();
        void testarCenarioSenha();
        void testarCenarioTelefone();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

//Im�vel
class TUImovel {
    private:
        string VALOR_VALIDO_CODIGOIMOVEL = "11111";
        const static int VALOR_VALIDO_CLASSE = 2;
        string VALOR_VALIDO_DESCRICAO = "CASINHA.";
        string VALOR_VALIDO_ENDERECO = "ASB 98";
        const static int VALOR_VALIDO_DATAINICIALIMOVEL = 200628;
        const static int VALOR_VALIDO_DATAFINALIMOVEL = 200629;
        const static int VALOR_VALIDO_NUMEROIMOVEL = 5;
        double VALOR_VALIDO_MOEDAIMOVEL = 50.00;
        Imovel *entidade;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioCodigoImovel();
        void testarCenarioClasse();
        void testarCenarioDescricao();
        void testarCenarioEndereco();
        void testarCenarioDataInicialImovel();
        void testarCenarioDataFinalImovel();
        void testarCenarioNumeroImovel();
        void testarCenarioMoedaImovel();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

//PROPOSTA
class TUProposta {
    private:
        string VALOR_VALIDO_CODIGOPROPOSTA = "22222";
        const static int VALOR_VALIDO_DATAINICIALPROPOSTA = 210827;
        const static int VALOR_VALIDO_DATAFINALPROPOSTA = 200730;
        const static int VALOR_VALIDO_NUMEROPROPOSTA = 19;
        double VALOR_VALIDO_MOEDAPROPOSTA = 85.00;

        Proposta *entidade;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioCodigoProposta();
        void testarCenarioDataInicialProposta();
        void testarCenarioDataFinalProposta();
        void testarCenarioNumeroProposta();
        void testarCenarioMoedaProposta();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};
#endif // TESTESENTIDADES_H_INCLUDED
