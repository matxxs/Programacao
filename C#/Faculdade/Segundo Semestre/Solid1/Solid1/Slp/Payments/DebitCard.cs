using System;

namespace Lsp.Payments
{
    class DebitCard : NubankCard
    {
        public override void Validate()
        {
            Console.WriteLine("Verificar o saldo da conta...");
            Console.WriteLine("Saldo disponível.");
        }

    }
}
