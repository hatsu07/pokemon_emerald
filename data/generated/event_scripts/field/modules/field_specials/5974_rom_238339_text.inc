	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_238339
gText_Rom_238339: @ 0x08238339
	.string "サクサクッと　バトルチューブの\nバトルゲームに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_238339) > 0x52
	.error "gText_Rom_238339 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238339) < 0x52
	.space 0x52 - (. - gText_Rom_238339)
	.endif
