#!/usr/bin/env bash
set -euxo pipefail

LD_LIBRARY_PATH=. LD_PRELOAD=libshim.so $@
