	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:537 BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying (+1 aliases)
	.globl gText_Rom_23BC1D
gText_Rom_23BC1D: @ 0x0823BC1D
	.string "おつかれさまでした!"
	.byte EOS
	.if (. - gText_Rom_23BC1D) > 0xb
	.error "gText_Rom_23BC1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BC1D) < 0xb
	.space 0xb - (. - gText_Rom_23BC1D)
	.endif
