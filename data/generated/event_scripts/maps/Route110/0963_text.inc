	@ data/maps/Route110/scripts.inc:757 Route110_Text_MayLetsBattle
	.globl gText_Rom_1E97B9
gText_Rom_1E97B9: @ 0x081E97B9
	.string "ハルカ『{PLAYER}{KUN} ひさしぶり!\pいろいろ ポケモン さがしてる あいだに\nあたしの ポケモンも つよくなったんだ!\pだから……\nちょっと しょうぶ しようよ!$"
	.if (. - gText_Rom_1E97B9) > 0x50
	.error "gText_Rom_1E97B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E97B9) < 0x50
	.space 0x50 - (. - gText_Rom_1E97B9)
	.endif
