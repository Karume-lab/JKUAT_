package swing;


import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.FlowLayout;

/**
 * intro
 */
public class HelloWorld {
	public static JFrame frame = new JFrame("Introduction");
	public static JLabel label = new JLabel("Hello World");

	public static void displayHelloWorld() {
		HelloWorld.frame.setVisible(true);
		HelloWorld.frame.setSize(100, 100);
		HelloWorld.frame.setLayout(new FlowLayout());
		HelloWorld.frame.add(label);
	}

	public static void main(String[] args) {
		HelloWorld.displayHelloWorld();
	}
}
