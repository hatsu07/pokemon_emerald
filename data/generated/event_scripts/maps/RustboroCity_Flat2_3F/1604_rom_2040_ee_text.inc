	@ data/maps/RustboroCity_Flat2_3F/scripts.inc:15 RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones
	.globl gText_Rom_2040EE
gText_Rom_2040EE: @ 0x082040EE
	.string "たしか むすこさんも\nめずらしい いしを あつめるのが\lしゅみ だったっけ……?$"
	.if (. - gText_Rom_2040EE) > 0x29
	.error "gText_Rom_2040EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2040EE) < 0x29
	.space 0x29 - (. - gText_Rom_2040EE)
	.endif
	@ analyzed canonical ROM range 0x08204117-0x0820413C
sAnalyzedEventData_08204117: @ 0x08204117
EventScript_08204117: @ 0x08204117
	nop
	loadword 0x00, gText_Rom_20413D
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0x6F, 0x41, 0x20, 0x08, 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x30, 0xA1, 0x19, 0x00, 0x00
	.byte 0x00, 0x0F, 0x00, 0xBF, 0x41, 0x20, 0x08, 0x09, 0x04, 0xC5, 0x6C, 0x02
