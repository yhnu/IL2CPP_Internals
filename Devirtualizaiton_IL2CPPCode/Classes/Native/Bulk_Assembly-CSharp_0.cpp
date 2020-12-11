#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Animal
struct Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A;
// Cow
struct Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3;
// Farm
struct Farm_t0CB8E6A4799CAAA331DE481D10866CB4214363D6;
// Pig
struct Pig_t73277392F813BE1833E4D1A11ECB0FB18488AC24;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;

extern RuntimeClass* AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579_il2cpp_TypeInfo_var;
extern RuntimeClass* Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Pig_t73277392F813BE1833E4D1A11ECB0FB18488AC24_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1946C31AEEF030DB495B0E13AD1403E9CB0AA7A2;
extern String_t* _stringLiteralA9E050D49E744793D6DBBC0090CF6B8B7ADC9652;
extern String_t* _stringLiteralBC14573BC9ABF3E738C8B781331A058733CB17AE;
extern String_t* _stringLiteralDFDDF76A9FDE50644F5842242A6DE13BD5332625;
extern const uint32_t Cow_Speak_m7B0A25CF57EDD6C48FD2C76BE6DC097D1098C84B_MetadataUsageId;
extern const uint32_t Farm_Start_m187B9516D1DAB2C96C8864A15824B5A4BD5C0251_MetadataUsageId;
extern const uint32_t Pig_Speak_m492F7892A0758ED212A543D66887EEC7787DE397_MetadataUsageId;

struct AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ANIMAL_TD86398E3FF65A0AF166E6A8556D5B186F4305C0A_H
#define ANIMAL_TD86398E3FF65A0AF166E6A8556D5B186F4305C0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Animal
struct  Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMAL_TD86398E3FF65A0AF166E6A8556D5B186F4305C0A_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef COW_TAE5FA56D932919509EF4D2E078DCA07821B318B3_H
#define COW_TAE5FA56D932919509EF4D2E078DCA07821B318B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cow
struct  Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3  : public Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COW_TAE5FA56D932919509EF4D2E078DCA07821B318B3_H
#ifndef PIG_T73277392F813BE1833E4D1A11ECB0FB18488AC24_H
#define PIG_T73277392F813BE1833E4D1A11ECB0FB18488AC24_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pig
struct  Pig_t73277392F813BE1833E4D1A11ECB0FB18488AC24  : public Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIG_T73277392F813BE1833E4D1A11ECB0FB18488AC24_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef FARM_T0CB8E6A4799CAAA331DE481D10866CB4214363D6_H
#define FARM_T0CB8E6A4799CAAA331DE481D10866CB4214363D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Farm
struct  Farm_t0CB8E6A4799CAAA331DE481D10866CB4214363D6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FARM_T0CB8E6A4799CAAA331DE481D10866CB4214363D6_H
// Animal[]
struct AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * m_Items[1];

public:
	inline Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Animal::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Animal__ctor_mD931CC46D832BCE4D37D63555BF3E7BEB73A9E80 (Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * __this, const RuntimeMethod* method);
// System.Void Cow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Cow__ctor_m3FBB50E33B195F86F3E6237AF538BF2A5208861C (Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3 * __this, const RuntimeMethod* method);
// System.Void Pig::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Pig__ctor_mC115617B537E2BD4C9B48D8789F0BB0DC6431DD4 (Pig_t73277392F813BE1833E4D1A11ECB0FB18488AC24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Animal::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Animal__ctor_mD931CC46D832BCE4D37D63555BF3E7BEB73A9E80 (Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Cow::Speak()
extern "C" IL2CPP_METHOD_ATTR String_t* Cow_Speak_m7B0A25CF57EDD6C48FD2C76BE6DC097D1098C84B (Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cow_Speak_m7B0A25CF57EDD6C48FD2C76BE6DC097D1098C84B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// ???????return "Moo";
		V_0 = _stringLiteral1946C31AEEF030DB495B0E13AD1403E9CB0AA7A2;
		goto IL_0009;
	}

IL_0009:
	{
		// ???}
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void Cow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Cow__ctor_m3FBB50E33B195F86F3E6237AF538BF2A5208861C (Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3 * __this, const RuntimeMethod* method)
{
	{
		Animal__ctor_mD931CC46D832BCE4D37D63555BF3E7BEB73A9E80(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Farm::Start()
extern "C" IL2CPP_METHOD_ATTR void Farm_Start_m187B9516D1DAB2C96C8864A15824B5A4BD5C0251 (Farm_t0CB8E6A4799CAAA331DE481D10866CB4214363D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Farm_Start_m187B9516D1DAB2C96C8864A15824B5A4BD5C0251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579* V_0 = NULL;
	Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3 * V_1 = NULL;
	AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579* V_2 = NULL;
	int32_t V_3 = 0;
	Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * V_4 = NULL;
	{
		// ???????Animal[] animals = new Animal[] {new Cow(), new Pig()};
		AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579* L_0 = (AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579*)SZArrayNew(AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579_il2cpp_TypeInfo_var, (uint32_t)2);
		AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579* L_1 = L_0;
		Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3 * L_2 = (Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3 *)il2cpp_codegen_object_new(Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3_il2cpp_TypeInfo_var);
		Cow__ctor_m3FBB50E33B195F86F3E6237AF538BF2A5208861C(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A *)L_2);
		AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579* L_3 = L_1;
		Pig_t73277392F813BE1833E4D1A11ECB0FB18488AC24 * L_4 = (Pig_t73277392F813BE1833E4D1A11ECB0FB18488AC24 *)il2cpp_codegen_object_new(Pig_t73277392F813BE1833E4D1A11ECB0FB18488AC24_il2cpp_TypeInfo_var);
		Pig__ctor_mC115617B537E2BD4C9B48D8789F0BB0DC6431DD4(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A *)L_4);
		V_0 = L_3;
		// ???????foreach (var animal in animals)
		AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579* L_5 = V_0;
		V_2 = L_5;
		V_3 = 0;
		goto IL_0043;
	}

IL_001f:
	{
		// ???????foreach (var animal in animals)
		AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// ???????????Debug.LogFormat("Some animal says '{0}'", animal.Speak());
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		Animal_tD86398E3FF65A0AF166E6A8556D5B186F4305C0A * L_12 = V_4;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Animal::Speak() */, L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteralBC14573BC9ABF3E738C8B781331A058733CB17AE, L_11, /*hidden argument*/NULL);
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0043:
	{
		// ???????foreach (var animal in animals)
		int32_t L_15 = V_3;
		AnimalU5BU5D_tEC503C068BC2C88521EC30D7770563984BD5F579* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		// ???????var cow = new Cow();
		Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3 * L_17 = (Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3 *)il2cpp_codegen_object_new(Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3_il2cpp_TypeInfo_var);
		Cow__ctor_m3FBB50E33B195F86F3E6237AF538BF2A5208861C(L_17, /*hidden argument*/NULL);
		V_1 = L_17;
		// ???????Debug.LogFormat("The cow says '{0}'", cow.Speak());
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_18;
		Cow_tAE5FA56D932919509EF4D2E078DCA07821B318B3 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Animal::Speak() */, L_20);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(_stringLiteralDFDDF76A9FDE50644F5842242A6DE13BD5332625, L_19, /*hidden argument*/NULL);
		// ???}
		return;
	}
}
// System.Void Farm::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Farm__ctor_m7E71DD0DFE4C18D3790138EB386ED01461481B79 (Farm_t0CB8E6A4799CAAA331DE481D10866CB4214363D6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Pig::Speak()
extern "C" IL2CPP_METHOD_ATTR String_t* Pig_Speak_m492F7892A0758ED212A543D66887EEC7787DE397 (Pig_t73277392F813BE1833E4D1A11ECB0FB18488AC24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pig_Speak_m492F7892A0758ED212A543D66887EEC7787DE397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// ????????return "Oink";
		V_0 = _stringLiteralA9E050D49E744793D6DBBC0090CF6B8B7ADC9652;
		goto IL_0009;
	}

IL_0009:
	{
		// ???}
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void Pig::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Pig__ctor_mC115617B537E2BD4C9B48D8789F0BB0DC6431DD4 (Pig_t73277392F813BE1833E4D1A11ECB0FB18488AC24 * __this, const RuntimeMethod* method)
{
	{
		Animal__ctor_mD931CC46D832BCE4D37D63555BF3E7BEB73A9E80(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
