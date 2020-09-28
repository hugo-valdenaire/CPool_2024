#!/bin/bash

cut -d ' ' -f 2 | grep "^$1" | wc -l
