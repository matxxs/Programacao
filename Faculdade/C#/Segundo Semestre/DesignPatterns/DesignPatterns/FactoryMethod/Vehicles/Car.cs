using System;

namespace FactoryMethod
{
    class Car : IVehicle //vai implementar de um veiculo
    {
        public void GetCargo()
        {
            Console.WriteLine("Pegamos os passageiros!");
        }

        public void StartRoute()
        {
            Console.WriteLine("Iniciando o trajeto.");
            GetCargo();
        }
    }
}