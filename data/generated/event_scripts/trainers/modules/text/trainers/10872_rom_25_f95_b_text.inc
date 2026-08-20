	@ data/text/trainers.inc:2390 Route121_Text_MarcelDefeat (+1 aliases)
	.globl gText_Rom_25F95B
gText_Rom_25F95B: @ 0x0825F95B
	.string "あっと どうしたことだ?{EOS}"
	.if (. - gText_Rom_25F95B) > 0xd
	.error "gText_Rom_25F95B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F95B) < 0xd
	.space 0xd - (. - gText_Rom_25F95B)
	.endif
