	@ data/maps/Route110/scripts.inc:897 Route110_Text_AlwaysAimHigher
	.globl gText_Rom_1E9DAD
gText_Rom_1E9DAD: @ 0x081E9DAD
	.string "どんな けっか だろうが さらに\nうえを めざしての チャレンジ まってるよ!{EOS}"
	.if (. - gText_Rom_1E9DAD) > 0x28
	.error "gText_Rom_1E9DAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9DAD) < 0x28
	.space 0x28 - (. - gText_Rom_1E9DAD)
	.endif
