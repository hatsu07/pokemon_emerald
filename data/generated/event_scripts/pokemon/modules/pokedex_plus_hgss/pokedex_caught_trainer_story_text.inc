	@ src/pokedex_plus_hgss.c:202 sText_Dex_OWN
	.globl sText_Dex_OWN
sText_Dex_OWN: @ 0x082555A9
	.string "つかまえた"
	.byte EOS
	.if (. - sText_Dex_OWN) > 0x6
	.error "sText_Dex_OWN may not grow beyond its original slot"
	.endif
	.if (. - sText_Dex_OWN) < 0x6
	.space 0x6 - (. - sText_Dex_OWN)
	.endif
	@ analyzed canonical ROM range 0x082555AF-0x08255605
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtStory: @ 0x082555AF
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}ひき　もの\nポケモンを　つかまえた　そうだ!\p{STR_VAR_3}こそ　でんせつの\nポケモン　つかまえ　じょうず　だ!{EOS}"
	.byte 0x12, 0x28, 0x1F, 0x08, 0x50, 0x10, 0x00
