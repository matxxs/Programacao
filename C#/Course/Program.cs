using System;
using System.Globalization;

namespace Course
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Triangulo X, Y;
            X = new Triangulo();
            Y = new Triangulo();

            Console.WriteLine("Entre com as medidas do triangulo x: ");
            X.A = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            X.B = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            X.C = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            Console.WriteLine("Entre com as medidas do triangulo Y: ");
            Y.A = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            Y.B = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            Y.C = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            //double p = (X.A + X.B + X.C)/2;
            //double areaX = Math.Sqrt(p * (p - X.A) * (p - X.B) * (p - X.C));
            double areaX = X.Area();

            //p = (Y.A + Y.B + Y.C) /2;
            //double areaY = Math.Sqrt(p * (p - Y.A) * (p - Y.B) * (p - Y.C));
            double areaY = Y.Area();

            Console.WriteLine("\nÁrea de X = " + areaX.ToString("F4", CultureInfo.InvariantCulture));
            Console.WriteLine("\nÁrea de X = " + areaX.ToString("F4", CultureInfo.InvariantCulture));

            if (areaY > areaX)
            {
                Console.WriteLine("\nA área de Y é maior que a de X");
            }
            else
            {
                Console.WriteLine("\nA área de X é maior que a de Y");
            }
        
        }
    }
}