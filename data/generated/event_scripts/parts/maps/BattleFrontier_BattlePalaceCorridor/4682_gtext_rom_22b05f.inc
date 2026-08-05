	@ data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc:122 BattleFrontier_BattlePalaceCorridor_Text_PeopleAndMonAreSame
	.globl gText_Rom_22B05F
gText_Rom_22B05F: @ 0x0822B05F
	.string "ひとも ポケモンも みな おなじ……\pそれぞれの せいかくに よって\nとくいなこと にがてなことが ある……$"
	.if (. - gText_Rom_22B05F) > 0x37
	.error "gText_Rom_22B05F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B05F) < 0x37
	.space 0x37 - (. - gText_Rom_22B05F)
	.endif
