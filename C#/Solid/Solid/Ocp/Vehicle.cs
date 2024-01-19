using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ocp
{
    class Vehicle
    {
        private string color;
        private int year;
        private double engine;
        private int seats;
        private int doors;

        public Vehicle(string color, int year, double engine, int seats, int doors)
        {
            this.color = color;
            this.year = year;
            this.engine = engine;
            this.seats = seats;
            this.doors = doors;

        }
        public void Car()
        {
            Console.WriteLine($"Criando um Carro {color}, {year}, {engine},{doors} portas e {seats} assentos.");
            StartVeicle();
        }

        public void MotorCycle()
        {
            Console.WriteLine($"Criando uma moto {color}, {year}, {engine}.");
            StartVeicle();
        }


        public void StartVeicle()
        {
            Console.WriteLine("ligando os motores");
        }





    }
}
