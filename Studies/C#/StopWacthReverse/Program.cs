using System;
using System.ComponentModel.Design;
using System.Threading;

namespace StopWacthReserve
{
    class Program 
    {
        static void Main(string[] args)
        {
            Menu();
        }

        static void Menu()
        {
            Console.Clear();

                // Opções para o Usúario
            Console.WriteLine("S = 10s => 10 Segundo");
            Console.WriteLine("M = 1m => 1 Minutos");
            Console.WriteLine("0 = Para Sair");

                // Transformar informação digitada pelo usuário em minúsculas
            Console.WriteLine("\n Quanto tempo deseja contar ?");
            string data = Console.ReadLine().ToLower();

                // Identificar a letra digitada pelo usuário
            char type = char.Parse(data.Substring(data.Length - 1, 1));
                // Identifica numeros digitados
            int time = int.Parse(data.Substring(0, data.Length - 1));
            int multiplier = 1;

            if(type == 'm')
                multiplier = 60;

            if(time == 0 )
                System.Environment.Exit(0);

            PreStart(time * multiplier);
        }
        static void PreStart(int time)
        {
            Console.Clear();
            Console.WriteLine("Go...");
            Thread.Sleep(1000);
            Console.WriteLine("Set...");
            Thread.Sleep(1500);
            Console.WriteLine("Ready...");
            Thread.Sleep(2000);

            Start(time);
        }
        static void Start(int time)
        {
            int currentTime = 0;

            do{
                Console.Clear();
                Console.WriteLine(time);
                time--;
                Thread.Sleep(1000);
            } while(currentTime != time);

            Console.Clear();
            Thread.Sleep(500);
            Console.WriteLine("StopWacth Reverse Finalizado");
            Menu();
        }
    }
}