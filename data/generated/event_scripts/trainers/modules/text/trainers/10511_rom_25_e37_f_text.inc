	@ data/text/trainers.inc:1859 Route118_Text_RoseRegister
	.globl gText_Rom_25E37F
gText_Rom_25E37F: @ 0x0825E37F
	.string "あら その においは ポケナビね\nぜひとも とうろく しあいましょう!{EOS}"
	.if (. - gText_Rom_25E37F) > 0x24
	.error "gText_Rom_25E37F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E37F) < 0x24
	.space 0x24 - (. - gText_Rom_25E37F)
	.endif
