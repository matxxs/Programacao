using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio2
{
    public class GetData
    {
        public static Employee Data()
        {
            Console.Write("Nome: ");
            string name = Console.ReadLine();
            Console.Write("Salário: ");
            double salary = double.Parse(Console.ReadLine());
            return new Employee(name ,salary);
        }
    }
}
