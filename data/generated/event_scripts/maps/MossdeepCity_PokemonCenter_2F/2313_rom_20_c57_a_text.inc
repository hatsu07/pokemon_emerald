	@ data/maps/MossdeepCity_PokemonCenter_2F/scripts.inc:25 MossdeepCity_PokemonCenter_2F_Text_Woman5
	.globl MossdeepCity_PokemonCenter_2F_Text_Woman5
MossdeepCity_PokemonCenter_2F_Text_Woman5: @ 0x0820C57A
	.string "つうしん たいせんで かちまくって\nみんなに あたしの みりょくを\lアピールしたら ファンが ふえちゃうかな!{EOS}"
	.if (. - MossdeepCity_PokemonCenter_2F_Text_Woman5) > 0x38
	.error "MossdeepCity_PokemonCenter_2F_Text_Woman5 may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_PokemonCenter_2F_Text_Woman5) < 0x38
	.space 0x38 - (. - MossdeepCity_PokemonCenter_2F_Text_Woman5)
	.endif
	@ analyzed canonical ROM range 0x0820C5B2-0x0820C5FC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820C5B2: @ 0x0820C5B2
	.byte 0x00
.globl EventScript_JP_0820C5B3
EventScript_JP_0820C5B3: @ 0x0820C5B3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart EventScript_0820C5CC
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00
EventScript_0820C5CC: @ 0x0820C5CC
	.byte 0x02, 0x00, 0x06, 0x00, 0x07, 0x00, 0x15, 0x00, 0x17, 0x00, 0x18, 0x00, 0x54, 0x00, 0x4B, 0x00
	.byte 0x4C, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820C5E2
EventScript_JP_0820C5E2: @ 0x0820C5E2
	loadword 0x00, MossdeepCity_Mart_Text_ReviveIsFantastic
	callstd 0x02
	end
.globl EventScript_JP_0820C5EB
EventScript_JP_0820C5EB: @ 0x0820C5EB
	loadword 0x00, MossdeepCity_Mart_Text_MaxRepelLastsLongest
	callstd 0x02
	end
.globl EventScript_JP_0820C5F4
EventScript_JP_0820C5F4: @ 0x0820C5F4
	loadword 0x00, MossdeepCity_Mart_Text_NetAndDiveBallsRare
	callstd 0x02
	end
