using System;
using System.Globalization;

namespace Numbers
{
    class View
    {
        public void Aula0()
        {
            decimal valor = 10.25m;
            Console.WriteLine(valor);
        }

        public void Aula1()
        {
            decimal valor = 10536.25m;

            Console.WriteLine(
                valor.ToString(
                    // G, C, E04, F, N, P
                    "C",
                    CultureInfo.CreateSpecificCulture("pt-BR")
                )
            );
        }

        public void Aula2()
        {
            decimal valor = 10536.25m;
            Console.WriteLine(Math.Round(valor)); // Arredondar
            Console.WriteLine(Math.Ceiling(valor)); // Arredondar para Cima  
            Console.WriteLine(Math.Floor(valor)); // Arredondar para Baixo       
        }
    }
}