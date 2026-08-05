	@ data/maps/VictoryRoad_B2F/scripts.inc:76 VictoryRoad_B2F_Text_FelixPostBattle
	.globl gText_Rom_219DF6
gText_Rom_219DF6: @ 0x08219DF6
	.string "もうすぐ ポケモンリーグと おもうと\nきんちょう して きんちょう して!\lみため ごまかすのが せいいっぱい です"
	.byte EOS
	.if (. - gText_Rom_219DF6) > 0x3b
	.error "gText_Rom_219DF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219DF6) < 0x3b
	.space 0x3b - (. - gText_Rom_219DF6)
	.endif
