	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:544 BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou
	.globl gText_Rom_2278C2
gText_Rom_2278C2: @ 0x082278C2
	.string "おまちしておりました!{EOS}"
	.if (. - gText_Rom_2278C2) > 0xc
	.error "gText_Rom_2278C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2278C2) < 0xc
	.space 0xc - (. - gText_Rom_2278C2)
	.endif
