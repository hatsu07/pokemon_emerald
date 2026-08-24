	.globl gText_Rom_5CA9E4

	@ src/data/trainers.h:16880 trainers_line_16880 (+2 aliases)
	.globl gText_Rom_5CA9E4
gText_Rom_5CA9E4: @ 0x085CA9E4
	.string "ミクリ{EOS}"
	.if (. - gText_Rom_5CA9E4) > 0x4
	.error "gText_Rom_5CA9E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E4) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9E4)
	.endif

	@ src/data/trainers.h:43075 trainers_line_43075 (+4 aliases)
	.globl gText_Rom_5CA9E8
gText_Rom_5CA9E8: @ 0x085CA9E8
	.string "ダイゴ{EOS}"
	.if (. - gText_Rom_5CA9E8) > 0x4
	.error "gText_Rom_5CA9E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E8) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9E8)
	.endif

	@ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
	.globl gText_Rom_5CA9EC
gText_Rom_5CA9EC: @ 0x085CA9EC
	.string "トウキ{EOS}"
	.if (. - gText_Rom_5CA9EC) > 0x4
	.error "gText_Rom_5CA9EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9EC) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9EC)
	.endif
