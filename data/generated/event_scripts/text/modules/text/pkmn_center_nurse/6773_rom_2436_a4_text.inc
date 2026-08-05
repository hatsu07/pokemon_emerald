	@ data/text/pkmn_center_nurse.inc:18 gText_WeHopeToSeeYouAgain (+1 aliases)
	.globl gText_Rom_2436A4
gText_Rom_2436A4: @ 0x082436A4
	.string "またの\nごりようを おまち してます!$"
	.if (. - gText_Rom_2436A4) > 0x14
	.error "gText_Rom_2436A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436A4) < 0x14
	.space 0x14 - (. - gText_Rom_2436A4)
	.endif
