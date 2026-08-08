	@ data/text/trainers.inc:1874 Route118_Text_PerryDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25E418
gText_Rom_25E418: @ 0x0825E418
	.string "うう…… まけた……$"
	.if (. - gText_Rom_25E418) != 0xb
	.error "gText_Rom_25E418 must retain its original byte length"
	.endif
