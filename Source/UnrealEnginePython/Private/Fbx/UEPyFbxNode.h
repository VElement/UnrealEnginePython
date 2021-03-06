#pragma once
#include "UnrealEnginePython.h"

#if WITH_EDITOR

#include <fbxsdk.h>

struct ue_PyFbxNode {
	PyObject_HEAD
	/* Type-specific fields go here. */
	FbxNode *fbx_node;
};


void ue_python_init_fbx_node(PyObject *);

PyObject *py_ue_new_fbx_node(FbxNode *);

#endif
