#!/bin/bash

sed '1~2d' | cut -d ':' -f 1 | rev | sort -r | sed "$MY_LINE1,$MY_LINE2 !d" | sed ':a;N;$!ba;s/\n/, /g' | sed 's/$/.\n/'


