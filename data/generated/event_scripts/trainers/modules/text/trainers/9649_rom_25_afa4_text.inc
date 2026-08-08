	@ data/text/trainers.inc:623 Route109_Text_RickyRematchDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25AFA4
gText_Rom_25AFA4: @ 0x0825AFA4
	.string "まけた……\nおなかが へってるからだ$"
	.if (. - gText_Rom_25AFA4) != 0x13
	.error "gText_Rom_25AFA4 must retain its original byte length"
	.endif
