/**
 * Shape
 */
public class Shape {
	public void draw() {
	}

	public float calculateArea() {
		return 0;
	}

	public static void main(String[] args) {
		Circle donut = new Circle(7);
		Cylinder bucket = new Cylinder(14, 10);
		System.out.println(donut.calculateArea());
		System.out.println(bucket.calculateArea());
	}
}

class Circle extends Shape {
	private float radius;

	Circle(float radius) {
		this.radius = radius;
	}

	public void draw(float radius) {
		System.out.println("You have drawn a circle!");
	}

	public float calculateArea() {
		return (float) (Math.PI * this.radius * this.radius);
	}
}

class Cylinder extends Shape {
	private float radius;
	private float height;

	Cylinder(float radius, float height) {
		this.radius = radius;
		this.height = height;
	}

	public float getHeight() {
		return height;
	}

	public float getRadius() {
		return radius;
	}

	public void setRadius(float radius) {
		this.radius = radius;
	}

	public void setLength(float height) {
		this.height = height;
	}

	public void draw(float radius, float height) {
		System.out.println("You have drawn a cylinder!");
	}

	public float calculateArea() {
		return (float) ((2 * Math.PI * this.radius * this.radius) + (2 * Math.PI * this.radius * this.height));
	}
}
