	@ data/text/trainers.inc:695 Route109_Text_MelPostBattle
	.globl gText_Rom_25B24C
gText_Rom_25B24C: @ 0x0825B24C
	.string "シキ『ねえ リキ\nあたしのこと おこってない?\lおこっちゃ いやよ$"
	.if (. - gText_Rom_25B24C) > 0x22
	.error "gText_Rom_25B24C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B24C) < 0x22
	.space 0x22 - (. - gText_Rom_25B24C)
	.endif
