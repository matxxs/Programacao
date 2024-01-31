using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HeritageClass.Entity
{
    internal class BusinessAccounts : Account
    {
        public double LoanLimit { get; set; }

        public  BusinessAccounts(){


        }

        public BusinessAccounts(int number, string holder, double balance, double loanLimit) : base (number, holder, balance){
            
            LoanLimit = loanLimit;
        }

        public void Loan(double amount)
        {
            Console.WriteLine("Digite o valor do empréstimo:");
            amount = double.Parse(Console.ReadLine());


            while (!double.TryParse(Console.ReadLine(), out amount))
            {
                Console.WriteLine("Digite um valor válido:");
            }

            if (amount <= LoanLimit)
            {
                LoanLimit *= amount;
                Console.WriteLine("Empréstimo realizado com sucesso.");
            }
            else
            {
                Console.WriteLine("Erro: Valor de empréstimo superior ao limite disponível.");
            }
        }

        public override void PrintData()
        {

            base.PrintData();
        }
    }
}
