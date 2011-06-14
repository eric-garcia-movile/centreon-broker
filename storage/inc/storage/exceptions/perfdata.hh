/*
** Copyright 2011 Merethis
** This file is part of Centreon Broker.
**
** Centreon Broker is free software: you can redistribute it and/or
** modify it under the terms of the GNU General Public License version 2
** as published by the Free Software Foundation.
**
** Centreon Broker is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
** General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Centreon Broker. If not, see
** <http://www.gnu.org/licenses/>.
*/

#ifndef CCB_STORAGE_EXCEPTIONS_PERFDATA_HH_
# define CCB_STORAGE_EXCEPTIONS_PERFDATA_HH_

# include "exceptions/basic.hh"

namespace             com {
  namespace           centreon {
    namespace         broker {
      namespace       storage {
        namespace     exceptions {
          /**
           *  @class perfdata perfdata.hh "storage/exceptions/perfdata.hh"
           *  @brief Perfdata exception.
           *
           *  Exception thrown when handling performance data.
           */
          class       perfdata : public com::centreon::broker::exceptions::basic {
           public:
                      perfdata() throw ();
                      perfdata(perfdata const& pd) throw ();
                      ~perfdata() throw ();
            perfdata& operator=(perfdata const& pdf) throw ();
          };
        }
      }
    }
  }
}

#endif /* !CCB_STORAGE_EXCEPTIONS_PERFDATA_HH_ */