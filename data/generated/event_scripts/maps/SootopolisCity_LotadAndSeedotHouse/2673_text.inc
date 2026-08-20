	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:144 SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad
	.globl gText_Rom_20FCA7
gText_Rom_20FCA7: @ 0x0820FCA7
	.string "{STR_VAR_2}cmか……\pううむ わしは これより おおきい\nハスボーを みたこと あるな……{EOS}"
	.if (. - gText_Rom_20FCA7) > 0x2b
	.error "gText_Rom_20FCA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FCA7) < 0x2b
	.space 0x2b - (. - gText_Rom_20FCA7)
	.endif
