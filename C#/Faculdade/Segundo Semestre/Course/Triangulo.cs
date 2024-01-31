using System;
using System.Collections.Generic;

namespace Course
{
    class Triangulo
    {
        public double A;
        public double B;
        public double C;

        public double Area()
        {
            double parametro = (A + B + C) / 2;
            double raiz = Math.Sqrt(parametro * (parametro - A) * (parametro - B) * (parametro - C));
            return raiz;
        }
    }
}
