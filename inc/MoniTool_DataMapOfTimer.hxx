// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_DataMapOfTimer_HeaderFile
#define _MoniTool_DataMapOfTimer_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Standard_CString.hxx>
#include <Handle_MoniTool_Timer.hxx>
#include <Handle_MoniTool_DataMapNodeOfDataMapOfTimer.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class MoniTool_Timer;
class MoniTool_MTHasher;
class MoniTool_DataMapNodeOfDataMapOfTimer;
class MoniTool_DataMapIteratorOfDataMapOfTimer;



class MoniTool_DataMapOfTimer  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MoniTool_DataMapOfTimer(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MoniTool_DataMapOfTimer& Assign (const MoniTool_DataMapOfTimer& Other) ;
  MoniTool_DataMapOfTimer& operator = (const MoniTool_DataMapOfTimer& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MoniTool_DataMapOfTimer()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_CString& K, const Handle(MoniTool_Timer)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_CString& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_CString& K) ;
  
  Standard_EXPORT  const  Handle(MoniTool_Timer)& Find (const Standard_CString& K)  const;
 const  Handle(MoniTool_Timer)& operator() (const Standard_CString& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(MoniTool_Timer)& ChangeFind (const Standard_CString& K) ;
  Handle(MoniTool_Timer)& operator() (const Standard_CString& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_CString& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_CString& K) ;




protected:





private:

  
  Standard_EXPORT MoniTool_DataMapOfTimer(const MoniTool_DataMapOfTimer& Other);




};







#endif // _MoniTool_DataMapOfTimer_HeaderFile
