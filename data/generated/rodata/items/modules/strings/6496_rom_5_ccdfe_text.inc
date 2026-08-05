	@ src/strings.c:843 gText_PkmnJumpRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCDFE
gText_Rom_5CCDFE: @ 0x085CCDFE
	.string "ミニポケモンでジャンプの きろく$"
	.if (. - gText_Rom_5CCDFE) != 0x11
	.error "gText_Rom_5CCDFE must retain its original byte length"
	.endif
