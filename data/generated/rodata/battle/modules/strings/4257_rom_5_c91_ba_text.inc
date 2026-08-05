	@ src/strings.c:103 gText_DexNatDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C91BA
gText_Rom_5C91BA: @ 0x085C91BA
	.string "ぜんこく ばん ポケモンずかん$"
	.if (. - gText_Rom_5C91BA) != 0x10
	.error "gText_Rom_5C91BA must retain its original byte length"
	.endif
