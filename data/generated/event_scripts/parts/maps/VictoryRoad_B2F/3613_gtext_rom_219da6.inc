	@ data/maps/VictoryRoad_B2F/scripts.inc:67 VictoryRoad_B2F_Text_JuliePostBattle
	.globl gText_Rom_219DA6
gText_Rom_219DA6: @ 0x08219DA6
	.string "じぶんの あつめた ジムバッジを みて\nいままでの トレーナーを おもいだすのよ"
	.byte EOS
	.if (. - gText_Rom_219DA6) > 0x29
	.error "gText_Rom_219DA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219DA6) < 0x29
	.space 0x29 - (. - gText_Rom_219DA6)
	.endif
