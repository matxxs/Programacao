using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HeritageClass.Entity
{
    internal class Account
    {
        public int Number { get; set; } // Numero da conta
        public string Holder { get; set; } // Titular da conta 
        public double Balance { get; set; } // Saldo da conta

        // Construtor padrão, que é o account vazio
        public Account()
        {


        }

        public Account(int number, string holder, double balance)
        {

            Number = number;
            Holder = holder;
            Balance = balance;

        }

        public void WithDraw(double amount)
        {
            // Saldo da conta -= a quantia
            Console.WriteLine("Valor a ser retirado :");
            amount = double.Parse(Console.ReadLine());

            Balance -= amount;
            Console.WriteLine($" O valor {amount} retirado com SUCESSO");
        }

        public void deposit(double amount)
        {
            Console.WriteLine("Valor a ser depositar :");
            amount = double.Parse(Console.ReadLine());

            Balance += amount;
            Console.WriteLine($"O valor {amount} depositado com SUCESSO");
        }

        public virtual void PrintData()
        {
            Console.WriteLine("Qual número da conta?");
            int number = int.Parse(Console.ReadLine());
            Console.WriteLine("Nome do Titular da conta?");
            string holder = Console.ReadLine();
            Console.WriteLine("Saldo da conta");
            double balance = double.Parse(Console.ReadLine());

            // Configurar os valores na instância atual
            this.Number = number;
            this.Holder = holder;
            this.Balance = balance;
        }
    }
}
