algoritmo "semnome"
// Função :
// Autor :
// Data : 13/03/2019
// Seção de Declarações 
var
   tMax, tMin, tAtual : inteiro
inicio
escreval (" Digite a temperatura limite inferior :")
leia (tMin)
escreval (" Digite a temperatura limite superior :")
leia (tMax)
escreval (" Digite a temperatura atual :")
leia (tAtual)
      se (tAtual <= tMax) E (tAtual >= tMin) entao
         escreval (" A operação está funcionando normalmente ")
      senao
           se (tAtual < tMin) entao
              escreval (" Ligue o aquecedor! ")
           senao
                se (tAtual > tMax) entao
                escreval (" Ligue o resfriador! ")
                fimse
           fimse
      fimse
           
fimalgoritmo
