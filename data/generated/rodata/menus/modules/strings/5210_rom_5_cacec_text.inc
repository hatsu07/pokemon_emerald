	@ src/strings.c:480 gText_SomeonesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACEC
gText_Rom_5CACEC: @ 0x085CACEC
	.string "だれかのパソコン$"
	.if (. - gText_Rom_5CACEC) != 0x9
	.error "gText_Rom_5CACEC must retain its original byte length"
	.endif
