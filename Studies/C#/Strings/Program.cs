using System;
using System.Text;
using System.Threading;

namespace Strings
{
    class Program 
    {
        static void Main(string[] args)
        {
            Console.Clear();
            StringBuilder();
        }
        
        static void Guids()
        {
            var id = Guid.NewGuid();
            id.ToString();

            id = new Guid("94ff9fe0-86b5-4cc1-805b-866fbb132846");
            Console.WriteLine(id.ToString().Substring(0, 8));

            id = new Guid();
            Console.WriteLine(id.ToString().Substring(0, 8));
        }

        static void InterpolacaoStrings()
        {
            var texto = "Testando " + " ";
            var texto2 = $"Testando {texto}";
            var texto3 = $"Testando {1 + 1}";
            var texto4 = @"\Testando \\";
            Console.WriteLine(texto);
            Console.WriteLine(texto2);
            Console.WriteLine(texto3);
            Console.WriteLine(texto4);
        }

        static void ComparacaoStrings()
        {
            var textoCompareTo = "Testando";

            Console.WriteLine(textoCompareTo.CompareTo("Testando")); // Retorna 0 - Verdadeiro
            Console.WriteLine(textoCompareTo.CompareTo("testando")); // Retorna 1
            Console.WriteLine(textoCompareTo.CompareTo("")); // Retorna 1
            Console.WriteLine(textoCompareTo.CompareTo(null)); // Retorna 1

            var texto = "Este é um texto de teste";

            Console.WriteLine(texto.Contains("teste")); // true
            Console.WriteLine(texto.Contains("Teste")); // false
            // Ignorar o Case sentive do C#
            Console.WriteLine(texto.Contains("Teste", StringComparison.OrdinalIgnoreCase)); // true
            // Console.WriteLine(texto.Contains(null)); // ERRO
        }

        static void StartsWithEndsWith()
        {
            // Eles vão fazer a compração e retorna TRUE or FALSE
            var text = "Este texto é um teste";

           Console.WriteLine("\n StartsWith \n");
           Console.WriteLine(text.StartsWith("Este")); // true
           Console.WriteLine(text.StartsWith("este")); // false
           Console.WriteLine(text.StartsWith("text")); // false     
           Console.WriteLine(text.StartsWith("este", StringComparison.OrdinalIgnoreCase)); // true

           Console.WriteLine("\n EndsWith \n");
           Console.WriteLine(text.EndsWith("Teste")); // true
           Console.WriteLine(text.EndsWith("teste")); // false
           Console.WriteLine(text.EndsWith("exmplo")); // false
           Console.WriteLine(text.EndsWith("teste", StringComparison.OrdinalIgnoreCase)); // false
        }

        static void Equals()
        {
            // Equals faz a comparação para ver o Texto e igual retornando True or False
            // Equal se estende para outro tipo de dado
            var text = "Este texto é um teste";

            Console.WriteLine(text.Equals("Este texto é um teste")); // true
            Console.WriteLine(text.Equals("este texto é um teste")); // false
            Console.WriteLine(text.Equals("Este texto é um teste", StringComparison.OrdinalIgnoreCase)); // true
        }

        static void Indices()
        {
            // Indice indica a posição de caractere ou item dentro um array
            var text = "Este texto é teste";

            Console.WriteLine(text.IndexOf("é"));
            Console.WriteLine(text.LastIndexOf("t"));
        }

        static void MetodosAdicionais()
        {
            var text = "Este texto é teste";

            Console.WriteLine(text.ToLower()); // Converte Minúsculo
            Console.WriteLine(text.ToUpper()); // Converte Maiúsculo

            //Inserir caractere
            Console.WriteLine(text.Insert(5, "AQUI "));

            //Remover caractere
            Console.WriteLine(text.Remove(11, 1));

            //Quantidade de caractere que tem na frase
            Console.WriteLine(text.Length);
        }
    
        static void ManipularStrings()
        {
            //Trocar caractere
            Console.WriteLine("\n ======= REPLACE =======");
            var textReplace = "Este texto é um teste";
            Console.WriteLine(textReplace.Replace("Este", "Isto"));
            Console.WriteLine(textReplace.Replace("texto", "exemplo"));
            Console.WriteLine(textReplace.Replace("xxxx", "exemplo")); // xx e false então não aparece no Broowse 

            //Dividir
            Console.WriteLine("\n ======= SPLIT ======= \n");
            var textDivisao = "Este é um texto, de teste";
            var divisao = textDivisao.Split(',');
            Console.WriteLine(divisao[0]);
            Console.WriteLine(divisao[1]);
            // Console.WriteLine(divisao[2]); // ERRO

            Console.WriteLine("\n ======= SUBSTRINGS =======");
            var textSubstrings = "Este texto é um teste";
            var resultado = textSubstrings.Substring(5, 5);
            Console.WriteLine(textSubstrings.Substring(0, 5));
            Console.WriteLine(textSubstrings.Substring(textSubstrings.LastIndexOf(" ") + 1, 5));
            Console.WriteLine(resultado);

            //Limpar espaço do começo e do fim 
            Console.WriteLine("\n ======= TRIM =======");
            var textTrim =  "Este é           um texto de teste";
            Console.WriteLine(textTrim.Trim());

            textTrim = "       Este é um texto de teste             ";
            Console.WriteLine(textTrim.Trim());
        }

        static void StringBuilder()
        {
            var texto = new StringBuilder();
            texto.Append("Este");
            texto.Append("é");
            texto.Append("um");
            texto.Append(Environment.NewLine);
            texto.Append("texto");
            Console.WriteLine(texto.ToString());
        }
    }
}
