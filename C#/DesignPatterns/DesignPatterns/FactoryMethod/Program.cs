using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FactoryMethod
{
    class Program
    {
        static void Main(string[] args)
        {

            Transport transport = null;

            if (args.Length > 0 && args[0] == "--uber")
            {
                transport = new CarTransport();
            }
            else if (args.Length > 0 && args[0] == "--log")
            {
                transport = new MotorcycleTransport();
            }
            else
            {
                Console.WriteLine("Selecione o tipo da entrega.");
            }

            if (transport != null)
            {
                transport.StartTransport();
            }

            Console.ReadLine();


        }
    }
}