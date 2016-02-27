// This is automatically generated by the Tiger compiler.
// Do NOT modify!

extern void *previous;
// structures
struct GC
{
  struct GC_vtable *vptr;
  int isObjOrArray;
  int length;
  void* forwarding;
};
struct Garbage
{
  struct Garbage_vtable *vptr;
  int isObjOrArray;
  int length;
  void* forwarding;
  struct GC * g1;
  struct GC * g2;
};
struct Doit
{
  struct Doit_vtable *vptr;
  int isObjOrArray;
  int length;
  void* forwarding;
};
// vtables structures
struct GC_vtable
{
  char* GC_gc_map;
};

struct Garbage_vtable
{
  char* Garbage_gc_map;
};

struct Doit_vtable
{
  char* Doit_gc_map;
  int (*doit)(struct Doit * this,int n);
};


//methods decl
int Doit_doit(struct Doit * this, int n);
// vtables
struct GC_vtable GC_vtable_ = 
{
  "",
};

struct Garbage_vtable Garbage_vtable_ = 
{
  "11",
};

struct Doit_vtable Doit_vtable_ = 
{
  "",
  Doit_doit,
};


//GC stack frames
struct Tiger_main_gc_frame
{
    void *prev_;
    char *arguments_gc_map;
    int *arguments_base_address;
    int locals_gc_map;
    struct Doit * x_0;
};

struct Doit_doit_gc_frame
{
    void *prev_;
    char *arguments_gc_map;
    int *arguments_base_address;
    int locals_gc_map;
    struct Doit * d1;
};

// memory GC maps
int Tiger_main_locals_gc_map = 1;

char* Doit_doit_arguments_gc_map="10";
int Doit_doit_locals_gc_map=1;

// methods
int Doit_doit(struct Doit * this, int n)
{
  struct Doit_doit_gc_frame frame;
  frame.prev_=previous;
  previous=&frame;
  frame.arguments_gc_map = Doit_doit_arguments_gc_map;
  frame.arguments_base_address = &this;
  frame.locals_gc_map = Doit_doit_locals_gc_map;
  int i;
  int j;
  frame.d1=0;

  i = 0;
  while (i < n)
    {
      System_out_println (i);
      frame.d1 = ((struct Doit*)(Tiger_new (&Doit_vtable_, sizeof(struct Doit))));
      i = i + 1;
    }
  
  previous=frame.prev_;
  return i;
}

// main method
int Tiger_main ()
{
    struct Tiger_main_gc_frame frame;
    frame.prev_=previous;
    previous=&frame;
    frame.arguments_gc_map = 0;
    frame.arguments_base_address = 0;
    frame.locals_gc_map = Tiger_main_locals_gc_map;
    frame.x_0=0;
    System_out_println ((frame.x_0=((struct Doit*)(Tiger_new (&Doit_vtable_, sizeof(struct Doit)))), frame.x_0->vptr->doit(frame.x_0, 101)));
}



