	@ data/text/trainers.inc:1940 Route119_Text_BrentDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E6A7
gText_Rom_25E6A7: @ 0x0825E6A7
	.string "うわあ まけたーっ!$"
	.if (. - gText_Rom_25E6A7) != 0xb
	.error "gText_Rom_25E6A7 must retain its original byte length"
	.endif
