#include "testesEntidades.h"

using namespace std;

//USU�RIO
void TUUsuario::setUp(){
    entidade = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete entidade;
}

void TUUsuario::testarCenarioNome(){
    Nome valor;
    valor.setNome(VALOR_VALIDO_NOME);
    entidade->setNome(valor);
    if (entidade->getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;
}

void TUUsuario::testarCenarioEmail(){
    Email valor;
    valor.setEmail(VALOR_VALIDO_EMAIL);
    entidade->setEmail(valor);
    if (entidade->getEmail().getEmail() != VALOR_VALIDO_EMAIL)
        estado = FALHA;
}

void TUUsuario::testarCenarioSenha(){
    Senha valor;
    valor.setSenha(VALOR_VALIDO_SENHA);
    entidade->setSenha(valor);
    if (entidade->getSenha().getSenha() != VALOR_VALIDO_SENHA)
        estado = FALHA;
}

void TUUsuario::testarCenarioTelefone(){
    Telefone valor;
    valor.setTelefone(VALOR_VALIDO_TELEFONE);
    entidade->setTelefone(valor);
    if (entidade->getTelefone().getTelefone() != VALOR_VALIDO_TELEFONE)
        estado = FALHA;
}

int TUUsuario::run(){
  setUp();
  testarCenarioNome();
  testarCenarioEmail();
  testarCenarioSenha();
  testarCenarioTelefone();
  tearDown();
  return estado;
}

//Im�vel
void TUImovel::setUp(){
    entidade = new Imovel();
    estado = SUCESSO;
}

void TUImovel::tearDown(){
    delete entidade;
}

void TUImovel::testarCenarioCodigoImovel(){
    CodigoImovel valor;
    valor.setCodigoImovel(VALOR_VALIDO_CODIGOIMOVEL);
    entidade->setCodigoImovel(valor);
    if (entidade->getCodigoImovel().getCodigoImovel() != VALOR_VALIDO_CODIGOIMOVEL)
        estado = FALHA;
}

void TUImovel::testarCenarioClasse(){
    Classe valor;
    valor.setClasse(VALOR_VALIDO_CLASSE);
    entidade->setClasse(valor);
    if (entidade->getClasse().getClasse() != VALOR_VALIDO_CLASSE)
        estado = FALHA;
}

void TUImovel::testarCenarioDescricao(){
    Descricao valor;
    valor.setDescricao(VALOR_VALIDO_DESCRICAO);
    entidade->setDescricao(valor);
    if (entidade->getDescricao().getDescricao() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;
}

void TUImovel::testarCenarioEndereco(){
    Endereco valor;
    valor.setEndereco(VALOR_VALIDO_ENDERECO);
    entidade->setEndereco(valor);
    if (entidade->getEndereco().getEndereco() != VALOR_VALIDO_ENDERECO)
        estado = FALHA;
}

void TUImovel::testarCenarioDataInicialImovel(){
    DataInicialImovel valor;
    valor.setDataInicialImovel(VALOR_VALIDO_DATAINICIALIMOVEL);
    entidade->setDataInicialImovel(valor);
    if (entidade->getDataInicialImovel().getDataInicialImovel() != VALOR_VALIDO_DATAINICIALIMOVEL)
        estado = FALHA;
}

void TUImovel::testarCenarioDataFinalImovel(){
    DataFinalImovel valor;
    valor.setDataFinalImovel(VALOR_VALIDO_DATAFINALIMOVEL);
    entidade->setDataFinalImovel(valor);
    if (entidade->getDataFinalImovel().getDataFinalImovel() != VALOR_VALIDO_DATAFINALIMOVEL)
        estado = FALHA;
}

void TUImovel::testarCenarioNumeroImovel(){
    NumeroImovel valor;
    valor.setHospedesImovel(VALOR_VALIDO_NUMEROIMOVEL);
    entidade->setHospedesImovel(valor);
    if (entidade->getHospedesImovel().getHospedesImovel() != VALOR_VALIDO_NUMEROIMOVEL)
        estado = FALHA;
}

void TUImovel::testarCenarioMoedaImovel(){
    MoedaImovel valor;
    valor.setValorImovel(VALOR_VALIDO_MOEDAIMOVEL);
    entidade->setValorImovel(valor);
    if (entidade->getValorImovel().getValorImovel() != VALOR_VALIDO_MOEDAIMOVEL)
        estado = FALHA;
}

int TUImovel::run(){
  setUp();
  testarCenarioCodigoImovel();
  testarCenarioClasse();
  testarCenarioDescricao();
  testarCenarioEndereco();
  testarCenarioDataInicialImovel();
  testarCenarioDataFinalImovel();
  testarCenarioNumeroImovel();
  testarCenarioMoedaImovel();
  tearDown();
  return estado;
}

//PROPOSTA
void TUProposta::setUp(){
    entidade = new Proposta();
    estado = SUCESSO;
}

void TUProposta::testarCenarioCodigoProposta(){
    CodigoProposta valor;
    valor.setCodigoProposta(VALOR_VALIDO_CODIGOPROPOSTA);
    entidade->setCodigoProposta(valor);
    if (entidade->getCodigoProposta().getCodigoProposta() != VALOR_VALIDO_CODIGOPROPOSTA)
        estado = FALHA;
}

void TUProposta::testarCenarioDataInicialProposta(){
    DataInicialProposta valor;
    valor.setDataInicialProposta(VALOR_VALIDO_DATAINICIALPROPOSTA);
    entidade->setDataInicialProposta(valor);
    if (entidade->getDataInicialProposta().getDataInicialProposta() != VALOR_VALIDO_DATAINICIALPROPOSTA)
        estado = FALHA;
}

void TUProposta::testarCenarioDataFinalProposta(){
    DataFinalProposta valor;
    valor.setDataFinalProposta(VALOR_VALIDO_DATAFINALPROPOSTA);
    entidade->setDataFinalProposta(valor);
    if (entidade->getDataFinalProposta().getDataFinalProposta() != VALOR_VALIDO_DATAFINALPROPOSTA)
        estado = FALHA;
}

void TUProposta::testarCenarioNumeroProposta(){
    NumeroProposta valor;
    valor.setHospedesProposta(VALOR_VALIDO_NUMEROPROPOSTA);
    entidade->setHospedesProposta(valor);
    if (entidade->getHospedesProposta().getHospedesProposta() != VALOR_VALIDO_NUMEROPROPOSTA)
        estado = FALHA;
}

void TUProposta::testarCenarioMoedaProposta(){
    MoedaProposta valor;
    valor.setValorProposta(VALOR_VALIDO_MOEDAPROPOSTA);
    entidade->setValorProposta(valor);
    if (entidade->getValorProposta().getValorProposta() != VALOR_VALIDO_MOEDAPROPOSTA)
        estado = FALHA;
}


void TUProposta::tearDown(){
    delete entidade;
}

int TUProposta::run(){
  setUp();
  testarCenarioCodigoProposta();
  testarCenarioDataInicialProposta();
  testarCenarioDataFinalProposta();
  testarCenarioNumeroProposta();
  testarCenarioMoedaProposta();
  tearDown();
  return estado;
}
