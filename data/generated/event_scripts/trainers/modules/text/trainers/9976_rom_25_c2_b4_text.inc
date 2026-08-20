	@ data/text/trainers.inc:1088 Route111_Text_BiancaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C2B4
gText_Rom_25C2B4: @ 0x0825C2B4
	.string "この さきの みちのりは\nけっこう ながいわよ!{EOS}"
	.if (. - gText_Rom_25C2B4) != 0x19
	.error "gText_Rom_25C2B4 must retain its original byte length"
	.endif
