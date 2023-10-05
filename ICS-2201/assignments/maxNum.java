package assignments;

public class maxNum {
	public static int findMaxNum(int[] numArray) {
		int max = numArray[0];
		for (int i = 1; i < numArray.length; i++) {
			if (numArray[i] > max) {
				max = numArray[i];
			}
		}
		return max;
	}

	public static void main(String[] args) {
		int[] numArray = { 1, 2, 3, 4, 5 };
		System.out.println(findMaxNum(numArray));
	}
}
