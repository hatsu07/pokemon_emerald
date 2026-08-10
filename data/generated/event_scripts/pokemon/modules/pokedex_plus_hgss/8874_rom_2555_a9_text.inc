	@ src/pokedex_plus_hgss.c:202 sText_Dex_OWN
	.globl gText_Rom_2555A9
gText_Rom_2555A9: @ 0x082555A9
	.string "つかまえた"
	.byte EOS
	.if (. - gText_Rom_2555A9) > 0x6
	.error "gText_Rom_2555A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2555A9) < 0x6
	.space 0x6 - (. - gText_Rom_2555A9)
	.endif
	@ analyzed canonical ROM range 0x082555AF-0x08255605
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082555AF: @ 0x082555AF
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}ひき　もの\nポケモンを　つかまえた　そうだ!\p{STR_VAR_3}こそ　でんせつの\nポケモン　つかまえ　じょうず　だ!$"
	.byte 0x12, 0x28, 0x1F, 0x08, 0x50, 0x10, 0x00
