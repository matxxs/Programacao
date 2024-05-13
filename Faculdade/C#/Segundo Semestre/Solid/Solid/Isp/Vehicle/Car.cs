using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Isp.Vehicle
{
    internal class Car : IVehicle, IVehicleCar
    {
        private string Color;
        private int Year;
        private double Engine;
        private int Seats;
        private int Doors;

        public Car(string color, int year, double engine, int seats, int doors)
        {
            ConfigureCar(color, year, engine, seats, doors);


            Console.WriteLine($"Criando carro ano {year}, motor {engine} da cor {color}.");

            StartVehicle();
        }    
        public void ConfigureCar(string color, int year, double engine, int seats, int doors)
        {
            this.Color = color;
            this.Year = year;
            this.Engine = engine;
            this.Seats = seats;
            this.Doors = doors;
        }

        public void StartVehicle()
        {
            Console.WriteLine("Ligando os motores.");
        }

    }
}
