	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23802A
gText_Rom_23802A: @ 0x0823802A
	.string "サクサクッと\nバトルタワーの　ダブル　バトルルームに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23802A) > 0x55
	.error "gText_Rom_23802A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23802A) < 0x55
	.space 0x55 - (. - gText_Rom_23802A)
	.endif
