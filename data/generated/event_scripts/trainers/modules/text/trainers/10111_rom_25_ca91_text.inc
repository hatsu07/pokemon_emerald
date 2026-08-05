	@ data/text/trainers.inc:1280 Route113_Text_WyattDefeat (+1 aliases)
	.globl gText_Rom_25CA91
gText_Rom_25CA91: @ 0x0825CA91
	.string "か かって うれしい ですか!\nこんな ボクに かって うれしいですか!$"
	.if (. - gText_Rom_25CA91) > 0x25
	.error "gText_Rom_25CA91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA91) < 0x25
	.space 0x25 - (. - gText_Rom_25CA91)
	.endif
