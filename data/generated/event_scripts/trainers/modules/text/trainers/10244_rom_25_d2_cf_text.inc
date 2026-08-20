	@ data/text/trainers.inc:1478 Route115_Text_NobRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D2CF
gText_Rom_25D2CF: @ 0x0825D2CF
	.string "うがーっ!\nまた まけたーっ!{EOS}"
	.if (. - gText_Rom_25D2CF) != 0x10
	.error "gText_Rom_25D2CF must retain its original byte length"
	.endif
