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
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08204117: @ 0x08204117
	.byte 0x00
.globl EventScript_JP_08204118
EventScript_JP_08204118: @ 0x08204118
	loadword 0x00, gText_Rom_20413D
	callstd 0x02
	end
.globl EventScript_JP_08204121
EventScript_JP_08204121: @ 0x08204121
	loadword 0x00, gText_Rom_20416F
	callstd 0x02
	end
.globl EventScript_JP_0820412A
EventScript_JP_0820412A: @ 0x0820412A
	lock
	faceplayer
	waitse
	playmoncry 0x0019, 0x0000
	loadword 0x00, gText_Rom_2041BF
	callstd 0x04
	waitmoncry
	release
	end
