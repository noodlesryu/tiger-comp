package codegen.C;

import java.util.LinkedList;

import codegen.C.Ast.Dec;
import codegen.C.Ast.Type;

public class Ftuple
{
  String classs; // name of the class
  Type.T ret; // return type
  LinkedList<Dec.T> args; // argument list.
  String id; // method name

  public Ftuple(String classs, Type.T ret, java.util.LinkedList<Dec.T> args,
                String id)
  {
    this.classs = classs;
    this.ret = ret;
    this.args = args;
    this.id = id;
  }

  @Override
  // This is a specialized version of "equals", for
  // it compares whether the second field is equal,
  // but ignores the first field.
  public boolean equals(Object t)
  {
    if (t == null) {
      return false;
    }
    if (!(t instanceof Ftuple)) {
      return false;
    }
    return this.id.equals(((Ftuple) t).id);
  }
}
