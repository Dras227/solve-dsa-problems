#include<bits/stdc++.h>
using namespace std;
//#define int long long
//#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
   Dungeon_Master();
  IOS;
   cin.tie(NULL);
  //   int t;cin >>t;while(t--)
        solve();
    return 0;
}
struct node
{
    int info;
    struct node * link;
};

typedef struct node *NODE;

NODE get_node()
{
    NODE a;
    a = (NODE) malloc(sizeof(struct  node));

    if(a == NULL)
    {
        cout << "INSUFFICIENT SPACE\n";
        return NULL;
    }

    return a;
}

NODE insertAtTail(NODE tail,int item)
{
    NODE temp,cur;

    temp = get_node();
    temp->info = item;
    temp->link = NULL;
    if(tail == NULL)
    {
        return temp;
    }

    tail->link = temp;
    temp->link = NULL;
    return temp;
}
NODE insertAtHead(NODE head,int item)
{
    NODE temp;
    //CREATING A NEW NODE
    temp = get_node();
    // IF HEAD IS INITIALIZE THE LINK TO NULL
    /*if(head ==NULL)
    {
        head->info = item;
        head->link = NULL;
        return head;
    }*/
    temp->info = item;
    temp->link = head;
    //cout << temp-> info << endl;
    return temp;

}
void print(NODE head)
{
    NODE cur;
    if(head==NULL) return ;
    cur = head;

    while(cur!= NULL)
    {
        cout << cur -> info << " ";
        cur = cur ->link;
    }
    //cout << endl;
    return ;
}

NODE kReverse(NODE head,int k)
{
    if(head==NULL || head->link==NULL) return NULL;

    NODE cur=head,prev=NULL,next=NULL;
    int t = k;
    while(cur!=NULL and t>0)
    {   
        //1.
        // Save the next NODE
        next = cur -> link;
        //2.
        //Point the current NODE to the previous NODE
        cur->link = prev;
        //3.
        //make previous current while moving to next next
        prev = cur;
        //4.
        //make cur go to the next node
        cur = next;t-=1;

    }

    if(next!=NULL) head->link = kReverse(next,k);

    return prev;
}

NODE merge(NODE head1,NODE head2)
{
    
    if(head1==NULL){
        print(head2);
        return NULL;
    }
    if(head2==NULL){
        print(head1);
        return NULL;
    }
    NODE head3=NULL;

    NODE cur1 = head1,cur2= head2;

    int info1 = cur1->info;
    int info2 = cur2->info;

    while(cur1!=NULL and cur2!=NULL)
    {
        info1 = cur1->info;
        info2 = cur2->info;
        
        if(info1<=info2)
        {
            head3 = insertAtHead(head3,info1);
            cur1 = cur1->link;
        }
        else 
        {
            head3 = insertAtHead(head3, info2);
            cur2 = cur2->link;
        }
    }

    while(cur1!=NULL)
    {
        info1 = cur1->info;
        head3 = insertAtHead( head3,info1);
            cur1 = cur1->link;
    }

    while(cur2!=NULL)
    {
        info2 = cur2->info;
            head3 = insertAtHead( head3, info2);
            cur2 = cur2->link;
    }
    return head3;

}
void rprint(NODE head)
{
    if(head==NULL)
        return;

    rprint(head->link);
    cout << head->info << " ";

    return;
}
NODE input_at_the_rear(NODE head1,int n1)
{
   // cout << "heallo";
    NODE head3 = NULL;
    NODE tail1 = NULL;
    int i,item;
    //cin >> n1;
    if(n1==0) goto section2;
    if(n1==1)
    {
      cin >> item;
      head1 = insertAtHead(head1,item);
      goto section2;  
    }
    
    cin >> item;
    head1 = insertAtHead(head1,item);
    //rprint(head1);
    n1-=1;
   // cout << "hello";
    head1 = insertAtHead(head1,item);

    cin >> item;
    tail1 = insertAtTail(tail1,item);

    head1 -> link = tail1;
    n1-=1;

    while(n1>0)
    {
        cin >> item;
        n1-=1;
        tail1 = insertAtTail(tail1,item);
    }
    
    section2:

    return head1;
}

void solve_merge()
{
    NODE head1=NULL;

  //  head1 = input_at_the_rear(head1);

    NODE head2=NULL;

  //  head2 = input_at_the_rear(head2);
   /*
   */

    NODE temp = merge(head1,head2);

    rprint(temp);
    cout << endl;

}
NODE k_append(NODE head,int k,int n)
{   
    int i;
    k = k%n;
    NODE cur = head,prev=NULL;
    rep(i,n-k)
    {
        
        prev = cur;
        cur = cur->link;
    }

 
    prev->link = NULL;
    NODE cur_spec = cur;
    while(cur->link!=NULL)  cur = cur->link;
    

    cur->link = head;


    return cur_spec;

}
void solve_kappend()
{
    int n;
    cin >> n;
    NODE head = NULL;

    head =  input_at_the_rear(head,n);
   int k; 
   cin >> k;
  // print(head);
    k=k%n;
    if(n==1||k==0){
        print(head);
        return;
    }
    head =  k_append(head,k,n);

    print(head);
}
NODE even_odd(NODE head)
{
    NODE head_even=NULL,head_odd=NULL;
    NODE tail1=NULL,tail2=NULL;

    NODE cur = head;

    if(head ==NULL) return NULL;

    int info = cur->info;

    while(cur!=NULL)
    {
        info = cur->info;
        if(info&1)
        {   
            head_odd = insertAtHead(head_odd,info);
        }
        else
        {
            head_even = insertAtHead(head_even,info);
        }

        cur = cur->link;
    }

    rprint(head_odd);
    rprint(head_even);

    return head;
}
void solve_evenodd()
{
    NODE head = NULL;
    int n;cin >> n;
    head = input_at_the_rear(head,n);
    //print(head);
    head = even_odd(head);
}int c;
NODE input_at_the_rear_without_n(NODE head1)
{
   // cout << "heallo";
    NODE head3 = NULL;
    NODE tail1 = NULL;
    int i,item1,itemn,item2,item3;
    cin >> itemn;bool check;
    if(itemn!=-1) cin >> item2;
    else {
        c=0;
        return NULL;
    }
    
    if(item2!=-1);
    else
    {
        head3 = insertAtHead(head3,itemn);
        c=1;
        return head3;
    }

    if(check)
    {   
        head3 = insertAtHead(head3,itemn);
        tail1 = insertAtTail(tail1,item2);
        c+=2;
        head3->link = tail1;
        while(cin >> item1)
        {
            if(item1==-1) goto section2;
            tail1 = insertAtTail(tail1,item1);
            c++;
        }
    }
    head3 = insertAtHead(head3,itemn);

    section2:

    return head3;
}

void solve__nth__term__from__last()
{
    NODE head = NULL;

    head = input_at_the_rear_without_n(head);
    int i,k;cin >> k;NODE cur= head;//cout << c << endl;
    rep(i,c-k) cur = cur->link;
    cout << cur->info;
    //print(head);
}  
bool cycle_detector(NODE &head1)
{
    bool flag = false;
    NODE slow=head1,fast = head1;
    while(fast!=NULL and fast->link!=NULL)
    {
        slow = slow->link;
        fast = fast->link->link;

       // cout << slow->info << "  "<<fast->info << endl ;
        if(fast==slow)
        {
         flag = true;   
         break;
        }
    } 

    if(!flag) return false;
    
    //cout << fast->info << " "<<slow->info;

    fast->link = NULL;

    //print(head1);

    return true;
} 
NODE link_breaker(NODE l1, NODE l2)
{
    NODE ll1 = l1;
    NODE ll2 = l2;
    int c1 =0,c2=0;
    while(ll1!=NULL)
    {   
        ll1= ll1->link;
        c1++;
    }
    while(ll2!=NULL)
    {   
        ll2= ll2->link;
        c2++;
    }
    int diff = c1-c2;
   ll1 = l1;ll2 = l2;
    if(c1>c2)
    {
        while(diff>0)
        {
            ll1 = ll1->link;
            diff--;
        }
    }
   
    else if(c2>c1)
    {
        while(diff<0)
        {
            ll2 = ll2->link;
            diff++;
        }
    }
    
    bool flag = false;
    while(ll1!=NULL and ll2!=NULL) 
    {
        ll1= ll1->link;
        ll2 = ll2->link;
        if(ll1->link==ll2->link)
        {
            flag = true;
            return ll1;
        }
    }
    return NULL;

}
void solve_intersectionn()
{   
    int n;
    NODE head1=NULL,head2=NULL,head3=NULL;
    cin >> n;head1 = input_at_the_rear(head1,n);
    cin >> n;head2 = input_at_the_rear(head2,n);

    head2->link->link = head1->link;

    NODE temp = link_breaker(head1,head2);print(temp);
    /*print(head2); 
    print(head1);
     //cycle_detect*///or(head1);
     
    
}
bool check_palindrome(NODE head1,int n)
{
   if(head1==NULL){
    cout << "true";
    return true;
   } 
   NODE cur = head1;int s[n];
    int i=0;
    while(cur!=NULL) 
    {
        s[i++] = cur->info;
        cur = cur->link;
    }

    i = n-1;
    cur =head1;
    while(cur!=NULL)
    {
        //cout <<s[i] << " "<< cur->info<<endl;
        if(cur->info!=s[i])
        {
            cout << "false";return false;
        }

        cur = cur->link;
        i--;

    }
    cout << "true";
    return false;
}
void solve_palindrome()
{
    int n;
    NODE head1 = NULL;
    cin >> n;head1 = input_at_the_rear(head1,n);

    check_palindrome(head1,n);
}
void sorttttt(NODE *head,NODE current);
NODE insertion_sort(NODE head,int n)
{
   
    NODE sorted = NULL;
    NODE cur = head;
   // NODE next = NULL; 
    while(cur!=NULL)
    {   
       // cout << cur->info<< " ";  
     NODE next= cur->link;

        sorttttt(&sorted,cur);
        cur = next;
        
    }

    return sorted;
}

void sorttttt(struct node**head,NODE current)
{
    if(*head==NULL or (*head)->info >= current->info) 
        {
            current->link = *head;
            *head = current;
          //  return head;
        }
    else
    {
        NODE cur = *head;
        while(cur->link!=NULL and cur->link->info<current->info )
        {   
            cur = cur->link;
        }
       current->link = cur->link;
       cur->link = current;
    }
}
void solve()
{
    int n;
    NODE head = NULL;
    cin >> n;
    head = input_at_the_rear(head,n);
   // print(head);
    head = insertion_sort(head,n);

    print(head);
}