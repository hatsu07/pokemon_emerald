	@ data/text/trainers.inc:584 Route109_Text_AliceDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25AE49
gText_Rom_25AE49: @ 0x0825AE49
	.string "あちちちちっ!$"
	.if (. - gText_Rom_25AE49) != 0x8
	.error "gText_Rom_25AE49 must retain its original byte length"
	.endif
