	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:711 BattleFrontier_BattlePyramidLobby_Text_RulesAreListed
	.globl gText_Rom_22D31A
gText_Rom_22D31A: @ 0x0822D31A
	.string "バトルアドベンチャーの\nルールが かかれている!{EOS}"
	.if (. - gText_Rom_22D31A) > 0x19
	.error "gText_Rom_22D31A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D31A) < 0x19
	.space 0x19 - (. - gText_Rom_22D31A)
	.endif
