using System;

namespace ChainOfResponsibility.Middlewares
{
    class CheckPermissionMiddleware : Middleware
    {
        public override bool Check(string email, string password)
        {
            if (email.Equals("master@hcode.com.br"))
            {
                Console.WriteLine("Seja bem-vindo administrador.");
                return true;
            }

            Console.WriteLine("Seja bem-vindo!");

            return CheckNext(email, password);
        }
    }
}
