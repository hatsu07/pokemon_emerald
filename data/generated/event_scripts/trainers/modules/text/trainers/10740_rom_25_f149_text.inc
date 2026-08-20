	@ data/text/trainers.inc:2195 Route120_Text_ChipDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25F149
gText_Rom_25F149: @ 0x0825F149
	.string "まいったね こりゃ{EOS}"
	.if (. - gText_Rom_25F149) != 0xa
	.error "gText_Rom_25F149 must retain its original byte length"
	.endif
