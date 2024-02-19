using Bridge.Platforms;
using Bridge.Transmissions;
using System;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bridge
{
    class Program
    {
        static void StartLive(IPlatform platform)
        {
            Console.WriteLine("Aguarde...");

            Live live = new Live(platform);

            live.Broadcasting();
            live.Result();
        }

        static void StartLiveAdvanced(IPlatform platform)
        {
            Console.WriteLine("Aguarde...");

            AdvancedLive live = new AdvancedLive(platform);

            live.Broadcasting();
            live.Subtitle();
            live.Comments();
            live.Result();
        }

        static void Main(string[] args)
        {

            StartLiveAdvanced(new YouTube());
            StartLiveAdvanced(new Facebook());
            StartLiveAdvanced(new TwitchTV());

            Console.ReadLine();

        }
    }
}