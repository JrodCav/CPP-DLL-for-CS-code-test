using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace TestDLLOut
{
    internal class Program
    {
        [DllImport("DatabaseLink.dll")] public static extern IntPtr Create1(string type);
        [DllImport("DatabaseLink.dll")] public static extern IntPtr Create2(string type, string source);
        [DllImport("DatabaseLink.dll")] public static extern IntPtr Create3(string type, string source, string password);

        [DllImport("DatabaseLink.dll")] public static extern string getType(IntPtr c);
        [DllImport("DatabaseLink.dll")] public static extern string getSource(IntPtr c);
        [DllImport("DatabaseLink.dll")] public static extern void setSource(IntPtr c, string source);
        [DllImport("DatabaseLink.dll")] public static extern string getPassword(IntPtr c);
        [DllImport("DatabaseLink.dll")] public static extern void setPassword(IntPtr c, string password);

        static void Main(string[] args)
        {
            IntPtr c = Create1("MySQL");

            IntPtr c2 = Create2("MSAccess", "not here");

            IntPtr c3 = Create3("MySQL", "somewhere", "password");

            setSource(c, "source");
            setPassword(c, "password");

            Console.WriteLine(getType(c));
            Console.WriteLine(getSource(c));
            Console.WriteLine(getPassword(c));
            Console.WriteLine("Hello");
        }
    }
}
