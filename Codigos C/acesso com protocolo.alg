algoritmo "semnome"
// Fun��o : Condicional Simples
// Autor :  Arthur
// Data : 13/02/2019
// Se��o de Declara��es 
var
   login: caractere
   senha: inteiro
inicio
      escreva ("Login: ")
      leia (login)

      escreva ("Senha: ")
      leia (senha)
      
      se (login = "Arthur") E (senha = 1212) entao
         escreva ("Acesso Concedido ")
      senao
           escreva ("Acesso Negado...Ativando Protocolo de seguran�a ")
      fimse
      
fimalgoritmo

