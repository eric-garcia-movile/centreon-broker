=====================
Centreon Broker 3.0.4
=====================

*********
Bug fixes
*********

BA availabilities with non-standard timeperiods
===============================================

Availabilities were improperly computed when linked to non-standard
timeperiods (exceptions, exclusions, templates, ...).

Use prepared statements on logs and data_bin
============================================

Starting with Centreon 2.8, the default storage engine for the logs and
data_bin tables is now InnoDB. To improve performances with this storage
engine, the query system now use prepared statements and transactions to
insert data in these tables.

=====================
Centreon Broker 3.0.3
=====================

*********
Bug fixes
*********

Non-OK statuses in BAM expressions were always considered as OK
===============================================================

Non-OK statuses in BAM expressions (such as {CRITICAL}) were always
treated as OKs by the BAM computation engine. Therefore most
expressions using non-OK stasuses were improperly evaluated and
sometimes trigger BA impacts that were not justified.

Use non-standard path in watchdog
=================================

The watchdog was always using */usr/sbin/cbd* to run the Centreon Broker
daemon. This was not aligned with the build variable WITH_PREFIX_BIN.
This should help users of Debian-based distributions in their manual
installations.

=====================
Centreon Broker 3.0.2
=====================

*********
Bug fixes
*********

Cleanup service events after host deletion
==========================================

This fix was introduced along Centreon Engine 1.6.2. It allows service
events to be properly cleaned up after host deletion.

Asynchronous host/service cleanup
=================================

The SQL cleanup thread contained an invalid query that prevented hosts
and services tables to be cleaned up properly.

=====================
Centreon Broker 3.0.1
=====================

**********
What's new
**********

Immediate shutdown
==================

Now even in case of heavy load Centreon Broker will shutdown in seconds
instead of multiple minutes in some circumstances.

Automatic data retention
========================

Centreon Broker fully handle data retention on its own. Configuration
is very limited : a cache directory and a watermark limit.

JSON statistics
===============

For better programatic use of Centreon Broker statistics, these
information are now written in JSON.

Compatibility with Centreon Engine 1.6
======================================

Centreon Engine 1.6 introduces technical changes needed by Centreon
Broker 3 and is therefore not compatible with the earlier releases of
Centreon Engine.

Dropped support of NDO protocol
===============================

The NDO protocol is no longer supported by Centreon Broker. Please use
the BBDO protocol instead, which is far better (lower network footprint,
automatic compression and encryption).
