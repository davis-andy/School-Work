//Author: Andy Davis
//Date: 9/3/2020
//Assignment: If Else Assignment
//Class: Java CIS 016

package IfElseAssignment01Package;

/* Import libraries */
import java.util.Scanner;

public class WhichCoaster {
	
	/** Checks to see if the user entered a valid Age */
	static int checkAge(Scanner scan) {
		int age;
		do 
		{
			System.out.print("What is your age?  ");
			//Is the input a number?
			while (!scan.hasNextInt())
			{
				System.out.println("\nThat is not a valid age.");
				System.out.print("What is your age?  ");
				scan.next();
			}
		age = scan.nextInt();
		//Is the input greater than 0?
		if (age <= 0) System.out.println("\nThat is not a valid age.");
		} while (age <= 0);

		return age;
	}
	
	/** Checks to see if the user entered a valid Weight */
	static int checkWeight(Scanner scan) {
		int weight;
		do 
		{
			System.out.print("What is your weight?  ");
			//Is the input a number?
			while (!scan.hasNextInt())
			{
				System.out.println("\nThat is not a valid weight.");
				System.out.print("What is your weight?  ");
				scan.next();
			}
		weight = scan.nextInt();
		//Is the input greater than 0?
		if (weight <= 0) System.out.println("\nThat is not a valid weight.");
		} while (weight <= 0);

		return weight;
	}
	
	/** Main function */
	public static void main(String[] args) {
		/* Function variables */
		Scanner input = new Scanner(System.in);
		int age = -1;
		int weight = -1;
		String color;
		
		/* Asks for user's age and weight */
		age = checkAge(input);
		System.out.print("\n");
		weight = checkWeight(input);
		
		/* Determines which coaster color is appropriate */
		if (age <= 10)
		{
			if (weight < 80) color = "black";
			else if (weight <= 200) color = "green";
			else color = "yellow";
		}
		else if (age <= 20)
		{
			if (weight < 80) color = "silver";
			else if (weight <= 200) color = "red";
			else color = "purple";
		}
		else color = "pink";
		
		/* Final output */
		System.out.printf("\nThis person needs to ride the %s roller coaster", color);
	}

}
