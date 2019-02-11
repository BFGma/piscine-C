#!bin/sh
find . -name "*.sh" | rev | cut -b 4- | cut  -d/ -f1 | rev
