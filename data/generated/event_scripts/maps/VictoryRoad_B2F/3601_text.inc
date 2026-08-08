	@ data/maps/VictoryRoad_B2F/scripts.inc:49 VictoryRoad_B2F_Text_OwenPostBattle
	.globl gText_Rom_219CEB
gText_Rom_219CEB: @ 0x08219CEB
	.string "おれが きいた ウワサだと\nその つよい こども ってのは\lトウカ しゅっしん らしいな!"
	.byte EOS
	.if (. - gText_Rom_219CEB) > 0x2e
	.error "gText_Rom_219CEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219CEB) < 0x2e
	.space 0x2e - (. - gText_Rom_219CEB)
	.endif
