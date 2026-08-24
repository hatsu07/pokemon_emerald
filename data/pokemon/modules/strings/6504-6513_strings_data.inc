	.globl gText_AwesomeWonF701F700

	@ src/strings.c:847 gText_AwesomeWonF701F700
	.globl gText_AwesomeWonF701F700
gText_AwesomeWonF701F700: @ 0x085CCE36
	.string "せいせきが よかったので\n{DYNAMIC 0}を {DYNAMIC 1}こ プレゼント!{EOS}"
	.if (. - gText_AwesomeWonF701F700) > 0x1c
	.error "gText_AwesomeWonF701F700 may not grow beyond its original slot"
	.endif
	.if (. - gText_AwesomeWonF701F700) < 0x1c
	.space 0x1c - (. - gText_AwesomeWonF701F700)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CCE52: pokemon_jump.s: sub_0802D574
	.globl gPokemonJumpData_085CCE52
gPokemonJumpData_085CCE52: @ 0x085CCE52
	@ analyzed canonical ROM range 0x085CCE52-0x085CCE64
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x13 bytes=19
	.byte 0xF7, 0x00, 0x37, 0x00, 0x02, 0x50, 0x4B, 0x02, 0x16, 0xFE, 0x15, 0x50, 0x13, 0x0C, 0x1F, 0x50
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085CCE65: pokemon_jump.s: sub_0802D5EC
	.globl gPokemonJumpData_085CCE65
gPokemonJumpData_085CCE65: @ 0x085CCE65
	@ analyzed canonical ROM range 0x085CCE65-0x085CCE70
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xC bytes=12
	.byte 0xF7, 0x00, 0x1A, 0x00, 0x02, 0x50, 0x4B, 0x02, 0x44, 0x0D, 0xB0, 0xFF

	@ src/strings.c:837 gText_WantToPlayAgain (+1 aliases)
	.globl gText_WantToPlayAgain
gText_WantToPlayAgain: @ 0x085CCE71
	.string "もういちど あそびますか？{EOS}"
	.if (. - gText_WantToPlayAgain) > 0xe
	.error "gText_WantToPlayAgain may not grow beyond its original slot"
	.endif
	.if (. - gText_WantToPlayAgain) < 0xe
	.space 0xe - (. - gText_WantToPlayAgain)
	.endif

	@ src/strings.c:851 gText_SomeoneDroppedOut2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SomeoneDroppedOut2
gText_SomeoneDroppedOut2: @ 0x085CCE7F
	.string "だれかがぬけました\nつうしんを しゅうりょうします{EOS}"
	.if (. - gText_SomeoneDroppedOut2) != 0x1a
	.error "gText_SomeoneDroppedOut2 must retain its original byte length"
	.endif

	@ src/strings.c:852 gText_CommunicationStandby4
	.globl gText_CommunicationStandby4
gText_CommunicationStandby4: @ 0x085CCE99
	.string "つうしん たいきちゅう{EOS}"
	.if (. - gText_CommunicationStandby4) > 0xc
	.error "gText_CommunicationStandby4 may not grow beyond its original slot"
	.endif
	.if (. - gText_CommunicationStandby4) < 0xc
	.space 0xc - (. - gText_CommunicationStandby4)
	.endif

	@ src/strings.c:853 gText_LinkContestResults
	.globl gText_LinkContestResults
gText_LinkContestResults: @ 0x085CCEA5
	.string "{PLAYER}の つうしん コンテスト せいせき{EOS}"
	.if (. - gText_LinkContestResults) > 0x14
	.error "gText_LinkContestResults may not grow beyond its original slot"
	.endif
	.if (. - gText_LinkContestResults) < 0x14
	.space 0x14 - (. - gText_LinkContestResults)
	.endif
