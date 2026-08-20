	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:231 EverGrandeCity_ChampionsRoom_Text_MayAdvice
	.globl gText_Rom_210D9B
gText_Rom_210D9B: @ 0x08210D9B
	.string "ハルカ『{PLAYER}{KUN}!\pチャンピオンに ちょうせん するまえに\nアドバイス……!{EOS}"
	.if (. - gText_Rom_210D9B) > 0x27
	.error "gText_Rom_210D9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210D9B) < 0x27
	.space 0x27 - (. - gText_Rom_210D9B)
	.endif
