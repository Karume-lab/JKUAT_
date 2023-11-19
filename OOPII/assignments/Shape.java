/**
 * Shape
 */
public class Shape {
	public void draw() {
	}

	public float calculateArea() {
		return 0;
	}
}

class Circle extends Shape {
	private float radius;

	public void draw(float radius) {
		this.radius = radius;
		super.draw();
	}

	public float calculateArea() {
		return (float) (Math.PI * this.radius * this.radius);
	}
}

class Cylinder extends Shape {
	private float radius;
	private float height;

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
		this.radius = radius;
		this.height = height;
	}

	public float calculateArea() {
		return (float) ((2 * Math.PI * this.radius * this.radius) + (2 * Math.PI * this.radius * this.height));
	}
}
