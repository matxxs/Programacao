namespace FactoryMethod
{
    abstract class Transport
    {

        public void StartTransport()
        {

            IVehicle vehicle = CreateTransport();
            vehicle.StartRoute();

        }

        protected abstract IVehicle CreateTransport();

    }
}

