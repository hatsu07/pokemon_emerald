	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:405 BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering
	.globl gText_Rom_21F509
gText_Rom_21F509: @ 0x0821F509
	.string "なんだとぉー!?\pそれは となりに ぼくが\nいたから でしょっ!\pあのひとは ぼくの おうえんを\nきいて ふりむいて くれたんだ っつーの!"
	.byte EOS
	.if (. - gText_Rom_21F509) > 0x47
	.error "gText_Rom_21F509 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F509) < 0x47
	.space 0x47 - (. - gText_Rom_21F509)
	.endif
