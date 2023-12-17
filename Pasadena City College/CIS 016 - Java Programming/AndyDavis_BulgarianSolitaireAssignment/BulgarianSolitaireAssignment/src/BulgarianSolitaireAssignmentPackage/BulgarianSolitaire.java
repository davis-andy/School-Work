//Author: Andy Davis
//Date: 10/15/2020
//Assignment: Bulgarian Solitaire Assignment
//Class: Java CIS 016

package BulgarianSolitaireAssignmentPackage;

/* Import libraries */
import java.util.*;

public class BulgarianSolitaire {
	/* Class variables */
	ArrayList<ArrayList<Integer>> seen = new ArrayList<ArrayList<Integer>>();
	ArrayList<Integer> piles = new ArrayList<Integer>();
	int deck;
	
	/** Constructor */
	public BulgarianSolitaire() {
		//Set up to ask for number of cards in deck
		Scanner input = new Scanner(System.in);
		do 
		{
			System.out.print("How many cards do you have? ");
			//Is the input a valid number?
			while (!input.hasNextInt())
			{
				System.out.print("That is not a valid number. ");
				System.out.print("How many cards do you have? ");
				input.next();
				}
			deck = input.nextInt();
			//Is the input greater than 0?
			if (deck <= 0) System.out.print("That is not a valid number. ");
			} while (deck <= 0);
		input.close();
	}
	
		
	
	/** Separate deck into piles of random numbers */
	public void setUpList(ArrayList<Integer> cards) {
		Random rand = new Random();
		//Variable counting counts used
		int used = 0;
		boolean cardsLeft = true;
		
		//Add random number of cards to different piles from remaining cards
		while (cardsLeft) {
			if (used < deck) cards.add(rand.nextInt((deck+1)-used));
			else cardsLeft = false;
			
			used += cards.get(cards.size()-1);
		}
	}
	
	/** Remove empty piles and sort the piles */
	public void removeSort(ArrayList<Integer> piles) {
        //Remove any zeros
		for (int j = 0; j < piles.size(); j++) {
            if (piles.get(j) == 0) {
                piles.remove(j);
                j--;
            }
        }
        
        //Sort the list
        Collections.sort(piles);
        
        //Print out sorted list step
		System.out.println(piles);
    }
	
	/** Take one card from each pile and create a new pile with those cards */
	public void createNewPile(ArrayList<Integer> piles) {
		//Remove one card from each pile
		for (int i = 0; i < piles.size(); i++) {
			int value = piles.get(i);
			piles.set(i, value-1);
		}
		
		//Add a new pile from the cards removed
		piles.add(piles.size());
		
		//Print out sorted list step
		//System.out.println(piles);
	}
	
	/** Check if the piles create a Triangle Number */
	public boolean isNotTriangle(ArrayList<Integer> piles) {
		for (int i = 0; i < piles.size(); i++) {
			if (piles.get(i) != i + 1) return true;
		}
		
		return false;
	}
	
	/** Check if pile sequence already appeared */
	public boolean hasAppeared(ArrayList<Integer> piles) {
		ArrayList<Integer> copy = new ArrayList<Integer>();
		for (int i = 0; i < piles.size(); i++) {
			copy.add(piles.get(i));
		}
		
		for (int i = 0; i < seen.size(); i++) {
			if (seen.get(i).equals(piles)) return true;
		}
		
		seen.add(copy);
		
		return false;
	}
	
	
	/** Play the game */
	public void play() {
		//Variables to help the game
		boolean appeared;
		boolean triangle;
		//Show what step the game is on
		int step = 0;
		
		//Create initial piles
		System.out.println("\nInitial piles:");
		setUpList(piles);
		System.out.print("[" + step + "]:\t");
		removeSort(piles);
		System.out.println("\nLet the game begin!");
		
		//Loop through game
		while (true) {
			step++;
			createNewPile(piles);
			System.out.print("[" + step + "]:\t");
			removeSort(piles);
			
			//Check if game should continue
			triangle = isNotTriangle(piles);
			appeared = hasAppeared(piles);
			if ( appeared || triangle == false ) break;
		}
		
		//Game over
		System.out.print("\nGame Over: ");
		if (appeared) System.out.println("Card sequence has appeared before!");
		else System.out.println("Cards are a triangle number!");
	}

}
