#include "dominios.h"
#include <iostream>
//Usuário
void Nome::validar(string nome){
    int nomePermitido = nome.size();
    if (nomePermitido < LIMITEMINIMO || nomePermitido > LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
}

void Email::validar(string email){
    int emailPermitido = email.size();
    if (emailPermitido > LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Email::setEmail(string email){
    validar(email);
    this->email = email;
}

void Senha::validar(string senha){
    int senhaPermitido = senha.size();
    if (senhaPermitido != LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
}

void Telefone::validar(string telefone){
    int telefonePermitido = telefone.size();
    if (telefonePermitido != LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Telefone::setTelefone(string telefone){
    validar(telefone);
    this->telefone = telefone;
}

//Imóvel
void CodigoImovel::validar(string codigoImovel){
    int codigoImovelPermitido = codigoImovel.size();
    if (codigoImovelPermitido > LIMITEMAXIMO || codigoImovel==LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void CodigoImovel::setCodigoImovel(string codigoImovel){
    validar(codigoImovel);
    this->codigoImovel = codigoImovel;
}

void Classe::validar(int classe){
    if (classe > LIMITEMAXIMO || classe < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void Classe::setClasse(int classe){
    validar(classe);
    this->classe = classe;
}

void Descricao::validar(string descricao){
    int descricaoPermitido = descricao.size();
    if (descricaoPermitido > LIMITEMAXIMO || descricaoPermitido < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void Descricao::setDescricao(string descricao){
    validar(descricao);
    this->descricao = descricao;
}

void Endereco::validar(string endereco){
    int enderecoPermitido = endereco.size();
    if (enderecoPermitido > LIMITEMAXIMO || enderecoPermitido < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void Endereco::setEndereco(string endereco){
    validar(endereco);
    this->endereco = endereco;
}

void DataInicialImovel::validar(int dataInicialImovel){
    if (dataInicialImovel > LIMITEMAXIMO || dataInicialImovel < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void DataInicialImovel::setDataInicialImovel(int dataInicialImovel){
    validar(dataInicialImovel);
    this->dataInicialImovel = dataInicialImovel;
}

void DataFinalImovel::validar(int dataFinalImovel){
    if (dataFinalImovel > LIMITEMAXIMO || dataFinalImovel < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void DataFinalImovel::setDataFinalImovel(int dataFinalImovel){
    validar(dataFinalImovel);
    this->dataFinalImovel = dataFinalImovel;
}

void NumeroImovel::validar(int hospedesImovel){
    if (hospedesImovel > LIMITEMAXIMO || hospedesImovel < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void NumeroImovel::setHospedesImovel(int hospedesImovel){
    validar(hospedesImovel);
    this->hospedesImovel = hospedesImovel;
}

void MoedaImovel::validar(double valorImovel){
    if (valorImovel > LIMITEMAXIMO || valorImovel < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void MoedaImovel::setValorImovel(double valorImovel){
    validar(valorImovel);
    this->valorImovel = valorImovel;
}

//PROPOSTA
void CodigoProposta::validar(string codigoProposta){
    int codigoPropostaPermitido = codigoProposta.size();
    if (codigoPropostaPermitido > LIMITEMAXIMO || codigoProposta==LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void CodigoProposta::setCodigoProposta(string codigoProposta){
    validar(codigoProposta);
    this->codigoProposta = codigoProposta;
}

void DataInicialProposta::validar(int dataInicialProposta){
    if (dataInicialProposta > LIMITEMAXIMO || dataInicialProposta < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void DataInicialProposta::setDataInicialProposta(int dataInicialProposta){
    validar(dataInicialProposta);
    this->dataInicialProposta = dataInicialProposta;
}

void DataFinalProposta::validar(int dataFinalProposta){
    if (dataFinalProposta > LIMITEMAXIMO || dataFinalProposta < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void DataFinalProposta::setDataFinalProposta(int dataFinalProposta){
    validar(dataFinalProposta);
    this->dataFinalProposta = dataFinalProposta;
}

void NumeroProposta::validar(int hospedesProposta){
    if (hospedesProposta > LIMITEMAXIMO || hospedesProposta < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void NumeroProposta::setHospedesProposta(int hospedesProposta){
    validar(hospedesProposta);
    this->hospedesProposta = hospedesProposta;
}

void MoedaProposta::validar(double valorProposta){
    if (valorProposta > LIMITEMAXIMO || valorProposta < LIMITEMINIMO)
        throw invalid_argument("Argumento invalido.");
}
void MoedaProposta::setValorProposta(double valorProposta){
    validar(valorProposta);
    this->valorProposta = valorProposta;
}
