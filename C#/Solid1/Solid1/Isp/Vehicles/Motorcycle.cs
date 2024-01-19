using System;

namespace Isp.Vehicles
{
    class Motorcycle : IVehicle, IVehicleMotorcycle
    {
        private string color;
        private int year;
        private double engine;

        public Motorcycle(string color, int year, double engine)
        {
            ConfigureMotorcycle(color, year, engine);
        }

        public void ConfigureMotorcycle(string color, int year, double engine)
        {
            this.color = color;
            this.year = year;
            this.engine = engine;

            Console.WriteLine($"Criando moto ano {year}, {engine} cilindradas e da cor {color}.");

            StartVehicle();
        }

        public void StartVehicle()
        {
            Console.WriteLine("Ligando os motores.");
        }
    }
}
