	@ data/text/trainers.inc:848 Route110_Text_IsabelDefeated (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B8E1
gText_Rom_25B8E1: @ 0x0825B8E1
	.string "あら まあ イヤですわ$"
	.if (. - gText_Rom_25B8E1) != 0xc
	.error "gText_Rom_25B8E1 must retain its original byte length"
	.endif
