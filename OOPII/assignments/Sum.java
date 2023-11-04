package assignments;

public class Sum {
	public static int sum(int[] numArray) {
		int newSum = 0;
		int i = 0;
		int[] numArrayCpy = new int[numArray.length + 1];

		for (; i < numArray.length; i++)
			numArrayCpy[i] = numArray[i];
		numArrayCpy[i] = 120;

		for (int j = 0; j < numArrayCpy.length; j++)
			newSum += numArrayCpy[j];
		return newSum;
	}

	public static void main(String[] args){
		int[] numArray = {1, 2, 3, 4, 5};
		System.out.println(sum(numArray));
	}
}
