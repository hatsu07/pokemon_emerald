#!/bin/bash

OBJDUMP="arm-none-eabi-objdump -D -bbinary -marmv4t -Mforce-thumb"
$OBJDUMP baserom.gba > baserom_jp.dump
$OBJDUMP pokeemerald_jp.gba > pokeemerald_jp.dump
diff -u baserom_jp.dump pokeemerald_jp.dump > asmdiff.patch
echo "Diff complete. Output written to asmdiff.patch"