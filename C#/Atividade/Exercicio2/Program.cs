namespace Exercicio2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Dados do primeiro funcionário: ");
            Employee employeeOne = GetData.Data();

            Console.WriteLine("Dados do segundo funcionário: ");
            Employee employeeTwo = GetData.Data();

            double averageSalary = (employeeOne.Salary + employeeTwo.Salary) / 2;

            Console.WriteLine("Salário médio dos funcionários: " + averageSalary);
        }
    }
}