using Slp.Payments;
using System;

namespace Lsp.Payments
{
    abstract class NubankCard : IPaymentInstrument // essa classe vai ser abstrata.
    {
        public void CollectPayment()
        {
            Console.WriteLine("Pagamento realizado!");
        }

        public virtual void Validate()
        {
            //Validação básica
        }
    }
}
