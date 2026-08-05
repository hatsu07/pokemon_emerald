	@ src/strings.c:76 gText_DexNatTitle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C910C
gText_Rom_5C910C: @ 0x085C910C
	.string "ぜんこく ずかん$"
	.if (. - gText_Rom_5C910C) != 0x9
	.error "gText_Rom_5C910C must retain its original byte length"
	.endif
