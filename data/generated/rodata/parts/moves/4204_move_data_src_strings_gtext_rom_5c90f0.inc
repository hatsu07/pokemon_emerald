	@ src/strings.c:74 gText_ExecuteSearchSwitch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C90F0
gText_Rom_5C90F0: @ 0x085C90F0
	.string "けんさく/きりかえを じっこうします$"
	.if (. - gText_Rom_5C90F0) != 0x13
	.error "gText_Rom_5C90F0 must retain its original byte length"
	.endif
