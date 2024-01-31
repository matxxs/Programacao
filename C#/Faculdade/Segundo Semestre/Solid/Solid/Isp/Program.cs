using Isp.Vehicle;

namespace Isp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Car car = new Car("Azul", 2022, 4.0, 2, 2);
            MotoCycle motorCycle = new MotoCycle("Branca", 2023, 600);

            Console.ReadLine();
        }
    }
}