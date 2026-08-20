	@ data/maps/MeteorFalls_1F_2R/scripts.inc:98 MeteorFalls_1F_2R_Text_JohnIntro (+1 aliases)
	.globl gText_Rom_2132D8
gText_Rom_2132D8: @ 0x082132D8
	.string "ゲン『わしらは いつも ふうふで\nポケモンを しておるからのう\lしょうぶにも じしんが あるんじゃよ{EOS}"
	.if (. - gText_Rom_2132D8) > 0x33
	.error "gText_Rom_2132D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2132D8) < 0x33
	.space 0x33 - (. - gText_Rom_2132D8)
	.endif
