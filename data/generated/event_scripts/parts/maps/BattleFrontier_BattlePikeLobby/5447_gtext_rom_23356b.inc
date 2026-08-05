	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:280 BattleFrontier_BattlePikeLobby_Text_TakeChallenge
	.globl gText_Rom_23356B
gText_Rom_23356B: @ 0x0823356B
	.string "バトルゲームに\nちょうせん されますか……?"
	.byte EOS
	.if (. - gText_Rom_23356B) > 0x17
	.error "gText_Rom_23356B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23356B) < 0x17
	.space 0x17 - (. - gText_Rom_23356B)
	.endif
