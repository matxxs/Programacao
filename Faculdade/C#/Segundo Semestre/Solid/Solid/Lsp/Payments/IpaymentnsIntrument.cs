using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lsp.Payments
{
    internal interface IpaymentnsIntrument
    {
        void Validate();
        void CollectPayment();

    }
}
