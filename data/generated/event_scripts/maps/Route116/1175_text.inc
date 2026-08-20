	@ data/maps/Route116/scripts.inc:419 Route116_Text_CanYouHelpMeFindGlasses
	.globl gText_Rom_1EC24C
gText_Rom_1EC24C: @ 0x081EC24C
	.string "メガネを おとしたんだ……\nきみも さがすの てつだってよ{EOS}"
	.if (. - gText_Rom_1EC24C) > 0x1e
	.error "gText_Rom_1EC24C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC24C) < 0x1e
	.space 0x1e - (. - gText_Rom_1EC24C)
	.endif
