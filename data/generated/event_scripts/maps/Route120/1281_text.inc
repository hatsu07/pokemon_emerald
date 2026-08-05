	@ data/maps/Route120/scripts.inc:403 Route120_Text_StevenGoodbye
	.globl gText_Rom_1EDFE1
gText_Rom_1EDFE1: @ 0x081EDFE1
	.string "ダイゴ『{PLAYER}{KUN}\pボクは がんばっている\nトレーナーと ポケモンが すきだから\pきみのこと いいと おもうよ\pじゃあ\nまた どこかで あおう!$"
	.if (. - gText_Rom_1EDFE1) > 0x48
	.error "gText_Rom_1EDFE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EDFE1) < 0x48
	.space 0x48 - (. - gText_Rom_1EDFE1)
	.endif
