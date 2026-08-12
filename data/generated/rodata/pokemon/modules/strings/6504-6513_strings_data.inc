	@ src/strings.c:847 gText_AwesomeWonF701F700
	.globl gText_Rom_5CCE36
gText_Rom_5CCE36: @ 0x085CCE36
	.string "せいせきが よかったので\n{DYNAMIC 0}を {DYNAMIC 1}こ プレゼント!$"
	.if (. - gText_Rom_5CCE36) > 0x1c
	.error "gText_Rom_5CCE36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE36) < 0x1c
	.space 0x1c - (. - gText_Rom_5CCE36)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CCE52: pokemon_jump.s: sub_0802D574
	.globl gPokemonJumpData_085CCE52
gPokemonJumpData_085CCE52:
	.globl gUnknown_85CCE52
gUnknown_85CCE52: @ 0x085CCE52
	@ analyzed canonical ROM range 0x085CCE52-0x085CCE64
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x13
	.byte 0xF7, 0x00, 0x37, 0x00, 0x02, 0x50, 0x4B, 0x02, 0x16, 0xFE, 0x15, 0x50, 0x13, 0x0C, 0x1F, 0x50
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085CCE65: pokemon_jump.s: sub_0802D5EC
	.globl gPokemonJumpData_085CCE65
gPokemonJumpData_085CCE65:
	.globl gUnknown_85CCE65
gUnknown_85CCE65: @ 0x085CCE65
	@ analyzed canonical ROM range 0x085CCE65-0x085CCE70
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xC
	.byte 0xF7, 0x00, 0x1A, 0x00, 0x02, 0x50, 0x4B, 0x02, 0x44, 0x0D, 0xB0, 0xFF
	.globl gUnknown_85CCE71
gUnknown_85CCE71: @ 0x085CCE71

	@ src/strings.c:837 gText_WantToPlayAgain (+1 aliases)
	.globl gText_Rom_5CCE71
gText_Rom_5CCE71: @ 0x085CCE71
	.string "もういちど あそびますか？$"
	.if (. - gText_Rom_5CCE71) > 0xe
	.error "gText_Rom_5CCE71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE71) < 0xe
	.space 0xe - (. - gText_Rom_5CCE71)
	.endif
	.globl gUnknown_85CCE7F
gUnknown_85CCE7F: @ 0x085CCE7F

	@ src/strings.c:851 gText_SomeoneDroppedOut2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCE7F
gText_Rom_5CCE7F: @ 0x085CCE7F
	.string "だれかがぬけました\nつうしんを しゅうりょうします$"
	.if (. - gText_Rom_5CCE7F) != 0x1a
	.error "gText_Rom_5CCE7F must retain its original byte length"
	.endif
	.globl gText_Rom_5CCE95
	.set gText_Rom_5CCE95, gText_Rom_5CCE7F + 0x16
	.globl gUnknown_85CCE99
gUnknown_85CCE99: @ 0x085CCE99

	@ src/strings.c:852 gText_CommunicationStandby4
	.globl gText_Rom_5CCE99
gText_Rom_5CCE99: @ 0x085CCE99
	.string "つうしん たいきちゅう$"
	.if (. - gText_Rom_5CCE99) > 0xc
	.error "gText_Rom_5CCE99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE99) < 0xc
	.space 0xc - (. - gText_Rom_5CCE99)
	.endif
	.globl gUnknown_85CCEA5
gUnknown_85CCEA5: @ 0x085CCEA5

	@ src/strings.c:853 gText_LinkContestResults
	.globl gText_Rom_5CCEA5
gText_Rom_5CCEA5: @ 0x085CCEA5
	.string "{PLAYER}の つうしん コンテスト せいせき$"
	.if (. - gText_Rom_5CCEA5) > 0x14
	.error "gText_Rom_5CCEA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEA5) < 0x14
	.space 0x14 - (. - gText_Rom_5CCEA5)
	.endif
