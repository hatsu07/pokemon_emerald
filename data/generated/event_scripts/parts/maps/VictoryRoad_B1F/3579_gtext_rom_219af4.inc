	@ data/maps/VictoryRoad_B1F/scripts.inc:56 VictoryRoad_B1F_Text_MitchellIntro (+1 aliases)
	.globl gText_Rom_219AF4
gText_Rom_219AF4: @ 0x08219AF4
	.string "わたしの ポケモンは すばらしいですよ!"
	.byte EOS
	.if (. - gText_Rom_219AF4) > 0x15
	.error "gText_Rom_219AF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219AF4) < 0x15
	.space 0x15 - (. - gText_Rom_219AF4)
	.endif
