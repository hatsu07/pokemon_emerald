	@ data/text/cable_club.inc:259 CableClub_Text_ChooseGroupLeaderOfFour
	.globl gText_Rom_248611
gText_Rom_248611: @ 0x08248611
	.string "4にんで はなしあって ひとりが\nグループリーダーに なってください\pほかの ひとは グループにはいる を\nえらんで ください$"
	.if (. - gText_Rom_248611) > 0x40
	.error "gText_Rom_248611 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248611) < 0x40
	.space 0x40 - (. - gText_Rom_248611)
	.endif
