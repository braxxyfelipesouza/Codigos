algoritmo "AUAUUAUA"
// Função : Calculo de juros
// Autor : Glu Glu
// Data : 27/03/2019
// Seção de Declarações 
var

  n, P ,  I , J , M , C : real
    Nome : caractere
inicio
      escreva ("qual seu nome:")
      leia     (Nome)

      escreva ("qual a capital:")
      leia     (C)
      
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
      
      
      
        
        
fimalgoritmo
