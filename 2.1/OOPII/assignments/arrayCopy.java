public class arrayCopy {
	public static int[] arrayCpy(int[] numArray) {
		int[] arrayDup = new int[numArray.length];

		for (int i = 0; i < numArray.length; i++)
			arrayDup[i] = numArray[i];
		return arrayDup;
	}

	public static void main(String[] args) {
		int[] numA = { 1, 2, 3, 4, 5 };
		int[] numArray = arrayCpy(numA);

		for (int i = 0; i < numArray.length; i++) {
			System.out.println(numArray[i]);
		}
	}
}
