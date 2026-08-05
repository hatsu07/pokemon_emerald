	@ data/maps/VictoryRoad_B1F/scripts.inc:53 VictoryRoad_B1F_Text_MichellePostBattle
	.globl gText_Rom_219ACD
gText_Rom_219ACD: @ 0x08219ACD
	.string "あなたなら だいじょうぶよ きっと!\nポケモンも やるき まんまん だしね!"
	.byte EOS
	.if (. - gText_Rom_219ACD) > 0x27
	.error "gText_Rom_219ACD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219ACD) < 0x27
	.space 0x27 - (. - gText_Rom_219ACD)
	.endif
