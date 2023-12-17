//Author: Andy Davis
//Date: 11/6/2020
//Assignment: Methods: Draw Something Assignment
//Class: Java CIS 016

package DrawSomethingAssignmentPackage;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.BorderPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;

public class DrawSomething extends Application {
	double w = 400, h = 400;
	
	@Override // Override the start method in the Application class
	public void start(Stage primaryStage) {
		// Import a ball with two eyes
		BallPane ball = new BallPane();
		
		// Draw a rectangle
		Pane paneL = new Pane();
		Rectangle l = new Rectangle();
		l.setHeight(h);
		l.setWidth(w/4);
		l.setFill(Color.CORNFLOWERBLUE);
		paneL.getChildren().add(l);
		
		// Draw one column
		Pane paneR = new Pane();
		Rectangle r = new Rectangle();
		r.setHeight(h);
		r.setWidth(w/4);
		r.setFill(Color.CORNFLOWERBLUE);
		paneR.getChildren().add(r);
		
		// Draw second column
		Pane pane = new Pane();
		Rectangle b = new Rectangle();
		b.setWidth(w);
		b.setHeight(25);
		b.setFill(Color.DARKGRAY);
		pane.getChildren().add(b);
		
		// Create a pane to hold the columns and rectangle
		BorderPane border = new BorderPane();
		border.setRight(paneR);
		border.setLeft(paneL);
		border.setBottom(pane);
		
		// Crate a pane to hold ball and others
		StackPane stack = new StackPane();
		stack.getChildren().addAll(border, ball);
		
		// Move everything with the window size
		border.widthProperty().addListener(ov ->
			b.setWidth(border.getWidth()));
		
		border.heightProperty().addListener(ov ->
			l.setHeight(border.getHeight()));
		
		border.heightProperty().addListener(ov ->
			r.setHeight(border.getHeight()));
		
		// Create a scene and place it in the stage
		Scene scene = new Scene(stack, w, h);
		primaryStage.setTitle("Draw Shapes"); // Set the stage title
		primaryStage.setMinWidth(100);
		primaryStage.setMinHeight(400);
		primaryStage.setScene(scene); // Place the scene in the stage
		scene.widthProperty().addListener(ov -> ball.setW(scene.getWidth()));
		primaryStage.show(); // Display the stage
		
		ball.requestFocus();
	}  
	/**
	 * The main method is only needed for the IDE with limited
	 * JavaFX support. Not needed for running from the command line.
	 */
	
	public static void main(String[] args) {
		launch(args);
	}
}

