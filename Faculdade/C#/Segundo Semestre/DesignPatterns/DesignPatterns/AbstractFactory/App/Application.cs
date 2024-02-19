using AbstractFactory.Aircrafts;
using AbstractFactory.Factories;
using AbstractFactory.Landvehicles;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.App
{
    class Application
    {
        private IAircraft aircraft;
        private ILandVehicle vehicle;

        public Application(ITransportFactory factory)
        {

            vehicle = factory.CreateTransportVehicle();
            aircraft = factory.CreateTransportAircraft();

        }

        public void StartRoute()
        {
            vehicle.StartRoute();
            aircraft.StartRoute();
        }
    }
}
