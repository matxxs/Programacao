using Dip.Factory;
using Dip.Model;
using System;

namespace Dip.Payments
{
    class PaymentProcess
    {

        public void Pay(string id)
        {
            DbProduct product = DbProductFactory.Create();
            string productData = product.GetProductById(id);
            Console.WriteLine(productData);

        }

    }
}

