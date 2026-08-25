	@ data/maps/LilycoveCity_House1/scripts.inc:18 LilycoveCity_House1_Text_PokemonPartnersNotTools
	.globl LilycoveCity_House1_Text_PokemonPartnersNotTools
LilycoveCity_House1_Text_PokemonPartnersNotTools: @ 0x08209F83
	.string "ポケモンは にんげんの パートナーであって\nけっして にんげんの どうぐ じゃないよ\pそこを かんちがい しておる\nにんげんも たまに いるんだよ……{EOS}"
	.if (. - LilycoveCity_House1_Text_PokemonPartnersNotTools) > 0x4c
	.error "LilycoveCity_House1_Text_PokemonPartnersNotTools may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_House1_Text_PokemonPartnersNotTools) < 0x4c
	.space 0x4c - (. - LilycoveCity_House1_Text_PokemonPartnersNotTools)
	.endif
	@ data/maps/LilycoveCity_House1/scripts.inc:21 LilycoveCity_House1_Text_Kecleon
	.globl LilycoveCity_House1_Text_Kecleon
LilycoveCity_House1_Text_Kecleon: @ 0x08209FCF
	.string "カクレオン『るろろ……?{EOS}"
	.if (. - LilycoveCity_House1_Text_Kecleon) > 0xd
	.error "LilycoveCity_House1_Text_Kecleon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_House1_Text_Kecleon) < 0xd
	.space 0xd - (. - LilycoveCity_House1_Text_Kecleon)
	.endif
	@ analyzed canonical ROM range 0x08209FDC-0x0820A01D
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08209FDC: @ 0x08209FDC
	.byte 0x00
.globl EventScript_JP_08209FDD
EventScript_JP_08209FDD: @ 0x08209FDD
	lock
	faceplayer
	checkflag 0x00EA
	goto_if 0x01, EventScript_JP_0820A014
	loadword 0x00, LilycoveCity_House2_Text_NotAwakeYetHaveThis
	callstd 0x04
	setorcopyvar 0x8000, 0x014C
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00EA
	loadword 0x00, LilycoveCity_House2_Text_SleepIsEssential
	callstd 0x04
	release
	end
EventScript_0820A014: @ 0x0820A014
EventScript_JP_0820A014: @ 0x0820A014
	loadword 0x00, LilycoveCity_House2_Text_SleepIsEssential
	callstd 0x04
	release
	end
