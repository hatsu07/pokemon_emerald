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
EventScript_JP_08204118: @ 0x08204118
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820413D @ gText_Rom_20413D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08204121: @ 0x08204121
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820416F @ gText_Rom_20416F
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820412A: @ 0x0820412A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0019
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082041BF @ gText_Rom_2041BF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
