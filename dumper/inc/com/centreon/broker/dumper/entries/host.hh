/*
** Copyright 2015 Centreon
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

#ifndef CCB_DUMPER_ENTRIES_HOST_HH
#  define CCB_DUMPER_ENTRIES_HOST_HH

#  include <QString>
#  include "com/centreon/broker/io/data.hh"
#  include "com/centreon/broker/io/event_info.hh"
#  include "com/centreon/broker/mapping/entry.hh"
#  include "com/centreon/broker/namespace.hh"

CCB_BEGIN()

namespace                 dumper {
  namespace               entries {
    /**
     *  @class ba ba.hh "com/centreon/broker/dumper/entries/host.hh"
     *  @brief Host entry.
     *
     *  Some host row of the host configuration table.
     */
    class                 host : public io::data {
    public:
                          host();
                          host(host const& other);
                          ~host();
      host&               operator=(host const& other);
      bool                operator==(host const& other) const;
      bool                operator!=(host const& other) const;
      unsigned int        type() const;
      static unsigned int static_type();

      bool                enable;
      unsigned int        host_id;
      QString             name;
      unsigned int        poller_id;

      static mapping::entry const
                          entries[];
      static io::event_info::event_operations const
                          operations;

    private:
      void                _internal_copy(host const& other);
    };
  }
}

CCB_END()

#endif // !CCB_DUMPER_ENTRIES_HOST_HH
