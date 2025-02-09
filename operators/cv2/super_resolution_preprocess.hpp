// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "ocos.h"

struct KernelSuperResolutionPreProcess : BaseKernel {
  KernelSuperResolutionPreProcess(const OrtApi& api);
  void Compute(OrtKernelContext* context);
};

struct CustomOpSuperResolutionPreProcess : OrtW::CustomOpBase<CustomOpSuperResolutionPreProcess, KernelSuperResolutionPreProcess> {
  const char* GetName() const;
  size_t GetInputTypeCount() const;
  ONNXTensorElementDataType GetInputType(size_t index) const;
  size_t GetOutputTypeCount() const;
  ONNXTensorElementDataType GetOutputType(size_t index) const;
};
