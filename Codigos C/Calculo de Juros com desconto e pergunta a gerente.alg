algoritmo "AUAUUAUA"
// Função : Calculo de juros
// Autor : Glu Glu
// Data : 27/03/2019
// Seção de Declarações 
var

  n, P ,  I , J , M , C : real
    Nome, resposta : caractere
inicio
      escreva ("qual seu nome:")
      leia     (Nome)

      escreva ("qual a capital inicial:")
      leia     (C)

          se C > 100000 entao
         escreval ("Falar com o seu gerente, veja ofertas mais vantajosas")
      senao
      
           escreva ("quanto periodo de pagamento:")
           leia     (N)
      
           escreva  ("quantidade de juros a pagar:")
            leia      (I)
      

       J <- (C * I * N)/100
        M <- C + J
        P <- M/N
      
        escreval ("Juros:" , J:2:2 , "R$")
        escreval ("montante:" , M:2:2, "R$")
               escreval ("Parcela:" , P:2:2, "R$")

      escreva ("deseja fazer debito automatico? : ")
      leia (resposta)
      
      se resposta = "sim" entao
         P <- (M/N)*0.95
      escreva ("parabens vc ganhou 5% de desconto: R$", P:2:2)
      fimse
fimse
      
      

      




      
      
        
        
fimalgoritmo
