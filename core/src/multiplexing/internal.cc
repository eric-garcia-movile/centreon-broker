/*
** Copyright 2009-2011 MERETHIS
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

#include "multiplexing/internal.hh"

using namespace com::centreon::broker;

/**************************************
*                                     *
*          Global Variables           *
*                                     *
**************************************/

// List of subscribers.
QList<multiplexing::subscriber*> multiplexing::gl_subscribers;
QMutex                           multiplexing::gl_subscribersm;