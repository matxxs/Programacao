using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercicio1
{
    public class GetUsers
    {
        public static User GetUser()
        {
            Console.Write("Nome: ");
            string name = Console.ReadLine();
            Console.Write("Idade: ");
            int age = int.Parse(Console.ReadLine());
            return new User(name, age);
        }
    }
}
