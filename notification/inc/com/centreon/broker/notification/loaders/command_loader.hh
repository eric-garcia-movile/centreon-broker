/*
** Copyright 2011-2013 Centreon
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

#ifndef CCB_NOTIFICATION_LOADERS_COMMAND_LOADER_HH
#  define CCB_NOTIFICATION_LOADERS_COMMAND_LOADER_HH

#  include <QSqlDatabase>
#  include <QSqlQuery>
#  include "com/centreon/broker/namespace.hh"
#  include "com/centreon/broker/notification/builders/command_builder.hh"

CCB_BEGIN()

namespace       notification {
  /**
   *  @class command_loader command_loader.hh "com/centreon/broker/notification/loaders/command_loader.hh"
   *  @brief Loader for command objects.
   *
   *  This loader loads the commands from the database.
   */
  class         command_loader {
  public:
    command_loader();

    void        load(QSqlDatabase* db, command_builder* output);
  };

}

CCB_END()

#endif // !CCB_NOTIFICATION_LOADERS_COMMAND_LOADER_HH
