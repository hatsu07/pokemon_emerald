	@ pret/pokeemerald-jp direct xref for 0x085C940E: party_menu.s: DisplayPartyPokemonLevel; pokemon_summary_screen.s: Summary_PrintNotEggInfo
	.globl gText_Level
gText_Level: @ 0x085C940E
	@ analyzed canonical ROM range 0x085C940E-0x085C9410
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0xF9, 0x05, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085C9411: pokemon_summary_screen.s: Summary_PrintNotEggInfo
	.globl gPokemonSummaryScreenData_085C9411
gPokemonSummaryScreenData_085C9411: @ 0x085C9411
	@ analyzed canonical ROM range 0x085C9411-0x085C9419
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x9 bytes=9
	.byte 0xF9, 0x08, 0xFF, 0xF9, 0x04, 0xFF, 0xF9, 0x03, 0xFF
	.globl gText_IDNumber2
