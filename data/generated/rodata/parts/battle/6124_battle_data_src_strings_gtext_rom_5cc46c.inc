	@ src/strings.c:704 gText_FacilityMulti
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC46C
gText_Rom_5CC46C: @ 0x085CC46C
	.string "{STR_VAR_1} マルチ$"
	.if (. - gText_Rom_5CC46C) != 0x7
	.error "gText_Rom_5CC46C must retain its original byte length"
	.endif
