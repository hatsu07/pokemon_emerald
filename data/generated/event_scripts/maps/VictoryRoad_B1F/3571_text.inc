	@ data/maps/VictoryRoad_B1F/scripts.inc:44 VictoryRoad_B1F_Text_ShannonPostBattle
	.globl gText_Rom_219A70
gText_Rom_219A70: @ 0x08219A70
	.string "いつも いっしょに いることで\nポケモンと トレーナーとの あいだに\lしんらい かんけいが できるの"
	.byte EOS
	.if (. - gText_Rom_219A70) > 0x33
	.error "gText_Rom_219A70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A70) < 0x33
	.space 0x33 - (. - gText_Rom_219A70)
	.endif
