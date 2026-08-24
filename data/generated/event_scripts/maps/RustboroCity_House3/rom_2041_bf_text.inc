	@ data/maps/RustboroCity_House3/scripts.inc:23 RustboroCity_House3_Text_IGivePerfectlySuitedNicknames
	.globl RustboroCity_House3_Text_IGivePerfectlySuitedNicknames
RustboroCity_House3_Text_IGivePerfectlySuitedNicknames: @ 0x0820413D
	.string "じぶんの ポケモンには\nぴったりの ニックネームを つけるんじゃ\lいわゆる おりじなりてぃ じゃ!{EOS}"
	.if (. - RustboroCity_House3_Text_IGivePerfectlySuitedNicknames) > 0x32
	.error "RustboroCity_House3_Text_IGivePerfectlySuitedNicknames may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House3_Text_IGivePerfectlySuitedNicknames) < 0x32
	.space 0x32 - (. - RustboroCity_House3_Text_IGivePerfectlySuitedNicknames)
	.endif
	@ data/maps/RustboroCity_House3/scripts.inc:26 RustboroCity_House3_Text_NamingPikachuPekachu
	.globl RustboroCity_House3_Text_NamingPikachuPekachu
RustboroCity_House3_Text_NamingPikachuPekachu: @ 0x0820416F
	.string "だからって ピカチュウに\n「ペカチュウ」って つけても\lほとんど かわって ないでしょうに……\pまあ わかりやすいのも\nニックネームには だいじ ですけどねぇ{EOS}"
	.if (. - RustboroCity_House3_Text_NamingPikachuPekachu) > 0x50
	.error "RustboroCity_House3_Text_NamingPikachuPekachu may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House3_Text_NamingPikachuPekachu) < 0x50
	.space 0x50 - (. - RustboroCity_House3_Text_NamingPikachuPekachu)
	.endif
	@ data/maps/RustboroCity_House3/scripts.inc:29 RustboroCity_House3_Text_Pekachu
	.globl RustboroCity_House3_Text_Pekachu
RustboroCity_House3_Text_Pekachu: @ 0x082041BF
	.string "ペカチュウ『ぺかー!{EOS}"
	.if (. - RustboroCity_House3_Text_Pekachu) > 0xb
	.error "RustboroCity_House3_Text_Pekachu may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House3_Text_Pekachu) < 0xb
	.space 0xb - (. - RustboroCity_House3_Text_Pekachu)
	.endif
	@ analyzed canonical ROM range 0x082041CA-0x0820428A
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_082041CB
EventScript_JP_082041CB: @ 0x082041CB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x009B
	goto_if 0x01, EventScript_JP_08204265
	setvar 0x8008, 0x0001
	copyvar 0x8004, 0x8008
	specialvar_ 0x800D, 0x00FC
	copyvar 0x8009, 0x800D
	loadword 0x00, FortreeCity_House1_Text_YouWillTradeWontYou
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820424D
	@ event command: special
	special ChoosePartyMon
	waitstate
	copyvar 0x800A, 0x8004
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_0820424D
	copyvar 0x8005, 0x800A
	specialvar_ 0x800D, 0x00FF
	copyvar 0x800B, 0x800D
	compare_var_to_var 0x800D, 0x8009
	goto_if 0x05, EventScript_JP_08204257
	copyvar 0x8004, 0x8008
	copyvar 0x8005, 0x800A
	@ event command: special
	special CreateInGameTradePokemon
	@ event command: special
	special DoInGameTradeScene
	waitstate
	bufferspeciesname 0x00, 0x8009
	loadword 0x00, FortreeCity_House1_Text_MonYouTakeCare
	callstd 0x04
	setflag 0x009B
	release
	end
EventScript_JP_0820424D: @ 0x0820424D
	loadword 0x00, FortreeCity_House1_Text_YouWontTradeMe
	callstd 0x04
	release
	end
EventScript_JP_08204257: @ 0x08204257
	bufferspeciesname 0x00, 0x8009
	loadword 0x00, FortreeCity_House1_Text_ThisIsntAMon
	callstd 0x04
	release
	end
EventScript_JP_08204265: @ 0x08204265
	loadword 0x00, FortreeCity_House1_Text_GoingToMakeVolbeatStrong
	callstd 0x04
	release
	end
.globl EventScript_JP_0820426F
EventScript_JP_0820426F: @ 0x0820426F
	loadword 0x00, FortreeCity_House1_Text_TradingMemoriesWithOthers
	callstd 0x02
	end
.globl EventScript_JP_08204278
EventScript_JP_08204278: @ 0x08204278
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, FortreeCity_House1_Text_Zigzagoon
	callstd 0x04
	waitmoncry
	release
	end
