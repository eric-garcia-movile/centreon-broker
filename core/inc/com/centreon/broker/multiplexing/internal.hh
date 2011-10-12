/*
** Copyright 2009-2011 Merethis
**
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

#ifndef CCB_MULTIPLEXING_INTERNAL_HH_
# define CCB_MULTIPLEXING_INTERNAL_HH_

# include <QMutex>
# include <QVector>

namespace                           com {
  namespace                         centreon {
    namespace                       broker {
      namespace                     multiplexing {
        // Forward declaration.
        class                       subscriber;

        // Internal multiplexing variables.
        extern QVector<subscriber*> gl_subscribers;
        extern QMutex               gl_subscribersm;
      }
    }
  }
}

#endif /* !CCB_MULTIPLEXING_INTERNAL_HH_ */
