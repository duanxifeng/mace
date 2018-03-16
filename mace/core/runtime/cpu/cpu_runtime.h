//
// Copyright (c) 2017 XiaoMi All rights reserved.
//


#ifndef MACE_CORE_RUNTIME_CPU_CPU_RUNTIME_H_
#define MACE_CORE_RUNTIME_CPU_CPU_RUNTIME_H_

#include "mace/public/mace.h"

namespace mace {

void SetCPURuntime(int omp_num_threads, CPUPowerOption power_option);

}

#endif  // MACE_CORE_RUNTIME_CPU_CPU_RUNTIME_H_