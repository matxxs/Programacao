namespace Adapter
{
    interface IPayPalPayment
    {

        Token AuthToken();
        void PayPalPayment();
        void PayPalReceive();

    }
}
