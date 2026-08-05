	@ data/maps/VictoryRoad_B1F/scripts.inc:29 VictoryRoad_B1F_Text_SamuelIntro (+1 aliases)
	.globl gText_Rom_2199E2
gText_Rom_2199E2: @ 0x082199E2
	.string "ポケモンリーグに ちかづいていると おもうと\nなんだか ドキドキ してきたよ……"
	.byte EOS
	.if (. - gText_Rom_2199E2) > 0x29
	.error "gText_Rom_2199E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2199E2) < 0x29
	.space 0x29 - (. - gText_Rom_2199E2)
	.endif
