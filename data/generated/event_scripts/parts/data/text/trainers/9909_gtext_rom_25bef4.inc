	@ data/text/trainers.inc:995 Route111_Text_WiltonRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25BEF4
gText_Rom_25BEF4: @ 0x0825BEF4
	.string "きみの きたえかた さんこうに なるな!\nきが むいたら さいど たたかってほしい$"
	.if (. - gText_Rom_25BEF4) != 0x2a
	.error "gText_Rom_25BEF4 must retain its original byte length"
	.endif
