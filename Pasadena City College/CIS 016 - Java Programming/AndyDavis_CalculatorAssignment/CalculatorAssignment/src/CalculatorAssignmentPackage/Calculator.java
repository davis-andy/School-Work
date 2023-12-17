//Author: Andy Davis
//Date: 11/18/2020
//Assignment: Calculator Assignment
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
		
		calc.bt1.setOnAction(e -> {
			calc.setLabel(1);
		});
		calc.bt2.setOnAction(e -> {
			calc.setLabel(2);
		});
		calc.bt3.setOnAction(e -> {
			calc.setLabel(3);
		});
		calc.bt4.setOnAction(e -> {
			calc.setLabel(4);
		});
		calc.bt5.setOnAction(e -> {
			calc.setLabel(5);
		});
		calc.bt6.setOnAction(e -> {
			calc.setLabel(6);
		});
		calc.bt7.setOnAction(e -> {
			calc.setLabel(7);
		});
		calc.bt8.setOnAction(e -> {
			calc.setLabel(8);
		});
		calc.bt9.setOnAction(e -> {
			calc.setLabel(9);
		});
		calc.bt0.setOnAction(e -> {
			calc.setLabel(0);
		});
		calc.btPlus.setOnAction(e -> {
			calc.add();
		});
		calc.btMinus.setOnAction(e -> {
			calc.subtract();
		});
		calc.btTimes.setOnAction(e -> {
			calc.multiply();
		});
		calc.btDivide.setOnAction(e -> {
			calc.divide();
		});
		calc.btEqual.setOnAction(e -> {
			calc.equals();
		});
		calc.btSign.setOnAction(e -> {
			calc.switchSign();
		});
		calc.btClear.setOnAction(e -> {
			calc.resetLabel();
		});
		
		
		calc.setOnKeyPressed(e -> {
			switch(e.getCode()) {
			case NUMPAD0:
			case DIGIT0:
				calc.setLabel(0);
				break;
			case NUMPAD1:
			case DIGIT1:
				calc.setLabel(1);
				break;
			case NUMPAD2:
			case DIGIT2:
				calc.setLabel(2);
				break;
			case NUMPAD3:
			case DIGIT3:
				calc.setLabel(3);
				break;
			case NUMPAD4:
			case DIGIT4:
				calc.setLabel(4);
				break;
			case NUMPAD5:
			case DIGIT5:
				calc.setLabel(5);
				break;
			case NUMPAD6:
			case DIGIT6:
				calc.setLabel(6);
				break;
			case NUMPAD7:
			case DIGIT7:
				calc.setLabel(7);
				break;
			case NUMPAD8:
			case DIGIT8:
				calc.setLabel(8);
				break;
			case NUMPAD9:
			case DIGIT9:
				calc.setLabel(9);
				break;
			default:
				break;
			}
		});
		
		
		
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
