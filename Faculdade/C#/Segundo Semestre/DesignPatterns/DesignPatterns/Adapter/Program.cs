using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Adapter
{
    class Program
    {
        static void Main(string[] args)
        {

            //PayPal payment = new PayPal();
            //Payonner payment = new Payonner();
            IPayPalPayment payment = new PayonnerAdapter(new Payonner());
            payment.PayPalPayment();
            payment.PayPalReceive();

            //payment.SendPayment();
            //payment.ReceivePayment();

            Console.ReadLine();

        }
    }
}
