	@ data/text/trainers.inc:1931 Route118_Text_DeandreDefeat (+1 aliases)
	.globl gText_Rom_25E63F
gText_Rom_25E63F: @ 0x0825E63F
	.string "ああ だいじょうぶか!?\nボクの ポケモン 1ごう 2ごう 3ごう!{EOS}"
	.if (. - gText_Rom_25E63F) > 0x23
	.error "gText_Rom_25E63F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E63F) < 0x23
	.space 0x23 - (. - gText_Rom_25E63F)
	.endif
