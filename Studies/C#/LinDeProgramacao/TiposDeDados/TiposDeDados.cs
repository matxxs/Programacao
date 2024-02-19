using System;
using LinDeProgramacao;

namespace LinDeProgramacao 
{
    class TiposDeDados
    {
        public void NumInterio()
        {
            short  numShort = -500; // -32.768 to 32.767
            ushort numUShort = 500; // 0 to 65.6535
            int numInt = -1000; // -2.147.483.648 to 2.147.483.647
            uint numUInt = 1000; // 0 to 4.294.967.295
            long numLong = - 2000; // -9.223.372.036.854.775.808 to 9.223.372.036.854.775.807
            ulong numULong = 2000; // 0 to 18.446.744.073.709.551.615

            Console.WriteLine($"{numShort}.  {numUShort}.  {numInt}.  {numUInt}.  {numLong}.  {numULong}");
        }

        public void NumReais()
        {
            float numFloat = 0;
            double numDouble = 50;
            decimal numDecimal = 100;

            Console.WriteLine($" float: {numFloat} \n double: {numDouble}\n decimal: {numDecimal}");
 
            for(int i = 50; numFloat <= i; numFloat++)

            if(numFloat > numDouble)
                Console.WriteLine("\n Float e maior que Double");

            numFloat -= 1;
            Console.WriteLine($" float: {numFloat} \n Double: {numDouble}");

            if(numFloat == numDouble)
                Console.WriteLine("Double e Flot são iguais");
        }

        public  void Boolean()
        {
            bool usuarioCadastro = true; // da para usar false, mas so que ele não entra no IF
            var usuarioExperido = false;

            
            if(usuarioCadastro){

                int time = 10;
                int currenttime = 0;

                while(time != currenttime){
                    Console.Clear();
                    time--;
                    Console.Write($"Tempo para o login expirar: {time} \n"); 
                    Thread.Sleep(1000);

                    if(currenttime == time){
                        usuarioCadastro = false;
                        Console.WriteLine("\n======== LOGIN EXPIRADO ========");
                        usuarioExperido = true;
                    }
                }

                if(usuarioCadastro)
                    Console.WriteLine("Não entre aqui");
                
                if(usuarioExperido){      
                    Console.Write("Desejá fazer o login novamente: ");
                    var responseUser = Console.ReadLine();
                }
            }
        }

        public void Char()
        {
            Console.Clear();
            //char primeiraLetra = 'C';
            //var segundaLetra = 'D';

                //Sustring (ponto inicial, mas quantos)
            string fraseChar = "PARALELEPÍPEDO";
            char obterUmaLetra = char.Parse(fraseChar.Substring(9,1));

            string fraseString = "PARALELEPÍPEDO";
            string obterTresLentras = fraseString.Substring(9,3);

            Console.WriteLine($" Frase Char: {obterUmaLetra} \n Frase String: {obterTresLentras}");
        } 

        public void String()
        {
            string primeiraLetra = "C";
            string texto = "Meu Texto";
            var documento = "1616161.516";

            Console.WriteLine($"{primeiraLetra} \n {texto} \n {documento}");
        } 

        public void Var()
        {
                // Varivel por ser utilizada como qualquer tipo de dado
            var Int = 25;
            var String = "Matheus";
            var Bool = true;

            Console.WriteLine($"{Int}. {String}. {Bool}");
        } 

        public void Object()
        {
            object quantidade;
            quantidade = 2.0;
            quantidade = 1;
            quantidade = "Teste";

            Console.WriteLine(quantidade);
        }

        public void NullableType()
        {
            int? idade = 0;
            Console.WriteLine(idade);
            idade = null;
            Console.WriteLine(idade);
            idade = 25;
            Console.WriteLine(idade);
        
        }
    }
}