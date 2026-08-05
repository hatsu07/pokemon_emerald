	@ data/text/cable_club.inc:256 CableClub_Text_ChooseGroupLeaderOfTwo
	.globl gText_Rom_2485D7
gText_Rom_2485D7: @ 0x082485D7
	.string "ふたりで はなしあって ひとりが\nリーダーに なってください\pもうひとりは グループにはいる を\nえらんでください$"
	.if (. - gText_Rom_2485D7) > 0x3a
	.error "gText_Rom_2485D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2485D7) < 0x3a
	.space 0x3a - (. - gText_Rom_2485D7)
	.endif
