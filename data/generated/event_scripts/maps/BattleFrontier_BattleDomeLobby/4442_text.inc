	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:617 BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction
	.globl gText_Rom_227BDE
gText_Rom_227BDE: @ 0x08227BDE
	.string "ここは ??????\nただいま けんせつちゅう!{EOS}"
	.if (. - gText_Rom_227BDE) > 0x19
	.error "gText_Rom_227BDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227BDE) < 0x19
	.space 0x19 - (. - gText_Rom_227BDE)
	.endif
