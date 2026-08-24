	@ src/strings.c:967 gJPText_Player
	.globl gJPText_Player
gJPText_Player: @ 0x085C8BA8
	.string "プレイヤー{EOS}"
	.if (. - gJPText_Player) > 0x6
	.error "gJPText_Player may not grow beyond its original slot"
	.endif
	.if (. - gJPText_Player) < 0x6
	.space 0x6 - (. - gJPText_Player)
	.endif
