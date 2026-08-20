	@ data/text/trainers.inc:1454 Route115_Text_KoichiIntro (+1 aliases)
	.globl gText_Rom_25D1C2
gText_Rom_25D1C2: @ 0x0825D1C2
	.string "おれのッ!\pワンリキーがッ!\pたたかいを のぞんでいるッ!{EOS}"
	.if (. - gText_Rom_25D1C2) > 0x1e
	.error "gText_Rom_25D1C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D1C2) < 0x1e
	.space 0x1e - (. - gText_Rom_25D1C2)
	.endif
