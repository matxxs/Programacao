using Ocp.Vehicle;
using System;

namespace Ocp.Vehicle
{
    class Vehicle : Ivehicle
    {
        protected string color;
        protected int year;
        protected double engine;

        public Vehicle(string color, int year, double engine)
        {
            this.color = color;
            this.year = year;
            this.engine = engine;
        }
        public void StartVehicle()
        {

            Console.WriteLine("Ligando os motores!");

        }

    }
}
