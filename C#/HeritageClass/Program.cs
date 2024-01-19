using HeritageClass.Entity;
using static System.Net.Mime.MediaTypeNames;

namespace HeritageClass
{
    internal class Program
    {
        static void Main(string[] args)
        {

            Console.Write("Digite o tipo de funcionário (Account ou BusinessAccount): ");
            string employeeType = Console.ReadLine();

            Account employee;

            switch (employeeType)
            {
                case "Account":

                    employee = new Account();
                    employee.PrintData();
                    break;

                case "BusinessAccount":

                    employee = new BusinessAccounts();
                    ((BusinessAccounts) employee).PrintData();
                    break;

                default:
                    Console.WriteLine("Tipo de funcionário inválido.");
                    return;

            }

            while (true)
            {
                Console.WriteLine("Escolha uma opção:");
                Console.WriteLine("1. Depositar");
                Console.WriteLine("2. Retirar");
                Console.WriteLine("3. Saldo atual");

                if (employee is BusinessAccounts){

                    Console.WriteLine("4. Empréstimo");
                }

                Console.WriteLine("0. PARA SAIR");

                string action = Console.ReadLine();

                switch (action)
                {
                    case "1":
                        employee.deposit(employee.Balance);
                        
                        break;

                    case "2":
                        employee.WithDraw(employee.Balance);

                        break;

                    case "3":
                        Console.WriteLine($"Saldo atual : {employee.Balance}");
                        break;

                    case "4":
                        if (employee is BusinessAccounts)
                        {
                            ((BusinessAccounts)employee).Loan();
                        }
                        else
                        {
                            Console.WriteLine("Opção inválida para este tipo de funcionário.");
                        }
                        break;

                    case "0":
                        return;

                    default:
                        Console.WriteLine("Opção inválida. Tente novamente.");
                        break;

                }
            }
        }
    }
}
