package com.moziqi.ndklearn;

/***
 * http://www.cnblogs.com/yejiurui/p/3476565.html
 * 
 * @author Administrator
 *
 */
public class JniTest {
	static public native String AddStr(String strA, String strB);

	static public native int AddInt(int a, int b);
}
