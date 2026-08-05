	@ src/strings.c:1078 gText_NothingSentOver
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_2C295E
gText_Rom_2C295E: @ 0x082C295E
	.string "  なにも おくられて\nきません でした$"
	.if (. - gText_Rom_2C295E) != 0x15
	.error "gText_Rom_2C295E must retain its original byte length"
	.endif
