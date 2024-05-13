using System;
using System.Diagnostics;
using LinDeProgramacao;
using System.Diagnostics.Contracts;
using System.Reflection;
using System.Reflection.Metadata.Ecma335;

namespace LinDeProgramacao 
{
    class Operadores
    {
       public void If_IfElse_Else()
       {
            const int IDADE_MINIMA = 18;
            const int IDADE_MAXIMA = 25;

            int idade = 26;

            if( (idade >= IDADE_MINIMA) && (idade <= IDADE_MAXIMA)) {

                Console.Write("Você tem idade para passar");

            } else if(idade > IDADE_MAXIMA){
                Console.WriteLine("Você já não tem mas idade para passar "); 
            } else {
                Console.WriteLine("Você não tem idade o suficiente");
            }
       } 

       public void For()
       {
            int maisDois = 2;

            for (int i = 0; i <= 100; i++){
                Console.WriteLine(i + " incremento ");
                i += maisDois;
                Console.WriteLine(i + " Mais Dois");
            }
       }

       public void Switch()
       {
            bool? valor = false;
            switch (valor)
            { 
                case true: Console.WriteLine("True"); break; 
                case false: Console.WriteLine("False"); break;
                default: Console.WriteLine(" Nullo "); break;
            }
        }
    
        public void While()
        {
            int valor = 0;

            while (valor <= 5){

                Console.WriteLine(valor);
                valor++;
            }            
        }

        public void DoWhile()
        {
            int valor = 0;

            do {
                Console.WriteLine(valor);
                valor++;
            } while (valor < 5); 
        }
    
        public void ValeuTypesEReference()
        {
            //value Types
            int x = 25;
            int y = x;

            Console.WriteLine(x);
            Console.WriteLine(y);

            x = 32;
            Console.WriteLine(x);
            Console.WriteLine(y);

            //Reference
            var arr = new string[2];
            arr[0] = "Item 1";

            var arr2 = arr;

            Console.WriteLine(arr[0]);
            Console.WriteLine(arr2[0]);

            arr[0] = "item2";
            Console.WriteLine(arr[0]);
            Console.WriteLine(arr2[0]);                
        }

        public void Function()
        {
            MeuMetodo();

            string nome = RetornaNome("André", "Santos");
            Console.WriteLine(nome);
        }   
        public void Structs()
        {
            Product mouse = new Product(1, "Mouse game", 299.99, EProductType.Service);

            mouse.Id = 59;

            Console.WriteLine(mouse.Id);
            Console.WriteLine(mouse.Name);
            Console.WriteLine(mouse.Price);  
        }

        public void Enum()
        {
            Product manutencaoEletrica = new Product(2, "Manutenção elétrica residencial", 500, EProductType.Service);
            Console.WriteLine(manutencaoEletrica);
        }

        static void MeuMetodo(){
            Console.WriteLine("C# é legal");
        }

        static string RetornaNome(
            string nome, 
            string sobrenome, 
            int idade = 60,
            bool teste = false,
            double novo = 4.56){

            return nome + "" + sobrenome + "tem" + idade.ToString();
        } 
    }
    struct Product
    {
        public Product(int id, string name,double price, EProductType type ){

            Id = id;
            Name = name;
            Price = price;
            Type = type;           
        }

        public int Id;
        public string Name;
        public double Price;
        public EProductType Type;

        public double PriceInDolar(double dolar){

            return Price * dolar;
        }
    }

    enum EProductType 
    {
        Product = 1,
        Service = 2
    }
}