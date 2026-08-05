
	.globl gText_MysteryEventCannotConnect
gText_MysteryEventCannotConnect: @ 0x085CD178
	.string "せつぞく　できない　ききの　ようです\nただしい　ききと　やりなおしてください$"
	.if (. - gText_MysteryEventCannotConnect) != 0x27
	.error "gText_MysteryEventCannotConnect must retain its original byte length"
	.endif
