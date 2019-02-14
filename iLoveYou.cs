/*
* I love you in C#
*/
using System;
					
public class Program
{
	public static void Main()
	{
		iLoveYou(true);
	}
	
	static void iLoveYou(bool loveIsTrue){
		while(loveIsTrue){
			Console.WriteLine("iLoveYou");
			//loveIsTrue = false; this never end baby
		}
	}
}