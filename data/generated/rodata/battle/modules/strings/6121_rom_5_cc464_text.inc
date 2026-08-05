	@ src/strings.c:703 gText_FacilityDouble
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC464
gText_Rom_5CC464: @ 0x085CC464
	.string "{STR_VAR_1} ダブル$"
	.if (. - gText_Rom_5CC464) != 0x7
	.error "gText_Rom_5CC464 must retain its original byte length"
	.endif
