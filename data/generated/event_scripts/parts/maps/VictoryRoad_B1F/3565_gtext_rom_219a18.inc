	@ data/maps/VictoryRoad_B1F/scripts.inc:35 VictoryRoad_B1F_Text_SamuelPostBattle
	.globl gText_Rom_219A18
gText_Rom_219A18: @ 0x08219A18
	.string "ポケモンリーグが とおのいたよ……\nなんだか がっかり するな……"
	.byte EOS
	.if (. - gText_Rom_219A18) > 0x22
	.error "gText_Rom_219A18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A18) < 0x22
	.space 0x22 - (. - gText_Rom_219A18)
	.endif
