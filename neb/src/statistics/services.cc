/*
** Copyright 2013 Centreon
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
**
** For more information : contact@centreon.com
*/

#include <sstream>
#include "com/centreon/broker/config/applier/state.hh"
#include "com/centreon/broker/neb/internal.hh"
#include "com/centreon/broker/neb/statistics/services.hh"
#include "com/centreon/engine/common.hh"
#include "com/centreon/engine/globals.hh"

using namespace com::centreon::broker;
using namespace com::centreon::broker::neb;
using namespace com::centreon::broker::neb::statistics;

/**
 *  Default constructor.
 */
services::services() : plugin("services") {}

/**
 *  Copy constructor.
 *
 *  @param[in] right Object to copy.
 */
services::services(services const& right) : plugin(right) {}

/**
 *  Destructor.
 */
services::~services() {}

/**
 *  Assignment operator.
 *
 *  @param[in] right Object to copy.
 *
 *  @return This object.
 */
services& services::operator=(services const& right) {
  plugin::operator=(right);
  return (*this);
}

/**
 *  Get statistics.
 *
 *  @param[out] output   The output return by the plugin.
 *  @param[out] perfdata The perf data return by the plugin.
 */
void services::run(
              std::string& output,
	      std::string& perfdata) {
  // Count services ok / warning / unknown / critical.
  unsigned int total[4] = { 0, 0, 0, 0 };
  for (service* s(service_list); s; s = s->next)
    ++total[s->current_state];

  unsigned int not_ok(
                 total[STATE_WARNING]
                 + total[STATE_CRITICAL]
                 + total[STATE_UNKNOWN]);

  // Output.
  std::ostringstream oss;
  oss << "Engine " << config::applier::state::instance().poller_name()
      << " has " << total[STATE_OK] << " services on status OK and "
      << not_ok << " services on non-OK status";
  output = oss.str();

  // Perfdata.
  oss.str("");
  oss << "ok=" << total[STATE_OK]
      << " warning=" << total[STATE_WARNING]
      << " critical=" << total[STATE_CRITICAL]
      << " unknown=" << total[STATE_UNKNOWN];
  perfdata = oss.str();

  return ;
}
