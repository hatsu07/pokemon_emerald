	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:128 SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory
	.globl gText_Rom_20FB44
gText_Rom_20FB44: @ 0x0820FB44
	.string "しじょう さいだいの タネボー!\n{STR_VAR_2}の {STR_VAR_3}cmのやつ!\pハスボーより おおきい タネボー\nいつでも ぼしゅうちゅう!{EOS}"
	.if (. - gText_Rom_20FB44) > 0x3d
	.error "gText_Rom_20FB44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FB44) < 0x3d
	.space 0x3d - (. - gText_Rom_20FB44)
	.endif
