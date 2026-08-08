	@ data/maps/VictoryRoad_1F/scripts.inc:166 VictoryRoad_1F_Text_QuincyIntro (+1 aliases)
	.globl gText_Rom_2198B0
gText_Rom_2198B0: @ 0x082198B0
	.string "チャンピオンロード とは なにか?\nかてたら おしえてやろう!"
	.byte EOS
	.if (. - gText_Rom_2198B0) > 0x20
	.error "gText_Rom_2198B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198B0) < 0x20
	.space 0x20 - (. - gText_Rom_2198B0)
	.endif
