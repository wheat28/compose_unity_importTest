#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000011 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000013 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000015 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000016 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000017 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000018 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000019 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001C System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001D System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001E System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001F System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000021 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000022 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000023 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000029 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002C System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000030 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000031 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000032 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000035 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000040 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000041 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000042 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000043 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000044 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000045 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000046 System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x00000047 System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC (void);
// 0x00000048 System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD (void);
// 0x00000049 System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x0000004A System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x0000004B System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x0000004C System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4 (void);
// 0x0000004D System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern void UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F (void);
// 0x0000004E System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x0000004F System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x00000050 System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (void);
// 0x00000051 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000056 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000058 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000059 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000005A System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000005B System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000005C System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000060 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000063 System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x00000064 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000066 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000067 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000068 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000069 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000006A System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000006B System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000006C T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000006D System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000006E System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[110] = 
{
	SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015,
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC,
	Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4,
	UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[110] = 
{
	4995,
	5538,
	5791,
	5791,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3541,
	5820,
	5538,
	3563,
	3563,
	3563,
	5538,
	3563,
	-1,
	-1,
	5791,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[35] = 
{
	{ 0x02000005, { 61, 4 } },
	{ 0x02000006, { 65, 9 } },
	{ 0x02000007, { 76, 7 } },
	{ 0x02000008, { 85, 10 } },
	{ 0x02000009, { 97, 11 } },
	{ 0x0200000A, { 111, 9 } },
	{ 0x0200000B, { 123, 12 } },
	{ 0x0200000C, { 138, 1 } },
	{ 0x0200000D, { 139, 2 } },
	{ 0x0200000E, { 141, 2 } },
	{ 0x0200000F, { 143, 4 } },
	{ 0x0200001C, { 147, 3 } },
	{ 0x0200001F, { 150, 23 } },
	{ 0x02000021, { 173, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 3 } },
	{ 0x0600000A, { 33, 4 } },
	{ 0x0600000B, { 37, 4 } },
	{ 0x0600000C, { 41, 3 } },
	{ 0x0600000D, { 44, 1 } },
	{ 0x0600000E, { 45, 1 } },
	{ 0x0600000F, { 46, 3 } },
	{ 0x06000010, { 49, 3 } },
	{ 0x06000011, { 52, 2 } },
	{ 0x06000012, { 54, 2 } },
	{ 0x06000013, { 56, 5 } },
	{ 0x06000023, { 74, 2 } },
	{ 0x06000028, { 83, 2 } },
	{ 0x0600002D, { 95, 2 } },
	{ 0x06000033, { 108, 3 } },
	{ 0x06000038, { 120, 3 } },
	{ 0x0600003D, { 135, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[175] = 
{
	{ (Il2CppRGCTXDataType)2, 2813 },
	{ (Il2CppRGCTXDataType)3, 11248 },
	{ (Il2CppRGCTXDataType)2, 4465 },
	{ (Il2CppRGCTXDataType)2, 3910 },
	{ (Il2CppRGCTXDataType)3, 19506 },
	{ (Il2CppRGCTXDataType)2, 2941 },
	{ (Il2CppRGCTXDataType)2, 3917 },
	{ (Il2CppRGCTXDataType)3, 19541 },
	{ (Il2CppRGCTXDataType)2, 3912 },
	{ (Il2CppRGCTXDataType)3, 19518 },
	{ (Il2CppRGCTXDataType)2, 2814 },
	{ (Il2CppRGCTXDataType)3, 11249 },
	{ (Il2CppRGCTXDataType)2, 4490 },
	{ (Il2CppRGCTXDataType)2, 3922 },
	{ (Il2CppRGCTXDataType)3, 19556 },
	{ (Il2CppRGCTXDataType)2, 2960 },
	{ (Il2CppRGCTXDataType)2, 3930 },
	{ (Il2CppRGCTXDataType)3, 19742 },
	{ (Il2CppRGCTXDataType)2, 3926 },
	{ (Il2CppRGCTXDataType)3, 19641 },
	{ (Il2CppRGCTXDataType)2, 872 },
	{ (Il2CppRGCTXDataType)3, 68 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 1732 },
	{ (Il2CppRGCTXDataType)3, 7966 },
	{ (Il2CppRGCTXDataType)2, 874 },
	{ (Il2CppRGCTXDataType)3, 80 },
	{ (Il2CppRGCTXDataType)3, 81 },
	{ (Il2CppRGCTXDataType)2, 1747 },
	{ (Il2CppRGCTXDataType)3, 7971 },
	{ (Il2CppRGCTXDataType)2, 1249 },
	{ (Il2CppRGCTXDataType)3, 2466 },
	{ (Il2CppRGCTXDataType)3, 2467 },
	{ (Il2CppRGCTXDataType)2, 2538 },
	{ (Il2CppRGCTXDataType)2, 2000 },
	{ (Il2CppRGCTXDataType)2, 2109 },
	{ (Il2CppRGCTXDataType)2, 2215 },
	{ (Il2CppRGCTXDataType)2, 2539 },
	{ (Il2CppRGCTXDataType)2, 2001 },
	{ (Il2CppRGCTXDataType)2, 2110 },
	{ (Il2CppRGCTXDataType)2, 2216 },
	{ (Il2CppRGCTXDataType)2, 2111 },
	{ (Il2CppRGCTXDataType)2, 2217 },
	{ (Il2CppRGCTXDataType)3, 7967 },
	{ (Il2CppRGCTXDataType)2, 1515 },
	{ (Il2CppRGCTXDataType)2, 2102 },
	{ (Il2CppRGCTXDataType)2, 2103 },
	{ (Il2CppRGCTXDataType)2, 2213 },
	{ (Il2CppRGCTXDataType)3, 7965 },
	{ (Il2CppRGCTXDataType)2, 2101 },
	{ (Il2CppRGCTXDataType)2, 2212 },
	{ (Il2CppRGCTXDataType)3, 7964 },
	{ (Il2CppRGCTXDataType)2, 1999 },
	{ (Il2CppRGCTXDataType)2, 2108 },
	{ (Il2CppRGCTXDataType)2, 1998 },
	{ (Il2CppRGCTXDataType)3, 22920 },
	{ (Il2CppRGCTXDataType)3, 7166 },
	{ (Il2CppRGCTXDataType)2, 1592 },
	{ (Il2CppRGCTXDataType)2, 2105 },
	{ (Il2CppRGCTXDataType)2, 2214 },
	{ (Il2CppRGCTXDataType)2, 2313 },
	{ (Il2CppRGCTXDataType)3, 11250 },
	{ (Il2CppRGCTXDataType)3, 11252 },
	{ (Il2CppRGCTXDataType)2, 638 },
	{ (Il2CppRGCTXDataType)3, 11251 },
	{ (Il2CppRGCTXDataType)3, 11260 },
	{ (Il2CppRGCTXDataType)2, 2817 },
	{ (Il2CppRGCTXDataType)2, 3913 },
	{ (Il2CppRGCTXDataType)3, 19519 },
	{ (Il2CppRGCTXDataType)3, 11261 },
	{ (Il2CppRGCTXDataType)2, 2149 },
	{ (Il2CppRGCTXDataType)2, 2244 },
	{ (Il2CppRGCTXDataType)3, 7977 },
	{ (Il2CppRGCTXDataType)3, 22880 },
	{ (Il2CppRGCTXDataType)2, 3927 },
	{ (Il2CppRGCTXDataType)3, 19642 },
	{ (Il2CppRGCTXDataType)3, 11253 },
	{ (Il2CppRGCTXDataType)2, 2816 },
	{ (Il2CppRGCTXDataType)2, 3911 },
	{ (Il2CppRGCTXDataType)3, 19507 },
	{ (Il2CppRGCTXDataType)3, 7976 },
	{ (Il2CppRGCTXDataType)3, 11254 },
	{ (Il2CppRGCTXDataType)3, 22879 },
	{ (Il2CppRGCTXDataType)2, 3923 },
	{ (Il2CppRGCTXDataType)3, 19557 },
	{ (Il2CppRGCTXDataType)3, 11267 },
	{ (Il2CppRGCTXDataType)2, 2818 },
	{ (Il2CppRGCTXDataType)2, 3918 },
	{ (Il2CppRGCTXDataType)3, 19542 },
	{ (Il2CppRGCTXDataType)3, 12032 },
	{ (Il2CppRGCTXDataType)3, 5694 },
	{ (Il2CppRGCTXDataType)3, 7978 },
	{ (Il2CppRGCTXDataType)3, 5693 },
	{ (Il2CppRGCTXDataType)3, 11268 },
	{ (Il2CppRGCTXDataType)3, 22881 },
	{ (Il2CppRGCTXDataType)2, 3931 },
	{ (Il2CppRGCTXDataType)3, 19743 },
	{ (Il2CppRGCTXDataType)3, 11281 },
	{ (Il2CppRGCTXDataType)2, 2820 },
	{ (Il2CppRGCTXDataType)2, 3929 },
	{ (Il2CppRGCTXDataType)3, 19644 },
	{ (Il2CppRGCTXDataType)3, 11282 },
	{ (Il2CppRGCTXDataType)2, 2152 },
	{ (Il2CppRGCTXDataType)2, 2247 },
	{ (Il2CppRGCTXDataType)3, 7982 },
	{ (Il2CppRGCTXDataType)3, 7981 },
	{ (Il2CppRGCTXDataType)2, 3915 },
	{ (Il2CppRGCTXDataType)3, 19521 },
	{ (Il2CppRGCTXDataType)3, 22886 },
	{ (Il2CppRGCTXDataType)2, 3928 },
	{ (Il2CppRGCTXDataType)3, 19643 },
	{ (Il2CppRGCTXDataType)3, 11274 },
	{ (Il2CppRGCTXDataType)2, 2819 },
	{ (Il2CppRGCTXDataType)2, 3925 },
	{ (Il2CppRGCTXDataType)3, 19559 },
	{ (Il2CppRGCTXDataType)3, 7980 },
	{ (Il2CppRGCTXDataType)3, 7979 },
	{ (Il2CppRGCTXDataType)3, 11275 },
	{ (Il2CppRGCTXDataType)2, 3914 },
	{ (Il2CppRGCTXDataType)3, 19520 },
	{ (Il2CppRGCTXDataType)3, 22885 },
	{ (Il2CppRGCTXDataType)2, 3924 },
	{ (Il2CppRGCTXDataType)3, 19558 },
	{ (Il2CppRGCTXDataType)3, 11288 },
	{ (Il2CppRGCTXDataType)2, 2821 },
	{ (Il2CppRGCTXDataType)2, 3933 },
	{ (Il2CppRGCTXDataType)3, 19745 },
	{ (Il2CppRGCTXDataType)3, 12033 },
	{ (Il2CppRGCTXDataType)3, 5696 },
	{ (Il2CppRGCTXDataType)3, 7984 },
	{ (Il2CppRGCTXDataType)3, 7983 },
	{ (Il2CppRGCTXDataType)3, 5695 },
	{ (Il2CppRGCTXDataType)3, 11289 },
	{ (Il2CppRGCTXDataType)2, 3916 },
	{ (Il2CppRGCTXDataType)3, 19522 },
	{ (Il2CppRGCTXDataType)3, 22887 },
	{ (Il2CppRGCTXDataType)2, 3932 },
	{ (Il2CppRGCTXDataType)3, 19744 },
	{ (Il2CppRGCTXDataType)3, 7974 },
	{ (Il2CppRGCTXDataType)3, 7975 },
	{ (Il2CppRGCTXDataType)3, 7988 },
	{ (Il2CppRGCTXDataType)2, 4497 },
	{ (Il2CppRGCTXDataType)2, 1516 },
	{ (Il2CppRGCTXDataType)2, 2004 },
	{ (Il2CppRGCTXDataType)2, 4493 },
	{ (Il2CppRGCTXDataType)2, 2126 },
	{ (Il2CppRGCTXDataType)2, 2222 },
	{ (Il2CppRGCTXDataType)3, 2476 },
	{ (Il2CppRGCTXDataType)2, 1250 },
	{ (Il2CppRGCTXDataType)2, 4545 },
	{ (Il2CppRGCTXDataType)3, 7184 },
	{ (Il2CppRGCTXDataType)2, 1601 },
	{ (Il2CppRGCTXDataType)3, 8784 },
	{ (Il2CppRGCTXDataType)3, 8785 },
	{ (Il2CppRGCTXDataType)3, 8790 },
	{ (Il2CppRGCTXDataType)2, 2321 },
	{ (Il2CppRGCTXDataType)3, 8787 },
	{ (Il2CppRGCTXDataType)3, 23696 },
	{ (Il2CppRGCTXDataType)2, 1550 },
	{ (Il2CppRGCTXDataType)3, 5679 },
	{ (Il2CppRGCTXDataType)1, 2076 },
	{ (Il2CppRGCTXDataType)2, 4502 },
	{ (Il2CppRGCTXDataType)3, 8786 },
	{ (Il2CppRGCTXDataType)1, 4502 },
	{ (Il2CppRGCTXDataType)1, 2321 },
	{ (Il2CppRGCTXDataType)2, 4563 },
	{ (Il2CppRGCTXDataType)2, 4502 },
	{ (Il2CppRGCTXDataType)3, 17297 },
	{ (Il2CppRGCTXDataType)3, 8791 },
	{ (Il2CppRGCTXDataType)3, 8792 },
	{ (Il2CppRGCTXDataType)3, 8789 },
	{ (Il2CppRGCTXDataType)3, 8788 },
	{ (Il2CppRGCTXDataType)2, 498 },
	{ (Il2CppRGCTXDataType)3, 5697 },
	{ (Il2CppRGCTXDataType)2, 649 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	110,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	35,
	s_rgctxIndices,
	175,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
