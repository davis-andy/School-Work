//Author: Andy Davis
//Date: 9/10/2020
//Assignment: Methods: Area of Regular Polygon Assignment
//Class: Java CIS 016

package Methods_AreaofPolygonPackage;

/* Import libraries */
import java.util.*;
import java.lang.Math;

public class AreaofPolygon {
	
	/** Checks to see if the user entered a valid integer */
	static int checkNumberSides(Scanner scan) {
		int n;
		do 
		{
			System.out.print("Enter the number of sides: ");
			//Is the input a valid number?
			while (!scan.hasNextInt())
			{
				System.out.print("That is not a valid number. ");
				System.out.print("Enter the number of sides: ");
				scan.next();
			}
		n = scan.nextInt();
		//Is the input greater than 0?
		if (n <= 0) System.out.print("That is not a valid number. ");
		} while (n <= 0);

		return n;
	}
	
	/** Checks to see if the user entered a valid integer */
	static double checkSide(Scanner scan) {
		double side;
		do 
		{
			System.out.print("Enter the side: ");
			//Is the input a valid number?
			while (!scan.hasNextDouble())
			{
				System.out.print("That is not a valid number. ");
				System.out.print("Enter the side: ");
				scan.next();
			}
		side = scan.nextDouble();
		//Is the input greater than 0?
		if (side <= 0) System.out.print("That is not a valid number. ");
		} while (side <= 0);

		return side;
	}

	/** Calculate area of a polygon function */
	public static double area(int n, double side) {
		//Make Pi a constant for ease
		final double PI = Math.PI;
		
		//Calculate numerator
		double numerator = n * Math.pow(side, 2);
		//Calculate denominator
		double denominator = 4 * Math.tan(PI/n);
		
		//Calculate area
		double area = numerator/denominator;
		
		return area;
	}
	
	/** Main function */
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n;
		double side;
		
		/* Ask user for number of sides and side length */
		n = checkNumberSides(input);
		side = checkSide(input);
		
		/* Final output */
		System.out.println("The area of the polygon is " + area(n, side));
	}

}
