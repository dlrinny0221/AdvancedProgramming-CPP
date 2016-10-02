

struct node;
struct link {
   node* next;
   node* prev;
};
struct node: link {
   int value;
};

int main() {
   node* nn;
   link* ll;
   ll = nn;
   nn = static_cast<node*> (ll);
}
