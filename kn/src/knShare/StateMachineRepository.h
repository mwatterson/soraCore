/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#ifndef kn_StateMachineRepository_h
#define kn_StateMachineRepository_h

#include "knShare_Export.h"

#include "Repository.h"

namespace kn
{
  class StateMachine;

  /** @ingroup knShare */
  typedef Repository<StateMachine *> StateMachineRepository;
}

KNSHARE_SINGLETON_DECLARATION(kn::Singleton<kn::Repository<kn::StateMachine *> >);

#endif // kn_StateMachineRepository_h
