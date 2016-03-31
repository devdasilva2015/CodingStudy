//using System;
//using namespace std;
//#include <iostream>
//
////Definition for singly-linked list.
//public class ListNode {
//	public int val;
//	public ListNode next;
//	public ListNode(int x) { val = x; }
//}
//
//public class Solution {
//	public ListNode OddEvenList(ListNode head) {
//
//		//check if empty
//		if(head == null || head.next == null) {
//
//			return head;
//		}
//
//		ListNode odd = head;	//set first link to be start of odds
//		ListNode even = head.next;	//set sequential to be for evens
//		ListNode evenHead = even;
//
//		while (odd.next != null && even.next != null) {
//
//			odd.next = even.next;	//point the number after even, skipping the even
//			odd = odd.next;		//make that number the next odd in list
//			even.next = odd.next;	//point to following even number
//			even = even.next;	//asign it as squence to next even
//		}
//
//		odd.next = evenHead;	//set the evens to come after odds
//
//		return head;
//	}
//}



//------------------------------------------------------------------------


//using System;
//using System.Text;
//using System.Collections.Generic;

//class Example
//{
//	public static void Main()
//	{
//		// Create the link list.
//		string[] words = { "the", "fox", "jumped", "over", "the", "dog" };
//		LinkedList<string> sentence = new LinkedList<string>(words);
//		Display(sentence, "The linked list values:");
//	}
//
//	private static void Display(LinkedList<string> words, string test)
//	{
//		Console.WriteLine(test);
//		foreach(string word in words)
//		{
//			Console.Write(word + " ");
//		}
//	}
//}