using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lsp.Payments
{
    class NubankRewards : IpaymentnsIntrument
    {
        public void CollectPayment()
        {
            Console.WriteLine("Pagamento realizado com sucesso");
            Console.WriteLine("Pontuação creditada");
        }

        public void Validate()
        {
            Console.WriteLine("Limita OK, Rewards OK!");
        }
    }
}
