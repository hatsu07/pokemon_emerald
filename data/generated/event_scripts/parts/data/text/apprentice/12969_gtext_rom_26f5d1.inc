	@ data/text/apprentice.inc:370 gText_ApprenticeThanksHeldItem8
	.globl gText_Rom_26F5D1
gText_Rom_26F5D1: @ 0x0826F5D1
	.string "{STR_VAR_1} ですねっ!\nこれって これって {PLAYER}さんと\lもしかして おそろい だったりしてっ!\pもー ぜったい もたせちゃいます!\nでは また こんど\lいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_26F5D1) > 0x5b
	.error "gText_Rom_26F5D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F5D1) < 0x5b
	.space 0x5b - (. - gText_Rom_26F5D1)
	.endif
