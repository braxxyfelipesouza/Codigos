algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 27/02/2019
// Se��o de Declara��es 
var
   peso, altura, imc: real
inicio
      escreval ("�NDICE DE MASSA CORPORAL")
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

           
      

      
// Se��o de Comandos 
fimalgoritmo
