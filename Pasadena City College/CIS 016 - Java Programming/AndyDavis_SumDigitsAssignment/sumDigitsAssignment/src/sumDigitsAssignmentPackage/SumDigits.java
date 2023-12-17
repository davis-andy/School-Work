//Author: Andy Davis
//Date: 9/3/2020
//Assignment: Sum Digits Assignment
//Class: Java CIS 016

package sumDigitsAssignmentPackage;

/* Import libraries */
import java.util.Scanner;

public class SumDigits {
	
	/** Checks to see if the user entered a valid integer */
	static long checkDigits(Scanner scan) {
		long digits;
		do 
		{
			System.out.print("Please enter a positive number: ");
			//Is the input a valid number?
			while (!scan.hasNextLong())
			{
				System.out.println("That is not a valid number.");
				System.out.print("Please enter a positive number: ");
				scan.next();
			}
		digits = scan.nextLong();
		} while (digits <= 0);

		return digits;
	}
	

	/** Sum all the digits from user input */
	static int sumDigits(long n) {
		int sum = 0;
		
		while (n > 0) {
			sum += n % 10;
			n = n / 10;
		}
		return sum;
	}
	
	
	/** Main function */
	public static void main(String[] args) {
		/* Function variables */
		Scanner input = new Scanner(System.in);
		long digits;
		
		/* Asks user for a positive number */
		digits = checkDigits(input);
		
		/* Final output */
		System.out.println("Sum of the digits in " + digits + " is: " + sumDigits(digits));
	}

}
