#pragma once
#include "UnrealEnginePython.h"

#if WITH_EDITOR

#include "UEPyFbxManager.h"
#include "UEPyFbxIOSettings.h"
#include "UEPyFbxImporter.h"
#include "UEPyFbxScene.h"
#include "UEPyFbxNode.h"
#include "UEPyFbxObject.h"
#include "UEPyFbxProperty.h"

void ue_python_init_fbx(PyObject *);

#endif
