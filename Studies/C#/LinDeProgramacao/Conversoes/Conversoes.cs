using System;
using LinDeProgramacao;

namespace LinDeProgramacao 
{
    class Conversoes
    {
        public void Implicita()
        {  
            float valor = 25.8f;
            int outro = 25;

            valor = outro; 
            Console.WriteLine(valor);
        }

        public void Explicita()
        {
            int inteiro = 100;           
            uint interioSemSinal = (uint)inteiro; 

            Console.WriteLine(interioSemSinal);
        }

        public void Parse()
        {
            int inteiro = int.Parse("100");
            Console.WriteLine(inteiro);
        }

        public void Convert()
        {  
            //Exemplo mostrado no video 
            //int inteiro = Convert.ToInt32("100");       
        }
    }
}