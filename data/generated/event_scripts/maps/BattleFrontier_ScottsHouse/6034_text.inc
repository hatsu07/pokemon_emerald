	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:275 BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings
	.globl gText_Rom_238F70
gText_Rom_238F70: @ 0x08238F70
	.string "これからも ますます\nきたい しているよ!"
	.byte EOS
	.if (. - gText_Rom_238F70) > 0x16
	.error "gText_Rom_238F70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238F70) < 0x16
	.space 0x16 - (. - gText_Rom_238F70)
	.endif
