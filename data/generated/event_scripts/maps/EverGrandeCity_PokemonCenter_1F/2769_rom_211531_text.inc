	@ data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc:76 EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad
	.globl gText_Rom_2114A2
gText_Rom_2114A2: @ 0x082114A2
	.string "ポケモンリーグは\nチャンピオンロードを ぬけると すぐ!\pここまで きたら\nまえに すすむしかないわ!{EOS}"
	.if (. - gText_Rom_2114A2) > 0x34
	.error "gText_Rom_2114A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2114A2) < 0x34
	.space 0x34 - (. - gText_Rom_2114A2)
	.endif
	@ data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc:79 EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon
	.globl gText_Rom_2114D6
gText_Rom_2114D6: @ 0x082114D6
	.string "チャンピオンロードの\nながくて けわしい みちのり……\pまるで いままで あるいてきた みちを\nおもいださせるかの ようだな\pきみ じぶんの ポケモンを\nしんじて がんばりたまえ!{EOS}"
	.if (. - gText_Rom_2114D6) > 0x5b
	.error "gText_Rom_2114D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2114D6) < 0x5b
	.space 0x5b - (. - gText_Rom_2114D6)
	.endif
	@ data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc:82 EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou
	.globl gText_Rom_211531
gText_Rom_211531: @ 0x08211531
	.string "エニシダ『{PLAYER}{KUN}\nついに ポケモンリーグだね!\lわたしも おうえん した かいがあったよ!\pもし {PLAYER}{KUN}が\nポケモンチャンピオンに なったら……\lそのときは また れんらく するからね\pじゃ……\n{PLAYER}{KUN} がんばってね!{EOS}"
	.if (. - gText_Rom_211531) > 0x71
	.error "gText_Rom_211531 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211531) < 0x71
	.space 0x71 - (. - gText_Rom_211531)
	.endif
	@ analyzed canonical ROM range 0x082115A2-0x08211731
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24
	.byte 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03, 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24
	.byte 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08, 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02
gMapScriptDispatch_Route104_MrBrineysHouse_OnTransition: @ 0x082115F0
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082115F6
	.byte 0
EventScript_JP_082115F6: @ 0x082115F6
	setflag 0x089D
	compare_var_to_value 0x4090, 0x0001
	call_if 0x01, EventScript_JP_08211612
	checkflag 0x00BC
	call_if 0x01, EventScript_JP_0821160E
	end
EventScript_JP_0821160E: @ 0x0821160E
	setflag 0x032E
	return
EventScript_JP_08211612: @ 0x08211612
	setobjectxyperm 0x0001, 0x0009, 0x0003
	setobjectmovementtype 0x0001, 0x32
	setobjectxyperm 0x0002, 0x0009, 0x0006
	setobjectmovementtype 0x0002, 0x33
	return
.globl EventScript_JP_08211629
EventScript_JP_08211629: @ 0x08211629
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0093
	call_if 0x00, EventScript_JP_0821164C
	checkflag 0x00BD
	goto_if 0x00, EventScript_JP_082116A3
	checkflag 0x0095
	goto_if 0x00, EventScript_JP_082116BC
	goto EventScript_JP_08211670
	.byte 0x02
EventScript_JP_0821164C: @ 0x0821164C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x0093
	loadword 0x00, gText_Rom_211732
	callstd 0x04
	loadword 0x00, gText_Rom_211749
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082116D5
	goto EventScript_JP_082116E9
	.byte 0x02
EventScript_JP_08211670: @ 0x08211670
	message gText_Rom_21192C
	waitmessage
	multichoicedefault 0x14, 0x08, 0x0E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082116E9
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082116DF
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082116DF
	end
EventScript_JP_082116A3: @ 0x082116A3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_21185C
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082116D5
	goto EventScript_JP_082116E9
	.byte 0x02
EventScript_JP_082116BC: @ 0x082116BC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2118C7
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082116D5
	goto EventScript_JP_082116E9
	.byte 0x02
EventScript_JP_082116D5: @ 0x082116D5
	loadword 0x00, gText_Rom_21181B
	callstd 0x04
	release
	end
EventScript_JP_082116DF: @ 0x082116DF
	loadword 0x00, gText_Rom_21195C
	callstd 0x04
	release
	end
EventScript_JP_082116E9: @ 0x082116E9
	loadword 0x00, gText_Rom_2117FE
	callstd 0x04
	call 0x08242F21
	setvar 0x408E, 0x0001
	clearflag 0x02E2
	setflag 0x02E3
	setflag 0x0371
	setvar 0x405A, 0x0008
	setvar 0x4063, 0x0002
	setflag 0x032E
	setflag 0x02CF
	@ event command: warp
	warp MAP_ID_ROUTE104, 0xFF, 0x000D, 0x0033
	.byte 0x27, 0x6B, 0x02
.globl EventScript_JP_0821171F
EventScript_JP_0821171F: @ 0x0821171F
	lock
	faceplayer
	waitse
	playmoncry 0x0135, 0x0000
	loadword 0x00, gText_Rom_2119A3
	callstd 0x04
	waitmoncry
	release
	end
