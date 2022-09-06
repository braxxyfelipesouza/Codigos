algoritmo "semnome"
// Função :
// Autor :
// Data : 27/02/2019
// Seção de Declarações 
var
   peso, altura, imc: real
inicio
      escreval ("ÍNDICE DE MASSA CORPORAL")
      escreva ("Qual o seu peso ?  ")
      leia (peso)
      escreva ("Qual sua altura ?  ")
      leia (altura)
      imc <- peso/ (altura*altura)
      escreval ("IMC = ", imc: 2:2)
      
      se imc <25 entao
          escreval ("Peso Normal")
      senao
           se (imc >= 25) E (imc <30) entao
              escreva ("Sobrepeso")
           senao
                escreval ("Obesidade")
           fimse
      fimse

           
      

      
// Seção de Comandos 
fimalgoritmo
