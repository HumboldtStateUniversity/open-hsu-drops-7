#!/bin/sh
# Script to rebuild the openhsu installation profile
# This command expects to be run within the openhsu profile.
# To use this command you must have `drush make` and `git` installed.

if [ -f openhsu.make ]; then

  echo "\nThis command can be used to rebuild the installation profile in place.\n"
  echo "  [1] Rebuild profile in place in release mode (latest stable release)"
  echo "Selection: \c"
  read SELECTION

  if [ $SELECTION = "1" ]; then

    echo "Building OpenHSU! install profile in release mode..."
    drush make --no-core --no-gitinfofile --contrib-destination=. openhsu.make

  else
   echo "Invalid selection."
  fi
else
  echo 'Could not locate file "drupal-org.make"'
fi
