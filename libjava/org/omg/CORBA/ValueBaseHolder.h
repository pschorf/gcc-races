
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_ValueBaseHolder__
#define __org_omg_CORBA_ValueBaseHolder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class TypeCode;
          class ValueBaseHolder;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA::ValueBaseHolder : public ::java::lang::Object
{

public:
  ValueBaseHolder();
  ValueBaseHolder(::java::io::Serializable *);
  virtual void _read(::org::omg::CORBA::portable::InputStream *);
  virtual ::org::omg::CORBA::TypeCode * _type();
  virtual void _write(::org::omg::CORBA::portable::OutputStream *);
  ::java::io::Serializable * __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_ValueBaseHolder__
