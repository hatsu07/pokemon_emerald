	@ src/pokeblock.c:133 sText_StowCase
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C985C
gText_Rom_5C985C: @ 0x085C985C
	.string "ケースをしまう{EOS}"
	.if (. - gText_Rom_5C985C) != 0x8
	.error "gText_Rom_5C985C must retain its original byte length"
	.endif
	.globl gText_Rom_5C9860
	.set gText_Rom_5C9860, gText_Rom_5C985C + 0x4
	@ pret/pokeemerald-jp direct xref for 0x085C9864: pokeblock.spokeblock.s: sub_08135F30
	.globl gPokeblockSpokeblockData_085C9864
gPokeblockSpokeblockData_085C9864: @ 0x085C9864
	@ analyzed canonical ROM range 0x085C9864-0x085C9868
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0xF9, 0x05, 0xFD, 0x02, 0xFF

	@ src/pokeblock.c:135 sText_ThrowAwayVar1
	.globl gText_Rom_5C9869
gText_Rom_5C9869: @ 0x085C9869
	.string "{STR_VAR_1}を\nすてても よろしいですか?{EOS}"
	.if (. - gText_Rom_5C9869) > 0x12
	.error "gText_Rom_5C9869 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9869) < 0x12
	.space 0x12 - (. - gText_Rom_5C9869)
	.endif

	@ src/pokeblock.c:136 sText_Var1ThrownAway
	.globl gText_Rom_5C987B
gText_Rom_5C987B: @ 0x085C987B
	.string "{STR_VAR_1}を\nすてました{EOS}"
	.if (. - gText_Rom_5C987B) > 0xa
	.error "gText_Rom_5C987B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C987B) < 0xa
	.space 0xa - (. - gText_Rom_5C987B)
	.endif
