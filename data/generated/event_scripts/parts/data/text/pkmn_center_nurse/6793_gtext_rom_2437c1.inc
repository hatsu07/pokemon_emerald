	@ data/text/pkmn_center_nurse.inc:18 gText_WeHopeToSeeYouAgain (+1 aliases)
	.globl gText_Rom_2437C1
gText_Rom_2437C1: @ 0x082437C1
	.string "またの\nごりようを おまち してます!$"
	.if (. - gText_Rom_2437C1) > 0x14
	.error "gText_Rom_2437C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2437C1) < 0x14
	.space 0x14 - (. - gText_Rom_2437C1)
	.endif
