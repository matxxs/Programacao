using System;
using System.Text;

namespace EditorHTML
{
    public static class Editor
    {
        public static void Show()
        {
            Console.Clear();
            Console.BackgroundColor = ConsoleColor.Black;
            Console.ForegroundColor = ConsoleColor.Yellow;
            Console.Clear();
            Console.WriteLine("MODO EDITOR");
            Console.WriteLine("------------");
            Star();
        }
        
        public static void Star()
        {
            var file = new StringBuilder();

            do{

                file.Append(Console.ReadLine());
                file.Append(Environment.NewLine);         
            }while(Console.ReadKey().Key != ConsoleKey.Escape);
        
            Console.WriteLine("----------------");
            Console.WriteLine(" Deseja salvar o arquivo? (sim/nao): ");
            string choice = Console.ReadLine().Substring(0,3).ToLower();

             if(choice == "sim")
                Console.WriteLine("Usuario deseja salvar o arquivo");
                //SaveFile();
                
            if(choice == "nao")
                Console.WriteLine("Arquivo excluido");

            Viewer.Show(file.ToString());
        }
    }
}