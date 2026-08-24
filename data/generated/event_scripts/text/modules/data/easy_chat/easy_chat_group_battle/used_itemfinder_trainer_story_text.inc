	@ src/data/easy_chat/easy_chat_group_battle.h:46 easy_chat_group_battle_line_46
	.globl gText_Rom_255DDF
gText_Rom_255DDF: @ 0x08255DDF
	.string "かった"
	.byte EOS
	.if (. - gText_Rom_255DDF) > 0x4
	.error "gText_Rom_255DDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255DDF) < 0x4
	.space 0x4 - (. - gText_Rom_255DDF)
	.endif
	@ analyzed canonical ROM range 0x08255DE3-0x08255E39
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderStory: @ 0x08255DE3
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nダウジングマシンを　つかった　らしい!\p{STR_VAR_3}は\nさがしものが　だいすきな　トレーナーだな!{EOS}"
	.byte 0x01, 0x22, 0x16, 0x00, 0x1C, 0x27, 0x2A, 0x10, 0x00
