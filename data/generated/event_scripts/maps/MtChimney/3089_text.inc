	@ data/maps/MtChimney/scripts.inc:714 MtChimney_Text_LavaCookiesJust200
	.globl gText_Rom_2156F6
gText_Rom_2156F6: @ 0x082156F6
	.string "えんとつやま めいぶつ\nフエンせんべい ひとつ 200えん!\lかって おいきよ$"
	.if (. - gText_Rom_2156F6) > 0x28
	.error "gText_Rom_2156F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2156F6) < 0x28
	.space 0x28 - (. - gText_Rom_2156F6)
	.endif
