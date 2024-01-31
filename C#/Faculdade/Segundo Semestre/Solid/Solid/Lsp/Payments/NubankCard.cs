using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lsp.Payments
{
    abstract class NubankCard : IpaymentnsIntrument // esse classe vai ser abstrato
    {
        public void CollectPayment()
        {
            Console.WriteLine("Pagamento realizado");
        }

        public virtual void Validate()
        {
            //Validação básica
        }
    }
}
