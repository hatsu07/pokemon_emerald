	@ src/strings.c:705 gText_FacilityLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC474
gText_Rom_5CC474: @ 0x085CC474
	.string "{STR_VAR_1} つうしん$"
	.if (. - gText_Rom_5CC474) != 0x8
	.error "gText_Rom_5CC474 must retain its original byte length"
	.endif
