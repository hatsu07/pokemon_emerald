	@ data/maps/VictoryRoad_B1F/scripts.inc:65 VictoryRoad_B1F_Text_HalleIntro (+1 aliases)
	.globl gText_Rom_219B48
gText_Rom_219B48: @ 0x08219B48
	.string "オーケイ そんなに かまえないで!\nリラックス して いきましょ!"
	.byte EOS
	.if (. - gText_Rom_219B48) > 0x22
	.error "gText_Rom_219B48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B48) < 0x22
	.space 0x22 - (. - gText_Rom_219B48)
	.endif
