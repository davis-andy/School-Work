//Author: Andy Davis
//Date: 9/11/2020
//Assignment: Methods: 1D Arrays Assignment
//Class: Java CIS 016

package Arrays_1DPackage;

/* Import libraries */
import java.lang.Math;

public class Arrays_1D {
	
	/** Average numbers within array */
	static double averageArray(int[] arr) {
		double average;
		double sum = 0.0;
		
		for (int i = 0; i < arr.length; i++)
		{
			sum += arr[i];
		}
		
		average = sum / arr.length;
		
		return average;
	}
	
	/** Count the number of times a number appears */
	static void countNumbers(int[] arr)
	{
		int step = 0;
		int[] counter = new int[100];
		
		//Populate counter with 0
		for (int x = 0; x < counter.length; x++)
		{
			counter[x] = 0;
		}
		
		//Go through arr and count the times a number appears
		for (int i = 0; i < counter.length; i++)
		{
			for (int j = 0; j < arr.length; j++)
			{
				if (arr[j] == (i + 1)) counter[i] += 1;
			}
		}
		
		//Print out if number appears
		while (step < counter.length)
		{
			if (counter[step] < 1) continue;
			System.out.println("The number " + (step + 1) + " appears " + counter[step] + " times.");
			step++;
		}
	}

	/** Main function */
	public static void main(String[] args) {
		//Initiate array of 1000 numbers
		int[] intArr = new int[1000];
		
		//Populate array with random numbers between 1 and 100
		for (int i = 0; i < intArr.length; i++)
		{
			intArr[i] = ((int) (Math.random() * 100) + 1);
		}
		
		//Calculate and print out the average of the numbers in the array to 2 decimals
		System.out.printf("The average of the numbers in the array is %.2f \n", averageArray(intArr));
		
		//Count the number of times a number appears in the array
		countNumbers(intArr);
	}

}
