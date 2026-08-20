	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:545 BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe
	.globl gText_Rom_2226E3
gText_Rom_2226E3: @ 0x082226E3
	.string "さあ はじめようよ!{EOS}"
	.if (. - gText_Rom_2226E3) > 0xb
	.error "gText_Rom_2226E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2226E3) < 0xb
	.space 0xb - (. - gText_Rom_2226E3)
	.endif
