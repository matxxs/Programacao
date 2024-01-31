using System;

namespace AbstractFactory.Aircrafts
{
    class Helicopter : IAircraft
    {
        public void CheckWind()
        {
            Console.WriteLine("Ventos a 30km, sudeste, ventos ok!");
        }

        public void GetCargo()
        {
            Console.WriteLine("Passageiros ok, ligando helices.");
        }

        public void StartRoute()
        {
            GetCargo();
            CheckWind();
            Console.WriteLine("Iniciando decolagem.");
        }
    }
}
