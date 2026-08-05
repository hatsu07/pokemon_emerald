	@ src/strings.c:796 gText_CurrentBattlePoints
	.globl gText_Rom_5CCAF6
gText_Rom_5CCAF6: @ 0x085CCAF6
	.string "いま たまっている バトルポイントです$"
	.if (. - gText_Rom_5CCAF6) > 0x14
	.error "gText_Rom_5CCAF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAF6) < 0x14
	.space 0x14 - (. - gText_Rom_5CCAF6)
	.endif
