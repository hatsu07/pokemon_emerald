	@ data/text/trainers.inc:2966 Route127_Text_AthenaIntro (+1 aliases)
	.globl gText_Rom_26113C
gText_Rom_26113C: @ 0x0826113C
	.string "じっくり ゆっくり しょうぶしましょう\nよろしくね!{EOS}"
	.if (. - gText_Rom_26113C) > 0x1b
	.error "gText_Rom_26113C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26113C) < 0x1b
	.space 0x1b - (. - gText_Rom_26113C)
	.endif
