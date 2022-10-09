ListNode head = null;
    ListNode previous = null;
    
    if(list1 == null && list2 != null)
    {
        return list2;
    }

    if(list2 == null && list1 != null)
    {
        return list1;
    }

    while (list1 != null && list2 != null)
    {
        ListNode node = new ListNode();

        if(list1.val < list2.val)
        {
           node.val = list1.val;
           list1 = list1.next;
        }
        else
        {
            node.val = list2.val;
            list2 = list2.next;
        }

        if(head == null)
        {
            head = node;
        }
        else
        {
            previous.next = node;
        }

        previous = node;
    }

    while (list1 != null && previous != null)
    {
        ListNode node = new ListNode(list1.val);
        previous.next = node;
        previous = node;
        list1 = list1.next;
    }

    while (list2 != null && previous != null)
    {
        ListNode node = new ListNode(list2.val);
        previous.next = node;
        previous = node;
        list2 = list2.next;
    }
    

    return head;
