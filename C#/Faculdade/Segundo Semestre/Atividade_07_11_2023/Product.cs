using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace Atividade_07_11_2023
{
    class Product
    {
        public string Name { get; set; }
        public double Price {  get; set; }
        public int Quantity { get; set; }


            public double TotalValue()
            {
                return Price * Quantity;
            }


    }
}
