	@ data/text/trainers.inc:1094 Route112_Text_BriceDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C2F1
gText_Rom_25C2F1: @ 0x0825C2F1
	.string "まけた……\nわっはっはっ!{EOS}"
	.if (. - gText_Rom_25C2F1) != 0xe
	.error "gText_Rom_25C2F1 must retain its original byte length"
	.endif
