	@ data/text/trainers.inc:992 Route111_Text_WiltonPostBattle
	.globl gText_Rom_25BEBA
gText_Rom_25BEBA: @ 0x0825BEBA
	.string "ポケモンも トレーナーも\nたたかうことで いろんなことを まなぶ!\pだいじ なのは\nまけても あきらめないことさ!{EOS}"
	.if (. - gText_Rom_25BEBA) > 0x3a
	.error "gText_Rom_25BEBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BEBA) < 0x3a
	.space 0x3a - (. - gText_Rom_25BEBA)
	.endif
