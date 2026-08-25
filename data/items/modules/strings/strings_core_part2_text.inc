	@ src/strings.c:843 gText_PkmnJumpRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PkmnJumpRecords
gText_PkmnJumpRecords: @ 0x085CCDFE
	.string "ミニポケモンでジャンプの きろく{EOS}"
	.if (. - gText_PkmnJumpRecords) != 0x11
	.error "gText_PkmnJumpRecords must retain its original byte length"
	.endif
