	@ src/strings.c:967 gJPText_Player
	.globl gText_Rom_5C8BA8
gText_Rom_5C8BA8: @ 0x085C8BA8
	.string "プレイヤー{EOS}"
	.if (. - gText_Rom_5C8BA8) > 0x6
	.error "gText_Rom_5C8BA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BA8) < 0x6
	.space 0x6 - (. - gText_Rom_5C8BA8)
	.endif
