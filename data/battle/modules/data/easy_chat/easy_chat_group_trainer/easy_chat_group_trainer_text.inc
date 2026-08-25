	.globl gPokedexData_085C8FA2
gPokedexData_085C8FA2: @ 0x085C8FA2
	@ Referenced from asm/pokedex.s; exact 5-byte substructure is not yet proven.
	@ ROM bytes: AC AC AC AC AC
	.space 0x5, 0xAC
	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5C8FA7
gText_Rom_5C8FA7: @ 0x085C8FA7
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_5C8FA7) > 0x5
	.error "gText_Rom_5C8FA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FA7) < 0x5
	.space 0x5 - (. - gText_Rom_5C8FA7)
	.endif
	.globl gText_Rom_5C8FAC
gText_Rom_5C8FAC: @ 0x085C8FAC
	@ Decoded text from ROM range: offset=0x5C8FAC, size=0x7
	.string "？？？,？m{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x085C8FB3: pokedex.s: sub_080BE1C8
	.globl gPokedexData_085C8FB3
gPokedexData_085C8FB3: @ 0x085C8FB3
	@ analyzed canonical ROM range 0x085C8FB3-0x085C8FBA
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0xAC, 0xAC, 0xAC, 0xB8, 0xAC, 0xDF, 0xDB, 0xFF
	.globl gEasyChatRecord_Rom_5C8FBB
gEasyChatRecord_Rom_5C8FBB: @ 0x085C8FBB
	.space 0x5, 0x00

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5C8FC0
gText_Rom_5C8FC0: @ 0x085C8FC0
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_5C8FC0) > 0x5
	.error "gText_Rom_5C8FC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FC0) < 0x5
	.space 0x5 - (. - gText_Rom_5C8FC0)
	.endif
