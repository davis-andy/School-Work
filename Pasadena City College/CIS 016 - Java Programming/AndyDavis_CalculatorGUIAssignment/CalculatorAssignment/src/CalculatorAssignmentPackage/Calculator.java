//Author: Andy Davis
//Date: 11/11/2020
//Assignment: Calculator GUI Part 1 Assignment
//Class: Java CIS 016

package CalculatorAssignmentPackage;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class Calculator extends Application {
	@Override
	public void start(Stage primaryStage) throws Exception {
		double w = 280, h = 300;
		CalculatorGUI calc = new CalculatorGUI();
		
		// Create the scene and add to the stage
		Scene scene = new Scene(calc,w,h);
		primaryStage.setTitle("Calculator"); // Set the stage title
		primaryStage.setScene(scene); // Place the scene in the stage
		primaryStage.setMinWidth(w+10);
		primaryStage.setMaxWidth(w+10);
		primaryStage.setMinHeight(h+40);
		primaryStage.setMaxHeight(h+40);
		primaryStage.show(); // Display the stage
	}
	
	public static void main(String[] args)
	{
		launch(args);
	}

}
