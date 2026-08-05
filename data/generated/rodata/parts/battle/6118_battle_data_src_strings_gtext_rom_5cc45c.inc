	@ src/strings.c:702 gText_FacilitySingle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC45C
gText_Rom_5CC45C: @ 0x085CC45C
	.string "{STR_VAR_1} シングル$"
	.if (. - gText_Rom_5CC45C) != 0x8
	.error "gText_Rom_5CC45C must retain its original byte length"
	.endif
