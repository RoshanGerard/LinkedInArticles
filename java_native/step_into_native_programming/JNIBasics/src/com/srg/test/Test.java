package com.srg.test;

import com.srg.mynatives.MyNative;

/**
 * 
 * @author Roshan Gerard Bolonna
 *
 */
public class Test {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		/*
		 * Load the DLL at the startup, before invoking any native methods. 
		*/
		System.loadLibrary("StepIntoJNI");
		
		MyNative myn = new MyNative();
		double total = myn.getTotal(50, 45.54);
		System.out.println("Natively Performed Calculation: "+total);

	}

}
