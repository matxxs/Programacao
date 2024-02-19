namespace FactoryMethod
{
    class CarTransport : Transport
    {
        protected override IVehicle CreateTransport()
        {
            return new Car();
        }

    }
}

