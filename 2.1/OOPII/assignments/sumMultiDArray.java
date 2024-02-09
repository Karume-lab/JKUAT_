public class sumMultiDArray {
	public static int sum2DArray(int[][] numArray) {
		int sum = 0;
		for (int i = 0; i < numArray.length; i++) {
			for (int j = 0; j < numArray[i].length; j++) {
				sum += numArray[i][j];
			}
		}
		return sum;
	}

	public static void main(String[] args) {
		int[][] numArray = {
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
		};
		System.out.println(sum2DArray(numArray));
	}
}
