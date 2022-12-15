// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "ocos.h"
#include "string_utils.h"

struct KernelSegmentSum : BaseKernel {
  KernelSegmentSum(const OrtApi& api);
  void Compute(OrtKernelContext* context);
};

struct CustomOpSegmentSum : OrtW::CustomOpBase<CustomOpSegmentSum, KernelSegmentSum> {
  size_t GetInputTypeCount() const;
  size_t GetOutputTypeCount() const;
  ONNXTensorElementDataType GetOutputType(size_t index) const;
  const char* GetName() const;
  ONNXTensorElementDataType GetInputType(size_t index) const;
};
