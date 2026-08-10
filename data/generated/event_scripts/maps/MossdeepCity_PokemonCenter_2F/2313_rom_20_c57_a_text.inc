	@ data/maps/MossdeepCity_PokemonCenter_2F/scripts.inc:25 MossdeepCity_PokemonCenter_2F_Text_Woman5
	.globl gText_Rom_20C57A
gText_Rom_20C57A: @ 0x0820C57A
	.string "つうしん たいせんで かちまくって\nみんなに あたしの みりょくを\lアピールしたら ファンが ふえちゃうかな!$"
	.if (. - gText_Rom_20C57A) > 0x38
	.error "gText_Rom_20C57A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C57A) < 0x38
	.space 0x38 - (. - gText_Rom_20C57A)
	.endif
	@ analyzed canonical ROM range 0x0820C5B2-0x0820C5FC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820C5B2: @ 0x0820C5B2
	.byte 0x00
EventScript_JP_0820C5B3: @ 0x0820C5B3
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemart
	.byte 0x86
	.4byte 0x0820C5CC @ EventScript_0820C5CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243920 @ gText_Rom_243920
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x00
EventScript_0820C5CC: @ 0x0820C5CC
	.byte 0x02, 0x00, 0x06, 0x00, 0x07, 0x00, 0x15, 0x00, 0x17, 0x00, 0x18, 0x00, 0x54, 0x00, 0x4B, 0x00
	.byte 0x4C, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_0820C5E2: @ 0x0820C5E2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C5FD @ gText_Rom_20C5FD
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820C5EB: @ 0x0820C5EB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C647 @ gText_Rom_20C647
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820C5F4: @ 0x0820C5F4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C681 @ gText_Rom_20C681
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
