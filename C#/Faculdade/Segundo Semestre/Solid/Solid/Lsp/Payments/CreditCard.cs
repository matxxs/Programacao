using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lsp.Payments
{
    class CreditCard : NubankCard
    {
        public override void Validate()
        {
            Console.WriteLine("Validação limite...");
            Console.WriteLine("Limite OK!");
        }
    }
}
