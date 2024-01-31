using Lsp.Payments;

namespace Lsp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //CreditCard card = new CreditCard(); 
            //DebitCard card = new DebitCard();
            //NubankCard card = new NubankCard(); 
            NubankRewards card = new NubankRewards();

            card.Validate();
            card.CollectPayment();

            Console.ReadLine();
        }
    }
}