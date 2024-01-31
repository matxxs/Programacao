using System;

namespace FactoryMethod
{
    class Motorcycle : IVehicle
    {
        public void GetCargo()
        {
            Console.WriteLine("Pegamos a encomenda.");
        }

        public void StartRoute()
        {
            Console.WriteLine("Iniciando a entrega.");
            GetCargo();
        }
    }
}
