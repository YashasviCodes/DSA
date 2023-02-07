// (✔️)Solved - Odd Even Linked List - 1 approach 

// leetcode link : https://leetcode.com/problems/odd-even-linked-list/description/

/* ✔️⭐Approach - 1 (in place, changing links)
                explanation :- 

            ->// Main function

                step 0 : exception case
                step 1 : since we will be dividing the linked list into 2 parts, so we will need to store the 2 heads of the linked lists, for future use
                step 2 : also we will be traversing the whole 2 lists, and change the 'next' links so , lets save 2 pointers to nodes for that purpose
                step 3 : lets change the links while our temp nodes are not null
                step 4 : lets run a while the linked lists temp1 , temp2 are both non null
                    step 5 : after linking the next odd node, make sure that if the 'next' node is null, then break then loop
                    step 6 :  updating pointers, updating tails
                    step 7 :  when the temp1's next is null, that means now we need to join the 2 linked lists, and break this loop
                step 8 : when our link thing is done, we will join the end of list1 to the start of list2 and return the merged list
                

        ✅T : O(N)
        ✅S : O(1)

        ☑️solved at leetcode : leetcode link : https://leetcode.com/problems/odd-even-linked-list/description/


    */

