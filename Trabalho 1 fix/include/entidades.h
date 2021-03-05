#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

using namespace std;
//Usu�rio
class Usuario{
    private:
        Nome        nome;
        Email       email;
        Senha       senha;
        Telefone    telefone;
    public:
        void setNome(const Nome&);
        Nome getNome() const;

        void setEmail(const Email&);
        Email getEmail() const;

        void setSenha(const Senha&);
        Senha getSenha() const;

        void setTelefone(const Telefone&);
        Telefone getTelefone() const;
};

inline void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

inline Nome Usuario::getNome() const{
    return nome;
}

inline void Usuario::setEmail(const Email &email){
    this->email = email;
}

inline Email Usuario::getEmail() const{
    return email;
}

inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

inline Senha Usuario::getSenha() const{
    return senha;
}

inline void Usuario::setTelefone(const Telefone &telefone){
    this->telefone = telefone;
}

inline Telefone Usuario::getTelefone() const{
    return telefone;
}

//Im�vel
class Imovel{
    private:
        //Dom�nio               //Nome dom�nio
        CodigoImovel            codigoImovel;
        Classe                  classe;
        Descricao               descricao;
        Endereco                endereco;
    public:

        void setCodigoImovel(const CodigoImovel&);
        CodigoImovel getCodigoImovel() const;

        void setClasse(const Classe&);
        Classe getClasse() const;

        void setDescricao(const Descricao&);
        Descricao getDescricao() const;

        void setEndereco(const Endereco&);
        Endereco getEndereco() const;
};
inline void Imovel::setCodigoImovel(const CodigoImovel &codigoImovel){
    this->codigoImovel = codigoImovel;
}

inline CodigoImovel Imovel::getCodigoImovel() const{
    return codigoImovel;
}

inline void Imovel::setClasse(const Classe &classe){
    this->classe = classe;
}

inline Classe Imovel::getClasse() const{
    return classe;
}

inline void Imovel::setDescricao(const Descricao &descricao){
    this->descricao = descricao;
}

inline Descricao Imovel::getDescricao() const{
    return descricao;
}

inline void Imovel::setEndereco(const Endereco &endereco){
    this->endereco = endereco;
}

inline Endereco Imovel::getEndereco() const{
    return endereco;
}
#endif // ENTIDADES_H
