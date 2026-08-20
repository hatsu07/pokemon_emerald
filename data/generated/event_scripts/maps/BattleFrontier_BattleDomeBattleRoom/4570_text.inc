	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1052 BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster
	.globl gText_Rom_22981A
gText_Rom_22981A: @ 0x0822981A
	.string "おうじゃの ふうかく ただよう!{EOS}"
	.if (. - gText_Rom_22981A) > 0x11
	.error "gText_Rom_22981A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22981A) < 0x11
	.space 0x11 - (. - gText_Rom_22981A)
	.endif
