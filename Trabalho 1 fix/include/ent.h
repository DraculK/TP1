#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

using namespace std;

///
///@brief Entidade para Usuário
///
class Usuario{
    private:
        Nome        nome;
        Email       email;
        Senha       senha;
        Telefone    telefone;
    public:
        //Declaração dos métodos setters e getters

///
///@brief Set para o atributo Nome
///
        void setNome(const Nome&);
///
///@brief Get para Nome
///
///@return Nome
///
        Nome getNome() const;

///
///@brief Set para o atributo Email
///
        void setEmail(const Email&);
///
///@brief Get para Email
///
///@return Email
///
        Email getEmail() const;

///
///@brief Set para o atributo Senha
///
        void setSenha(const Senha&);
///
///@brief Get para Senha
///
///@return Senha
///
        Senha getSenha() const;

///
///@brief Set para o atributo Telefone
///
        void setTelefone(const Telefone&);
///
///@brief Get para Telefone
///
///@return Telefone
///
        Telefone getTelefone() const;
};

///
///@brief método inline para SetNome
///
///@param nome
///
inline void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}
///
///@brief método inline para GetNome
///
///@return nome
///
inline Nome Usuario::getNome() const{
    return nome;
}

///
///@brief método inline para SetEmail
///
///@param email
///
inline void Usuario::setEmail(const Email &email){
    this->email = email;
}
///
///@brief método inline para GetEmail
///
///@return email
///
inline Email Usuario::getEmail() const{
    return email;
}

///
///@brief método inline para SetSenha
///
///@param senha
///
inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}
///
///@brief método inline para GetSenha
///
///@return senha
///
inline Senha Usuario::getSenha() const{
    return senha;
}

///
///@brief método inline para SetTelefone
///
///@param telefone
///
inline void Usuario::setTelefone(const Telefone &telefone){
    this->telefone = telefone;
}
///
///@brief método inline para GetTelefone
///
///@return telefone
///
inline Telefone Usuario::getTelefone() const{
    return telefone;
}

///
///@brief Entidade para Usuário
///
class Imovel{
    private:
        //Domínio               //Nome domínio
        CodigoImovel            codigoImovel;
        Classe                  classe;
        Descricao               descricao;
        Endereco                endereco;
        DataInicialImovel       dataInicialImovel;
        DataFinalImovel         dataFinalImovel;
        NumeroImovel            hospedesImovel;
        MoedaImovel             valorImovel;
    public:
        //Declaração dos métodos setters e getters

///
///@brief Set para o atributo CodigoImovel
///
        void setCodigoImovel(const CodigoImovel&);
///
///@brief Get para CodigoImovel
///
///@return CodigoImovel
///
        CodigoImovel getCodigoImovel() const;

///
///@brief Set para o atributo Classe
///
        void setClasse(const Classe&);
///
///@brief Get para Classe
///
///@return Classe
///
        Classe getClasse() const;

///
///@brief Set para o atributo Descrição
///
        void setDescricao(const Descricao&);
///
///@brief Get para Descrição
///
///@return Descrição
///
        Descricao getDescricao() const;

///
///@brief Set para o atributo Endereço
///
        void setEndereco(const Endereco&);
///
///@brief Get para Endereço
///
///@return Endereço
///
        Endereco getEndereco() const;

///
///@brief Set para o atributo DataInicialImovel
///
        void setDataInicialImovel(const DataInicialImovel&);
///
///@brief Get para DataInicialImovel
///
///@return DataInicialImovel
///
        DataInicialImovel getDataInicialImovel() const;

///
///@brief Set para o atributo DataFinalImovel
///
        void setDataFinalImovel(const DataFinalImovel&);
///
///@brief Get para DataFinalImovel
///
///@return DataFinalImovel
///
        DataFinalImovel getDataFinalImovel() const;

///
///@brief Set para o atributo HospedesImovel
///
        void setHospedesImovel(const NumeroImovel&);
///
///@brief Get para HospedesImovel
///
///@return NumeroImovel
///
        NumeroImovel getHospedesImovel() const;

///
///@brief Set para o atributo ValorImovel
///
        void setValorImovel(const MoedaImovel&);
///
///@brief Get para ValorImovel
///
///@return MoedaImovel
///
        MoedaImovel getValorImovel() const;
};
///
///@brief método inline para SetCodigoImovel
///
///@param codigoImovel
///
inline void Imovel::setCodigoImovel(const CodigoImovel &codigoImovel){
    this->codigoImovel = codigoImovel;
}
///
///@brief método inline para GetCodigoImovel
///
///@return CodigoImovel
///
inline CodigoImovel Imovel::getCodigoImovel() const{
    return codigoImovel;
}

///
///@brief método inline para SetClasse
///
///@param Classe
///
inline void Imovel::setClasse(const Classe &classe){
    this->classe = classe;
}
///
///@brief método inline para GetClasse
///
///@return Classe
///
inline Classe Imovel::getClasse() const{
    return classe;
}

///
///@brief método inline para SetDescrição
///
///@param descrição
///
inline void Imovel::setDescricao(const Descricao &descricao){
    this->descricao = descricao;
}
///
///@brief método inline para GetDescrição
///
///@return descrição
///
inline Descricao Imovel::getDescricao() const{
    return descricao;
}

///
///@brief método inline para SetEndereço
///
///@param Endereço
///
inline void Imovel::setEndereco(const Endereco &endereco){
    this->endereco = endereco;
}
///
///@brief método inline para GetEndereço
///
///@return endreço
///
inline Endereco Imovel::getEndereco() const{
    return endereco;
}

///
///@brief método inline para SetDataInicialImovel
///
///@param dataInicialImovel
///
inline void Imovel::setDataInicialImovel(const DataInicialImovel &dataInicialImovel){
    this->dataInicialImovel = dataInicialImovel;
}
///
///@brief método inline para GetDataInicialImovel
///
///@return dataInicialImovel
///
inline DataInicialImovel Imovel::getDataInicialImovel() const{
    return dataInicialImovel;
}

///
///@brief método inline para SetDataFinalImovel
///
///@param dataFinalImovel
///
inline void Imovel::setDataFinalImovel(const DataFinalImovel &dataFinalImovel){
    this->dataFinalImovel = dataFinalImovel;
}
///
///@brief método inline para GetDataFinalImovel
///
///@return dataFinalImovel
///
inline DataFinalImovel Imovel::getDataFinalImovel() const{
    return dataFinalImovel;
}
///
///@brief método inline para SetHospedesImovel
///
///@param hospedesImovel
///
inline void Imovel::setHospedesImovel(const NumeroImovel &hospedesImovel){
    this->hospedesImovel = hospedesImovel;
}
///
///@brief método inline para GethospedesImovel
///
///@return hospedesImovel
///
inline NumeroImovel Imovel::getHospedesImovel() const{
    return hospedesImovel;
}

///
///@brief método inline para SetValorImovel
///
///@param valorImovel
///
inline void Imovel::setValorImovel(const MoedaImovel &valorImovel){
    this->valorImovel = valorImovel;
}
///
///@brief método inline para GetValorImovel
///
///@return valorImovel
///
inline MoedaImovel Imovel::getValorImovel() const{
    return valorImovel;
}

///
///@brief Entidade para Proposta
///
class Proposta{
    private:
        CodigoProposta              codigoProposta;
        DataInicialProposta         dataInicialProposta;
        DataFinalProposta           dataFinalProposta;
        NumeroProposta              hospedesProposta;
        MoedaProposta               valorProposta;
    public:
        //Declaração dos métodos setters e getters

///
///@brief Set para o atributo CodigoProposta
///
        void setCodigoProposta(const CodigoProposta&);
///
///@brief Get para CodigoProposta
///
///@return codigoProposta
///
        CodigoProposta getCodigoProposta() const;

///
///@brief Set para o atributo DataInicialProposta
///
        void setDataInicialProposta(const DataInicialProposta&);
///
///@brief Get para DataInicialProposta
///
///@return dataInicialProposta
///
        DataInicialProposta getDataInicialProposta() const;

///
///@brief Set para o atributo DataFinalalProposta
///
        void setDataFinalProposta(const DataFinalProposta&);
///
///@brief Get para DataFinalProposta
///
///@return dataFinalProposta
///
        DataFinalProposta getDataFinalProposta() const;
///
///@brief Set para o atributo HospedesProposta
///
        void setHospedesProposta(const NumeroProposta&);
///
///@brief Get para HospedesProposta
///
///@return NumeroProposta
///
        NumeroProposta getHospedesProposta() const;

///
///@brief Set para o atributo ValorProposta
///
        void setValorProposta(const MoedaProposta&);
///
///@brief Get para ValorProposta
///
///@return MoedaProposta
///
        MoedaProposta getValorProposta() const;
};
///
///@brief método inline para SetCodigoProposta
///
///@param codigoProposta
///
inline void Proposta::setCodigoProposta(const CodigoProposta &codigoProposta){
    this->codigoProposta = codigoProposta;
}
///
///@brief método inline para CodigoProposta
///
///@return codigoProposta
///
inline CodigoProposta Proposta::getCodigoProposta() const{
    return codigoProposta;
}

///
///@brief método inline para SetdataInicialProposta
///
///@param dataInicialProposta
///
inline void Proposta::setDataInicialProposta(const DataInicialProposta &dataInicialProposta){
    this->dataInicialProposta = dataInicialProposta;
}
///
///@brief método inline para DataInicialProposta
///
///@return dataInicialProposta
///
inline DataInicialProposta Proposta::getDataInicialProposta() const{
    return dataInicialProposta;
}

///
///@brief método inline para SetdataFinalProposta
///
///@param dataFinalProposta
///
inline void Proposta::setDataFinalProposta(const DataFinalProposta &dataFinalProposta){
    this->dataFinalProposta = dataFinalProposta;
}
///
///@brief método inline para DataFinalProposta
///
///@return dataFinalProposta
///
inline DataFinalProposta Proposta::getDataFinalProposta() const{
    return dataFinalProposta;
}

///
///@brief método inline para SetHospedesProposta
///
///@param HospedesProposta
///
inline void Proposta::setHospedesProposta(const NumeroProposta &hospedesProposta){
    this->hospedesProposta = hospedesProposta;
}
///
///@brief método inline para HospedesProposta
///
///@return HospedesProposta
///
inline NumeroProposta Proposta::getHospedesProposta() const{
    return hospedesProposta;
}

///
///@brief método inline para SetValorProposta
///
///@param valorProposta
///
inline void Proposta::setValorProposta(const MoedaProposta &valorProposta){
    this->valorProposta = valorProposta;
}
///
///@brief método inline para ValorProposta
///
///@return ValorProposta
///
inline MoedaProposta Proposta::getValorProposta() const{
    return valorProposta;
}
#endif // ENTIDADES_H

