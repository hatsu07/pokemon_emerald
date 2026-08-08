	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:450 BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2274C6
gText_Rom_2274C6: @ 0x082274C6
	.string "またの ごりようを おまちして おります$"
	.if (. - gText_Rom_2274C6) != 0x15
	.error "gText_Rom_2274C6 must retain its original byte length"
	.endif
