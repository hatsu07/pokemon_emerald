	@ src/strings.c:840 gText_CommunicationStandby3
	.globl gText_Rom_5CCDEA
gText_Rom_5CCDEA: @ 0x085CCDEA
	.string "つうしん たいきちゅうです$"
	.if (. - gText_Rom_5CCDEA) > 0xe
	.error "gText_Rom_5CCDEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDEA) < 0xe
	.space 0xe - (. - gText_Rom_5CCDEA)
	.endif
	.globl gUnknown_85CCDF8
gUnknown_85CCDF8: @ 0x085CCDF8
	@ Decoded text from ROM range: offset=0x5CCDF8, size=0x3
	.string "てん$"
	@ pret/pokeemerald-jp direct xref for 0x085CCDFB: pokemon_jump.s: sub_0802D884
	.globl gPokemonJumpData_085CCDFB
gPokemonJumpData_085CCDFB:
	.globl gUnknown_85CCDFB
gUnknown_85CCDFB: @ 0x085CCDFB
	@ analyzed canonical ROM range 0x085CCDFB-0x085CCDFD
sAnalyzedData_085CCDFB: @ 0x085CCDFB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x06, 0x02, 0xFF
	.globl gUnknown_85CCDFE
gUnknown_85CCDFE: @ 0x085CCDFE

	@ src/strings.c:843 gText_PkmnJumpRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCDFE
gText_Rom_5CCDFE: @ 0x085CCDFE
	.string "ミニポケモンでジャンプの きろく$"
	.if (. - gText_Rom_5CCDFE) != 0x11
	.error "gText_Rom_5CCDFE must retain its original byte length"
	.endif
