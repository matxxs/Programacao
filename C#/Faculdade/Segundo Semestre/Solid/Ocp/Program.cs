using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ConstrainedExecution;
using System.Text;
using System.Threading.Tasks;

namespace Ocp
{
    class Program
    {
        static void Main(string[] args)
        {

            TypeVehicle type = TypeVehicle.CAR;

            if (type == TypeVehicle.CAR)
            {
                //  Passando instancia
                Vehicle vehicle = new Vehicle("Azul", 2022, 2.0, 5, 4);
                vehicle.Car();

            }
            else
            {
                Vehicle vehicle = new Vehicle("Azul", 2022, 2.0, 5, 4);
                vehicle.MotorCycle();

            }

            Console.ReadLine();


        }
    }
}
