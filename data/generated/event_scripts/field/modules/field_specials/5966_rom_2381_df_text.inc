	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_2381DF
gText_Rom_2381DF: @ 0x082381DF
	.string "サクサクッと　バトルファクトリーの\nバトルトレード　ダブルに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_2381DF) > 0x59
	.error "gText_Rom_2381DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2381DF) < 0x59
	.space 0x59 - (. - gText_Rom_2381DF)
	.endif
