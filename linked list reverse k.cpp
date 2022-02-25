#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
//                      TEMPLATE 
//                        ENDS
//                        HERE  
struct node
{
	int info;
	struct node * link;
};

typedef struct node * NODE;

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

	temp = get_node();
	if(head ==NULL)
	{
		head->info = item;
		head->link = NULL;
		return head;
	}
	temp->info = item;
	temp->link = head;
	//cout << temp-> info << endl;
	return temp;

}
void print(NODE head)
{
	NODE cur;

	cur = head;

	while(cur!= NULL)
	{
		cout << cur -> info << " ";
		cur = cur ->link;
	}
	cout << endl;
	return ;
}
int32_t  main()
{
   Dungeon_Master();
  // IOS;
   //cin.tie(NULL);
    int t;cin >>t;while(t--)
        solve();
    return 0;
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
	

	NODE head3=NULL;

	NODE cur1 = head1,cur2= head2;

	int info1 = cur1->info;
	int info2 = cur2->info;

	while(cur1!=NULL and cur2!=NULL)
	{
		info1 = cur1->info;
		info2 = cur2->info;
		
		if(info1<info2)
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
		head3 = insertAtHead( head3,info1);
			cur1 = cur1->link;
	}

	while(cur2!=NULL)
	{
		
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
void solve()
{
	NODE head1 = NULL,tail1= NULL;
	//NODE tail = NULL;
	int n1,k;

	cin >> n1 ;//cout << n << k;
	int i,item;
	if(n1==0) goto n22;
	if(n1==1) 
	{
	cin >> item;
	head1 = insertAtHead(head1,item);
	goto n22;
	}

	cin >> item;
	tail1 = insertAtTail(tail1,item);

	head1 -> link = tail1;n1-=1;

	while(n1>0)
	{
		cin >> item;
		n1-=1;
		tail1 = insertAtTail(tail1,item);
	}
	
	
	n22:
	NODE head2 = NULL,tail= NULL;
	//NODE tail = NULL;
	int n2;

	cin >> n2 ;//cout << n << k;
	if(n2==0)
	{
		print(head1);return;
	}
	cin >> item;n2-=1;
	head2 = insertAtHead(head2,item);

	cin >> item;
	tail = insertAtTail(tail,item);

	head2 -> link = tail;n2-=1;

	while(n2>0)
	{
		cin >> item;
		n2-=1;
		tail = insertAtTail(tail,item);
	}
	if(n1==0)	
	{
		print(head2);
		return;
	}
	NODE temp = merge(head1,head2);
		rprint(temp);
	





}