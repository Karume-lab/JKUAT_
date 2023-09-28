import java.util.Scanner;

class Intro {
	public static void strConcat(String src, String dest){
		System.out.println(src + " " + dest);
	}
	public static void sum2Nums(int num1, int num2){
		System.out.println(num1 + num2);
	}
	public static void crements(int num){
		System.out.println(num);
		System.out.println(num++);
		System.out.println(num);
		System.out.println(++num);
		System.out.println(num--);
		System.out.println(--num);
	}
	public static void bmi(){
		try (Scanner promptVal = new Scanner(System.in)) {
			int BMI = 24;
			System.out.println("Enter height: ");
			float height = promptVal.nextFloat();
			System.out.println("Enter weight: ");
			float weight = promptVal.nextFloat();
			float bmiVal = weight / (height * height);

			if (bmiVal <= BMI) {
				System.out.println("Normal: " + bmiVal);
			} else {
				System.out.println("Abnormal: " + bmiVal);
			}
		}
	}
	public static void switchStatements(){
		switch ("name") {
			case "name":
				System.out.println("1");
				break;
			case "q":
				System.out.println("2");
				break;
			default:
				break;
		}
	}
	public static void main(String[] args) {
		/*
		// string concatenation
		String firstName = "Karume";
		String lastName = "Daniel";
		strConcat(firstName, lastName);

		
		// Sum of two numbers
		sum2Nums(10, 2);

		// Increment and Decrement
		int num = 10;
		crements(num);

		// If Statements
		bmi();
		*/

		switchStatements();

	}
}
