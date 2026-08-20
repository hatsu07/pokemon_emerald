	@ src/data/trainers.h:43075 trainers_line_43075 (+4 aliases)
	.globl gText_Rom_5F7393
gText_Rom_5F7393: @ 0x085F7393
	.string "ダイゴ{EOS}"
	.if (. - gText_Rom_5F7393) > 0x4
	.error "gText_Rom_5F7393 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7393) < 0x4
	.space 0x4 - (. - gText_Rom_5F7393)
	.endif
