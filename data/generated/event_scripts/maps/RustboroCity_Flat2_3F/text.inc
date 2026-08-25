	@ data/maps/RustboroCity_Flat2_3F/scripts.inc:12 RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones
	.globl RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones
RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones: @ 0x082040C8
	.string "デボンの しゃちょうは\nめずらしい いしを あつめるのが\lしゅみ なんだよ{EOS}"
	.if (. - RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones) > 0x26
	.error "RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones) < 0x26
	.space 0x26 - (. - RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones)
	.endif
	@ data/maps/RustboroCity_Flat2_3F/scripts.inc:15 RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones
	.globl RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones
RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones: @ 0x082040EE
	.string "たしか むすこさんも\nめずらしい いしを あつめるのが\lしゅみ だったっけ……?{EOS}"
	.if (. - RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones) > 0x29
	.error "RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones) < 0x29
	.space 0x29 - (. - RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones)
	.endif
	@ analyzed canonical ROM range 0x08204117-0x0820413C
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08204117: @ 0x08204117
	.byte 0x00
.globl EventScript_JP_08204118
EventScript_JP_08204118: @ 0x08204118
	loadword 0x00, RustboroCity_House3_Text_IGivePerfectlySuitedNicknames
	callstd 0x02
	end
.globl EventScript_JP_08204121
EventScript_JP_08204121: @ 0x08204121
	loadword 0x00, RustboroCity_House3_Text_NamingPikachuPekachu
	callstd 0x02
	end
.globl EventScript_JP_0820412A
EventScript_JP_0820412A: @ 0x0820412A
	lock
	faceplayer
	waitse
	playmoncry 0x0019, 0x0000
	loadword 0x00, RustboroCity_House3_Text_Pekachu
	callstd 0x04
	waitmoncry
	release
	end
