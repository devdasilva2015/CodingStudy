﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;



namespace CSharp_LinkedLists
{
    //Definition for singly-linked list.
    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }

    public class Solution
    {
        public ListNode OddEvenList(ListNode head)
        {
            //check if empty
            if (head == null || head.next == null)
            {

                return head;
            }

            ListNode odd = head;    //set first link to be start of odds
            ListNode even = head.next;  //set sequential to be for evens
            ListNode evenHead = even;

            while (odd.next != null && even.next != null)
            {

                odd.next = even.next;   //point the number after even, skipping the even
                odd = odd.next;     //make that number the next odd in list
                even.next = odd.next;   //point to following even number
                even = even.next;   //asign it as squence to next even
            }

            odd.next = evenHead;    //set the evens to come after odds

            return head;
        }
    }


    public class OddsAndEvens
    {
        static void Main(string[] args)
        {
            ListNode OddsEvensToSort = new ListNode(1);
            //OddsEvens.Add(1);
            //OddsEvens.Add(2);
            //OddsEvens.Add(3);
            //OddsEvens.Add(2);
            //OddsEvens.Add(5);
            //OddsEvens.Add(5);
            //OddsEvens.Add(11);
            //OddsEvens.Add(8);
            //OddsEvens.Add(8);

            //OddsEvensToSort.OddEvenList(1);

        }
    }
}
