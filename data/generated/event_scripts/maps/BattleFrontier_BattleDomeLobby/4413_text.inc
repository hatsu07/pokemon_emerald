	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:537 BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying (+1 aliases)
	.globl gText_Rom_22789C
gText_Rom_22789C: @ 0x0822789C
	.string "おつかれさまでした!{EOS}"
	.if (. - gText_Rom_22789C) > 0xb
	.error "gText_Rom_22789C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22789C) < 0xb
	.space 0xb - (. - gText_Rom_22789C)
	.endif
