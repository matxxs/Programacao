using AbstractFactory.Aircrafts;
using AbstractFactory.Landvehicles;

namespace AbstractFactory.Factories
{
    interface ITransportFactory
    {

        ILandVehicle CreateTransportVehicle();
        IAircraft CreateTransportAircraft();

    }
}
