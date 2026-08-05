	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250295
gText_Rom_250295: @ 0x08250295
	.string "おおー！\pなんと！\nグッズが　なにも　ありません！\pふつうの　ひとには　まね　できない\nこの　だいたんさ！\pシンプルで　ありながら\nあふれでる　この　ワイルドさ！\pいやー\nさすが　{0xFD}{0x02}さん　ですねー$"
	.if (. - gText_Rom_250295) > 0x64
	.error "gText_Rom_250295 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250295) < 0x64
	.space 0x64 - (. - gText_Rom_250295)
	.endif
