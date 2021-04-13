#include "message.h"

Message::Message(string ms)
{
    this->conteudo = ms;
    this->enviadaPor = User::userLog->getNome();
    this->data_hora = systemTime();
}

Message::~Message(){}

string Message::getData_hora()
{
    return data_hora;
}
void Message::setData_hora(string dh)
{
    data_hora = dh;
}

string Message::getConteudo()
{
    return conteudo;
}
void Message::setconteudo(string ct)
{
    conteudo = ct;
}

string Message::getEnviadapor()
{
    return enviadaPor;
}
void Message::setEnviadapor(string nome)
{
    enviadaPor = nome;
}

string Message::systemTime()
{
    time_t t;
    struct tm * local;
    char buffer[20];

    time(&t);
    local=localtime(&t);

    strftime(buffer,20,"%D - %R",local);

    string tmp_string(buffer);

    return tmp_string;
}