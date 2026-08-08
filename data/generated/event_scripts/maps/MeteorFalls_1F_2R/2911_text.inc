	@ data/maps/MeteorFalls_1F_2R/scripts.inc:143 MeteorFalls_1F_2R_Text_JohnRematchIntro (+1 aliases)
	.globl gText_Rom_21346D
gText_Rom_21346D: @ 0x0821346D
	.string "ゲン『わしらは いつも ふうふで\nポケモンを たのしんでおる からのう\lしょうぶにも じしんが あるんじゃよ$"
	.if (. - gText_Rom_21346D) > 0x37
	.error "gText_Rom_21346D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21346D) < 0x37
	.space 0x37 - (. - gText_Rom_21346D)
	.endif
