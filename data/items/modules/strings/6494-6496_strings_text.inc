	.globl gText_Rom_5CCDE3
	.set gText_Rom_5CCDE3, gText_SomeoneDroppedOut + 0x18
	.globl gText_Rom_5CCDE7

	@ asm/dodrio_berry_picking.s:10321 sub_080293D4
	.globl gText_Rom_5CCDE7
gText_Rom_5CCDE7: @ 0x085CCDE7
	.string "てん{EOS}"
	.if (. - gText_Rom_5CCDE7) > 0x3
	.error "gText_Rom_5CCDE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDE7) < 0x3
	.space 0x3 - (. - gText_Rom_5CCDE7)
	.endif
	.globl gText_Rom_5CCDEA

	@ src/strings.c:840 gText_CommunicationStandby3
	.globl gText_Rom_5CCDEA
gText_Rom_5CCDEA: @ 0x085CCDEA
	.string "つうしん たいきちゅうです{EOS}"
	.if (. - gText_Rom_5CCDEA) > 0xe
	.error "gText_Rom_5CCDEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDEA) < 0xe
	.space 0xe - (. - gText_Rom_5CCDEA)
	.endif
	.globl gText_Rom_5CCDF8
gText_Rom_5CCDF8: @ 0x085CCDF8
	@ Decoded text from ROM range: offset=0x5CCDF8, size=0x3
	.string "てん{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x085CCDFB: pokemon_jump.s: sub_0802D884
	.globl gPokemonJumpData_085CCDFB
gPokemonJumpData_085CCDFB: @ 0x085CCDFB
	@ analyzed canonical ROM range 0x085CCDFB-0x085CCDFD
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x06, 0x02, 0xFF

	@ src/strings.c:843 gText_PkmnJumpRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PkmnJumpRecords
gText_PkmnJumpRecords: @ 0x085CCDFE
	.string "ミニポケモンでジャンプの きろく{EOS}"
	.if (. - gText_PkmnJumpRecords) != 0x11
	.error "gText_PkmnJumpRecords must retain its original byte length"
	.endif
