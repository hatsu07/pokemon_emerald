	@ data/maps/FortreeCity_Gym/scripts.inc:265 FortreeCity_Gym_Text_ExplainAerialAce
	.globl gText_Rom_204A14
gText_Rom_204A14: @ 0x08204A14
	.string "わざマシン40の なかみは\nつばめがえし!\pその すばやさ……\nどんな ポケモンでも\lよけることは できないでしょう!\p…… …… ……{EOS}"
	.if (. - gText_Rom_204A14) > 0x45
	.error "gText_Rom_204A14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204A14) < 0x45
	.space 0x45 - (. - gText_Rom_204A14)
	.endif
