//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2018-2019 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#include "SurfaceTraceSetParameters_0p1.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace SurfaceTraceSetParameters_0p1NS;

const char* const SurfaceTraceSetParameters_0p1Factory::vptr =
    NvParameterized::getVptr<SurfaceTraceSetParameters_0p1, SurfaceTraceSetParameters_0p1::ClassAlignment>();

const uint32_t NumParamDefs = 4;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 3, 2,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 2 },
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->traces), CHILDREN(2), 1 }, // traces
	{ TYPE_REF, false, 1 * sizeof(NvParameterized::Interface*), NULL, 0 }, // traces[]
	{ TYPE_VEC3, false, (size_t)(&((ParametersStruct*)0)->positionOffset), NULL, 0 }, // positionOffset
};


bool SurfaceTraceSetParameters_0p1::mBuiltFlag = false;
NvParameterized::MutexType SurfaceTraceSetParameters_0p1::mBuiltFlagMutex;

SurfaceTraceSetParameters_0p1::SurfaceTraceSetParameters_0p1(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &SurfaceTraceSetParameters_0p1FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

SurfaceTraceSetParameters_0p1::~SurfaceTraceSetParameters_0p1()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void SurfaceTraceSetParameters_0p1::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~SurfaceTraceSetParameters_0p1();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* SurfaceTraceSetParameters_0p1::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* SurfaceTraceSetParameters_0p1::getParameterDefinitionTree(void) const
{
	SurfaceTraceSetParameters_0p1* tmpParam = const_cast<SurfaceTraceSetParameters_0p1*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType SurfaceTraceSetParameters_0p1::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType SurfaceTraceSetParameters_0p1::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void SurfaceTraceSetParameters_0p1::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<SurfaceTraceSetParameters_0p1::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */
/* [0] - traces (not an array of structs) */

void SurfaceTraceSetParameters_0p1::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void SurfaceTraceSetParameters_0p1::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="traces"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("traces", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		HintTable[1].init("longDescription", "A set of surface traces belonging to a single chunk.  Since chunks\n					may have a complex shape, the triangles which are on the destructible's surface may not\n					form a contiguous set.  Therefore there may be more than one surface trace per chunk.", true);
		HintTable[2].init("shortDescription", "A set of surface traces belonging to a single chunk", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "SurfaceTraceParameters" };
		ParamDefTable[1].setRefVariantVals((const char**)RefVariantVals, 1);


		ParamDef->setArraySize(-1);
		static const uint8_t dynHandleIndices[1] = { 0, };
		ParamDef->setDynamicHandleIndicesMap(dynHandleIndices, 1);

	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="traces[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("traces", TYPE_REF, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", uint64_t(1), true);
		HintTable[1].init("longDescription", "A set of surface traces belonging to a single chunk.  Since chunks\n					may have a complex shape, the triangles which are on the destructible's surface may not\n					form a contiguous set.  Therefore there may be more than one surface trace per chunk.", true);
		HintTable[2].init("shortDescription", "A set of surface traces belonging to a single chunk", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "SurfaceTraceParameters" };
		ParamDefTable[2].setRefVariantVals((const char**)RefVariantVals, 1);



	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="positionOffset"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("positionOffset", TYPE_VEC3, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Chunk-local offset for this trace, needed for instanced chunks.", true);
		HintTable[1].init("shortDescription", "Chunk-local offset for this trace, needed for instanced chunks", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[2];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(3);

		ParamDefTable[0].setChildren(Children, 2);
	}

	// SetChildren for: nodeIndex=1, longName="traces"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(2);

		ParamDefTable[1].setChildren(Children, 1);
	}

	mBuiltFlag = true;

}
void SurfaceTraceSetParameters_0p1::initStrings(void)
{
}

void SurfaceTraceSetParameters_0p1::initDynamicArrays(void)
{
	traces.buf = NULL;
	traces.isAllocated = true;
	traces.elementSize = sizeof(NvParameterized::Interface*);
	traces.arraySizes[0] = 0;
}

void SurfaceTraceSetParameters_0p1::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	positionOffset = physx::PxVec3(physx::PxVec3(0.0f));

	initDynamicArrays();
	initStrings();
	initReferences();
}

void SurfaceTraceSetParameters_0p1::initReferences(void)
{
}

void SurfaceTraceSetParameters_0p1::freeDynamicArrays(void)
{
	if (traces.isAllocated && traces.buf)
	{
		mParameterizedTraits->free(traces.buf);
	}
}

void SurfaceTraceSetParameters_0p1::freeStrings(void)
{
}

void SurfaceTraceSetParameters_0p1::freeReferences(void)
{

	for (int i = 0; i < traces.arraySizes[0]; ++i)
	{
		if (traces.buf[i])
		{
			traces.buf[i]->destroy();
		}
	}
}

} // namespace parameterized
} // namespace nvidia