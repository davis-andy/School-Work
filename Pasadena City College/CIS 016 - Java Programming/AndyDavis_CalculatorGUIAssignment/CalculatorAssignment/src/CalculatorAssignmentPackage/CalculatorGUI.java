package CalculatorAssignmentPackage;

import javafx.geometry.*;
import javafx.scene.control.*;
import javafx.scene.layout.*;
import javafx.scene.text.*;

public class CalculatorGUI extends Pane {
	double w = 280, h = 300;
	double bw = w/5, bh = h/8;
	double vg = 10, hg = 10;
	
	public CalculatorGUI() {
		drawCalc();
	}
	
	private void drawCalc() {
		// Create a grid pane and buttons.
		GridPane grid = new GridPane();
		Button bt1 = new Button("1");
		Button bt2 = new Button("2");
		Button bt3 = new Button("3");
		Button bt4 = new Button("4");
		Button bt5 = new Button("5");
		Button bt6 = new Button("6");
		Button bt7 = new Button("7");
		Button bt8 = new Button("8");
		Button bt9 = new Button("9");
		Button bt0 = new Button("0");
		Button btPlus = new Button("+");
		Button btMinus = new Button("-");
		Button btTimes = new Button("x");
		Button btDivide = new Button("÷");
		Button btEqual = new Button("=");
		Button btPeriod = new Button(".");
		Button btClear = new Button("C");
		Button btPercent = new Button("%");
		Button btSign = new Button("+/-");
		
		// Resize the buttons
		btClear.setPrefSize(bw, bh);
		btSign.setPrefSize(bw, bh);
		btPercent.setPrefSize(bw, bh);
		btDivide.setPrefSize(bw, bh);
		
		bt7.setPrefSize(bw, bh);
		bt8.setPrefSize(bw, bh);
		bt9.setPrefSize(bw, bh);
		btTimes.setPrefSize(bw, bh);
		
		bt4.setPrefSize(bw, bh);
		bt5.setPrefSize(bw, bh);
		bt6.setPrefSize(bw, bh);
		btMinus.setPrefSize(bw, bh);
		
		bt1.setPrefSize(bw, bh);
		bt2.setPrefSize(bw, bh);
		bt3.setPrefSize(bw, bh);
		btPlus.setPrefSize(bw, bh);
		
		bt0.setPrefSize((bw*2)+vg, bh);
		btPeriod.setPrefSize(bw, bh);
		btEqual.setPrefSize(bw, bh);
		
		// Set grid preferences
		grid.setVgap(vg);
		grid.setHgap(hg);
		grid.setLayoutY(60);
		grid.setLayoutX(10);
		
		// Add the buttons to the grid
		grid.add(btClear, 0, 0, 1, 1);
		grid.add(btSign, 1, 0, 1, 1);
		grid.add(btPercent, 2, 0, 1, 1);
		grid.add(btDivide, 3, 0, 1, 1);
		
		grid.add(bt7, 0, 1, 1, 1);
		grid.add(bt8, 1, 1, 1, 1);
		grid.add(bt9, 2, 1, 1, 1);
		grid.add(btTimes, 3, 1, 1, 1);
		
		grid.add(bt4, 0, 2, 1, 1);
		grid.add(bt5, 1, 2, 1, 1);
		grid.add(bt6, 2, 2, 1, 1);
		grid.add(btMinus, 3, 2, 1, 1);
		
		grid.add(bt1, 0, 3, 1, 1);
		grid.add(bt2, 1, 3, 1, 1);
		grid.add(bt3, 2, 3, 1, 1);
		grid.add(btPlus, 3, 3, 1, 1);
		
		grid.add(bt0, 0, 4, 2, 1);
		grid.add(btPeriod, 2, 4, 1, 1);
		grid.add(btEqual, 3, 4, 1, 1);
		
		// Create a Label
		Label myLabel = new Label("123,456,789");
		myLabel.setFont(Font.font("Courier",FontWeight.BOLD,FontPosture.REGULAR,20));
		myLabel.setStyle("-fx-border-color: blue;");
		myLabel.setPadding(new Insets(0, 5, 0, 0));
		myLabel.setAlignment(Pos.CENTER_RIGHT); // align text to the right side of the label.
		myLabel.setLayoutX(10);       // set the x location of the label
		myLabel.setLayoutY(10);       // set the y location of the label
		myLabel.setPrefSize(w-25, 20); // set the width and height of the label
		
		// Create a pane and add all the elements to the pane
		getChildren().addAll(myLabel, grid);
	}
	
}
