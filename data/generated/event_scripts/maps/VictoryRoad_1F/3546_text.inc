	@ data/maps/VictoryRoad_1F/scripts.inc:163 VictoryRoad_1F_Text_HopePostBattle
	.globl gText_Rom_219890
gText_Rom_219890: @ 0x08219890
	.string "あなたには チャンピオンに なれる\nかのうせいが あるみたいね"
	.byte EOS
	.if (. - gText_Rom_219890) > 0x20
	.error "gText_Rom_219890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219890) < 0x20
	.space 0x20 - (. - gText_Rom_219890)
	.endif
