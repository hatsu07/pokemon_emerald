	@ data/maps/VictoryRoad_B1F/scripts.inc:62 VictoryRoad_B1F_Text_MitchellPostBattle
	.globl gText_Rom_219B1D
gText_Rom_219B1D: @ 0x08219B1D
	.string "あなたと あなたの ポケモンが\nいっしょに いるだけで\lすごい パワーを かんじます"
	.byte EOS
	.if (. - gText_Rom_219B1D) > 0x2b
	.error "gText_Rom_219B1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B1D) < 0x2b
	.space 0x2b - (. - gText_Rom_219B1D)
	.endif
