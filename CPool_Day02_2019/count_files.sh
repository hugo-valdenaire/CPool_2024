#!/bin/bash

find . -type f | grep -v '\./\.' | wc -l
