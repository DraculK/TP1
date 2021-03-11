#include "testes.h"
//Usuário***********************
void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}
void TUNome::tearDown(){
    delete nome;
}
void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}
void TUEmail::tearDown(){
    delete email;
}
void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}
void TUSenha::tearDown(){
    delete senha;
}
void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUTelefone::setUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}
void TUTelefone::tearDown(){
    delete telefone;
}
void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setTelefone(VALOR_VALIDO);
        if (telefone->getTelefone() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setTelefone(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (telefone->getTelefone() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Imóvel***********************
void TUCodigoImovel::setUp(){
    codigoImovel = new CodigoImovel();
    estado = SUCESSO;
}
void TUCodigoImovel::tearDown(){
    delete codigoImovel;
}
void TUCodigoImovel::testarCenarioSucesso(){
    try{
        codigoImovel->setCodigoImovel(VALOR_VALIDO);
        if (codigoImovel->getCodigoImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigoImovel::testarCenarioFalha(){
    try{
        codigoImovel->setCodigoImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigoImovel->getCodigoImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCodigoImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}
void TUClasse::tearDown(){
    delete classe;
}
void TUClasse::testarCenarioSucesso(){
    try{
        classe->setClasse(VALOR_VALIDO);
        if (classe->getClasse() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUClasse::testarCenarioFalha(){
    try{
        classe->setClasse(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (classe->getClasse() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
}
void TUDescricao::tearDown(){
    delete descricao;
}
void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDescricao(VALOR_VALIDO);
        if (descricao->getDescricao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setDescricao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (descricao->getDescricao() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}
void TUEndereco::tearDown(){
    delete endereco;
}
void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (endereco->getEndereco() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDataInicialImovel::setUp(){
    dataInicialImovel = new DataInicialImovel();
    estado = SUCESSO;
}
void TUDataInicialImovel::tearDown(){
    delete dataInicialImovel;
}
void TUDataInicialImovel::testarCenarioSucesso(){
    try{
        dataInicialImovel->setDataInicialImovel(VALOR_VALIDO);
        if (dataInicialImovel->getDataInicialImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDataInicialImovel::testarCenarioFalha(){
    try{
        dataInicialImovel->setDataInicialImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (dataInicialImovel->getDataInicialImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDataInicialImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDataFinalImovel::setUp(){
    dataFinalImovel = new DataFinalImovel();
    estado = SUCESSO;
}
void TUDataFinalImovel::tearDown(){
    delete dataFinalImovel;
}
void TUDataFinalImovel::testarCenarioSucesso(){
    try{
        dataFinalImovel->setDataFinalImovel(VALOR_VALIDO);
        if (dataFinalImovel->getDataFinalImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDataFinalImovel::testarCenarioFalha(){
    try{
        dataFinalImovel->setDataFinalImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (dataFinalImovel->getDataFinalImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDataFinalImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNumeroImovel::setUp(){
    hospedesImovel = new NumeroImovel();
    estado = SUCESSO;
}
void TUNumeroImovel::tearDown(){
    delete hospedesImovel;
}
void TUNumeroImovel::testarCenarioSucesso(){
    try{
        hospedesImovel->setHospedesImovel(VALOR_VALIDO);
        if (hospedesImovel->getHospedesImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUNumeroImovel::testarCenarioFalha(){
    try{
        hospedesImovel->setHospedesImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (hospedesImovel->getHospedesImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUNumeroImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUMoedaImovel::setUp(){
    valorImovel = new MoedaImovel();
    estado = SUCESSO;
}
void TUMoedaImovel::tearDown(){
    delete valorImovel;
}
void TUMoedaImovel::testarCenarioSucesso(){
    try{
        valorImovel->setValorImovel(VALOR_VALIDO);
        if (valorImovel->getValorImovel() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUMoedaImovel::testarCenarioFalha(){
    try{
        valorImovel->setValorImovel(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (valorImovel->getValorImovel() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUMoedaImovel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//Proposta***********************
void TUCodigoProposta::setUp(){
    codigoProposta = new CodigoProposta();
    estado = SUCESSO;
}
void TUCodigoProposta::tearDown(){
    delete codigoProposta;
}
void TUCodigoProposta::testarCenarioSucesso(){
    try{
        codigoProposta->setCodigoProposta(VALOR_VALIDO);
        if (codigoProposta->getCodigoProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigoProposta::testarCenarioFalha(){
    try{
        codigoProposta->setCodigoProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigoProposta->getCodigoProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCodigoProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDataInicialProposta::setUp(){
    dataInicialProposta = new DataInicialProposta();
    estado = SUCESSO;
}
void TUDataInicialProposta::tearDown(){
    delete dataInicialProposta;
}
void TUDataInicialProposta::testarCenarioSucesso(){
    try{
        dataInicialProposta->setDataInicialProposta(VALOR_VALIDO);
        if (dataInicialProposta->getDataInicialProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDataInicialProposta::testarCenarioFalha(){
    try{
        dataInicialProposta->setDataInicialProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (dataInicialProposta->getDataInicialProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDataInicialProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDataFinalProposta::setUp(){
    dataFinalProposta = new DataFinalProposta();
    estado = SUCESSO;
}
void TUDataFinalProposta::tearDown(){
    delete dataFinalProposta;
}
void TUDataFinalProposta::testarCenarioSucesso(){
    try{
        dataFinalProposta->setDataFinalProposta(VALOR_VALIDO);
        if (dataFinalProposta->getDataFinalProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUDataFinalProposta::testarCenarioFalha(){
    try{
        dataFinalProposta->setDataFinalProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (dataFinalProposta->getDataFinalProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUDataFinalProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNumeroProposta::setUp(){
    hospedesProposta = new NumeroProposta();
    estado = SUCESSO;
}
void TUNumeroProposta::tearDown(){
    delete hospedesProposta;
}
void TUNumeroProposta::testarCenarioSucesso(){
    try{
        hospedesProposta->setHospedesProposta(VALOR_VALIDO);
        if (hospedesProposta->getHospedesProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUNumeroProposta::testarCenarioFalha(){
    try{
        hospedesProposta->setHospedesProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (hospedesProposta->getHospedesProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUNumeroProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUMoedaProposta::setUp(){
    valorProposta = new MoedaProposta();
    estado = SUCESSO;
}
void TUMoedaProposta::tearDown(){
    delete valorProposta;
}
void TUMoedaProposta::testarCenarioSucesso(){
    try{
        valorProposta->setValorProposta(VALOR_VALIDO);
        if (valorProposta->getValorProposta() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUMoedaProposta::testarCenarioFalha(){
    try{
        valorProposta->setValorProposta(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (valorProposta->getValorProposta() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUMoedaProposta::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
