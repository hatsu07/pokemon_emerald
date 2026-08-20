	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:657 BattleFrontier_BattleDomeLobby_Text_RulesAreListed
	.globl gText_Rom_227D5C
gText_Rom_227D5C: @ 0x08227D5C
	.string "バトルトーナメントの\nルールが かかれている!{EOS}"
	.if (. - gText_Rom_227D5C) > 0x18
	.error "gText_Rom_227D5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227D5C) < 0x18
	.space 0x18 - (. - gText_Rom_227D5C)
	.endif
