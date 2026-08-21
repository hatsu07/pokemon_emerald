	@ src/strings.c:677 gJPText_BattlePoints
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC348
gText_Rom_5CC348: @ 0x085CC348
	.string "ゲームポイント{EOS}"
	.if (. - gText_Rom_5CC348) != 0x8
	.error "gText_Rom_5CC348 must retain its original byte length"
	.endif
