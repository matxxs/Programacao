using AbstractFactory.App;
using AbstractFactory.Factories;
using System;

namespace AbstractFactory
{
    class Program
    {
        static Application ConfigureApplication()
        {
            Application app;
            ITransportFactory transportFactory;
            string company = "99";

            if (company == "Uber")
            {
                transportFactory = new UberTransport();
            }
            else
            {
                transportFactory = new NineNineTransport();
            }

            app = new Application(transportFactory);

            return app;

        }
        static void Main(string[] args)
        {

            Application app = ConfigureApplication();

            app.StartRoute();

            Console.ReadLine();

        }
    }
}

