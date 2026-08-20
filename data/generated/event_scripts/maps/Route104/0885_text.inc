	@ data/maps/Route104/scripts.inc:1093 Route104_Text_MayMinesDecentLetsBattle
	.globl gText_Rom_1E7ED8
gText_Rom_1E7ED8: @ 0x081E7ED8
	.string "あたしは かなり いい かんじ!\nどう? ちょっと しょうぶ してみる?{EOS}"
	.if (. - gText_Rom_1E7ED8) > 0x25
	.error "gText_Rom_1E7ED8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7ED8) < 0x25
	.space 0x25 - (. - gText_Rom_1E7ED8)
	.endif
