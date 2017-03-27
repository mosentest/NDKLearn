package com.moziqi.ndklearn;

/***
 * http://www.cnblogs.com/yejiurui/p/3476565.html
 * 
 * @author Administrator
 *
 */
public class JniTest {

	private int testsum = 2;

	public static native String AddStr(String strA, String strB);

	public static native int AddInt(int a, int b);

	public static native int setArray(int[] a, String[] b, float[] c, double[] d);

	native int setArrayObject(int[] a, String[] b, float[] c, double[] d);

	native String setObject(Student stu);

	public int getTestsum() {
		return testsum;
	}

}
