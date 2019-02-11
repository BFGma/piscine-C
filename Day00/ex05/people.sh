#!bin/bash
ldapsearch -x uid="z*" cn| grep "cn:" | cut -b 5- |sort -r -f
