	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_236854
gText_Rom_236854: @ 0x08236854
	.string "こうげきの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_236854) != 0x12
	.error "gText_Rom_236854 must retain its original byte length"
	.endif
	.globl gText_Rom_236862
	.set gText_Rom_236862, gText_Rom_236854 + 0xe
	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_236866
gText_Rom_236866: @ 0x08236866
	.string "とくこうの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_236866) != 0x12
	.error "gText_Rom_236866 must retain its original byte length"
	.endif
	.globl gText_Rom_236874
	.set gText_Rom_236874, gText_Rom_236866 + 0xe
	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_236878
gText_Rom_236878: @ 0x08236878
	.string "ぼうぎょの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_236878) != 0x12
	.error "gText_Rom_236878 must retain its original byte length"
	.endif
	.globl gText_Rom_236886
	.set gText_Rom_236886, gText_Rom_236878 + 0xe
	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23688A
gText_Rom_23688A: @ 0x0823688A
	.string "とくぼうの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_23688A) != 0x12
	.error "gText_Rom_23688A must retain its original byte length"
	.endif
	.globl gText_Rom_236898
	.set gText_Rom_236898, gText_Rom_23688A + 0xe
	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23689C
gText_Rom_23689C: @ 0x0823689C
	.string "すばやさの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_23689C) != 0x12
	.error "gText_Rom_23689C must retain its original byte length"
	.endif
	.globl gText_Rom_2368AA
	.set gText_Rom_2368AA, gText_Rom_23689C + 0xe
	@ asm/field_specials.s:6023 sub_0813AAAC (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2368AE
gText_Rom_2368AE: @ 0x082368AE
	.string "たいりょくの　きそポイントを　あげる"
	.byte EOS
	.if (. - gText_Rom_2368AE) != 0x13
	.error "gText_Rom_2368AE must retain its original byte length"
	.endif
	.globl gText_Rom_2368BD
	.set gText_Rom_2368BD, gText_Rom_2368AE + 0xf
	@ asm/field_specials.s:6023 sub_0813AAAC (+4 aliases)
	.globl gText_Rom_2368C1
gText_Rom_2368C1: @ 0x082368C1
	.string "もたせると　たいりょくが　せんとうの　あいだ\nすこしずつ　かいふくする"
	.byte EOS
	.if (. - gText_Rom_2368C1) > 0x24
	.error "gText_Rom_2368C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2368C1) < 0x24
	.space 0x24 - (. - gText_Rom_2368C1)
	.endif
