	@ src/strings.c:677 gJPText_BattlePoints
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gJPText_BattlePoints
gJPText_BattlePoints: @ 0x085CC348
	.string "ゲームポイント{EOS}"
	.if (. - gJPText_BattlePoints) != 0x8
	.error "gJPText_BattlePoints must retain its original byte length"
	.endif
