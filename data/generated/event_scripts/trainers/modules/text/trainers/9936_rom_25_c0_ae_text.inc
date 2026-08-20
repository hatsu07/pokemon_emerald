	@ data/text/trainers.inc:1031 Route111_Text_CeliaDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C0AE
gText_Rom_25C0AE: @ 0x0825C0AE
	.string "もー\nほんとに くるんじゃ なかった!{EOS}"
	.if (. - gText_Rom_25C0AE) != 0x14
	.error "gText_Rom_25C0AE must retain its original byte length"
	.endif
