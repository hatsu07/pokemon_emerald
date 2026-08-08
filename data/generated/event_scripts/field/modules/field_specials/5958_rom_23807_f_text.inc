	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23807F
gText_Rom_23807F: @ 0x0823807F
	.string "サクサクッと\nバトルタワーの　マルチ　バトルルームに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23807F) > 0x55
	.error "gText_Rom_23807F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23807F) < 0x55
	.space 0x55 - (. - gText_Rom_23807F)
	.endif
