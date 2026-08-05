	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:797 BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine
	.globl gText_Rom_235081
gText_Rom_235081: @ 0x08235081
	.string "ラックシンボルが\nきんいろに かがやいた!"
	.byte EOS
	.if (. - gText_Rom_235081) > 0x16
	.error "gText_Rom_235081 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235081) < 0x16
	.space 0x16 - (. - gText_Rom_235081)
	.endif
