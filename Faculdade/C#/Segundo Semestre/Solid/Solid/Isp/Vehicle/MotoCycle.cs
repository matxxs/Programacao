using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Isp.Vehicle
{
    internal class MotoCycle : IVehicle, IVehicleMotorCycle
    {
        private string Color;
        private int Year;
        private double Engine;


        public MotoCycle(string color, int year, double engine)
        {
            ConfigureMotorcycle(color, year, engine);
        }

        public void ConfigureMotorcycle(string color, int year, double engine)
        {
            this.Color = color;
            this.Year = year;
            this.Engine = engine;

            Console.WriteLine($"Criando moto ano {year}, {engine} cilindradas e da cor {color}.");

            StartVehicle();
        }

        public void StartVehicle()
        {
            Console.WriteLine("Ligando os motores.");
        }
    }
}
