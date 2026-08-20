	@ data/text/trainers.inc:848 Route110_Text_IsabelDefeated (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B862
gText_Rom_25B862: @ 0x0825B862
	.string "あら まあ イヤですわ{EOS}"
	.if (. - gText_Rom_25B862) != 0xc
	.error "gText_Rom_25B862 must retain its original byte length"
	.endif
