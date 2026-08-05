	@ data/text/trainers.inc:2483 Route123_Text_YukiPostBattle
	.globl gText_Rom_25FCEC
gText_Rom_25FCEC: @ 0x0825FCEC
	.string "ユキ『どーして そんなに つよいの?\nあたちたち たたかって まけたの はじめて!$"
	.if (. - gText_Rom_25FCEC) > 0x2a
	.error "gText_Rom_25FCEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FCEC) < 0x2a
	.space 0x2a - (. - gText_Rom_25FCEC)
	.endif
