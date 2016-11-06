/bin/sh

find ./ -name "*.sh" -type f | rev | cut -d . -f 2 | cut -d / -f 1 | rev
