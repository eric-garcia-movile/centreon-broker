/*
** Copyright 2009-2010 MERETHIS
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
**
** For more information: contact@centreon.com
*/

#ifndef EVENTS_STATE_HH_
# define EVENTS_STATE_HH_

# include <sys/types.h>
# include "events/event.hh"

namespace  events {
  /**
   *  @class state state.hh "events/state.hh"
   *  @brief State of a checkpoint.
   *
   *  This class represent the state of a specific checkpoint for a
   *  given time.
   */
  class    state : public event {
   private:
    void   _internal_copy(state const& s);

   public:
    int    current_state;
    time_t end_time;
    int    host_id;
    int    service_id;
    time_t start_time;
           state();
           state(state const& s);
           ~state();
    state& operator=(state const& s);
    int    get_type() const;
  };
}

#endif /* !EVENTS_STATE_HH_ */