	@ data/maps/MeteorFalls_1F_2R/scripts.inc:107 MeteorFalls_1F_2R_Text_JohnPostBattle
	.globl gText_Rom_21331D
gText_Rom_21331D: @ 0x0821331D
	.string "ゲン『けっこんして 50ねん……\nそういや いちども ばあさんに\lポケモンしょうぶで かってないのう{EOS}"
	.if (. - gText_Rom_21331D) > 0x33
	.error "gText_Rom_21331D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21331D) < 0x33
	.space 0x33 - (. - gText_Rom_21331D)
	.endif
