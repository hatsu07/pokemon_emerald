	@ data/text/trainers.inc:1619 Route116_Text_KarenIntro (+1 aliases)
	.globl gText_Rom_25D8CB
gText_Rom_25D8CB: @ 0x0825D8CB
	.string "スクールでも べんきょう\nかえりみち でも べんきょうよ!{EOS}"
	.if (. - gText_Rom_25D8CB) > 0x1e
	.error "gText_Rom_25D8CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D8CB) < 0x1e
	.space 0x1e - (. - gText_Rom_25D8CB)
	.endif
