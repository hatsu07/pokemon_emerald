	@ data/text/cable_club.inc:262 CableClub_Text_ChooseGroupLeader
	.globl gText_Rom_24A7C2
gText_Rom_24A7C2: @ 0x0824A7C2
	.string "みんなで はなしあって ひとりが\nグループリーダーに なってください\pほかの ひとは グループにはいる を\nえらんでください$"
	.if (. - gText_Rom_24A7C2) > 0x3f
	.error "gText_Rom_24A7C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A7C2) < 0x3f
	.space 0x3f - (. - gText_Rom_24A7C2)
	.endif
