package DrawSomethingAssignmentPackage;

import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;

public class BallPane extends Pane {
	//Ball pane's width and height
	public double w = 400, h = 400;
	//Initialize parameters for the face
	private double radius = 40;
	
	/** Construct the default ball plane **/
	public BallPane() {
		drawFace();
	}
	
	
	public void setW(double w) {
		this.w = w;
		drawFace();
	}
	
	public void setH(double h) {
		this.h = h;
		drawFace();
	}
	
	public double getRadius() {
		return this.radius;
	}
	
	
	
	/** Draw the face **/
	private void drawFace() {
		double x = w/2;
		double y = h/3;
		//Initialize parameters for the eyes
		double radEye = radius / 8;
		double centerEyeY = y - (2*radEye);
		
		//Draw face
		Circle face = new Circle(x, y, radius);
		Circle eye1 = new Circle(x-(radEye+8), centerEyeY, radEye);
		Circle eye2 = new Circle(x+(radEye+8), centerEyeY, radEye);
		
		face.setFill(Color.AZURE);
		face.setStroke(Color.BLACK);
		face.setStrokeWidth(0.2);
		
		eye1.setFill(Color.BLACK);
		eye2.setFill(Color.BLACK);
		
		getChildren().clear();
		getChildren().addAll(face, eye1, eye2);
	}
	
}
