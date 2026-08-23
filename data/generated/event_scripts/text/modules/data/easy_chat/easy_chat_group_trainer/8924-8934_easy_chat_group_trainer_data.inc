	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_255F8A
gText_Rom_255F8A: @ 0x08255F8A
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255F8A) > 0x6
	.error "gText_Rom_255F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255F8A) < 0x6
	.space 0x6 - (. - gText_Rom_255F8A)
	.endif
	@ analyzed canonical ROM range 0x08255F90-0x08256053
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedAction: @ 0x08255F90
	.string "だんさを　とびおりた{EOS}"
MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedStory: @ 0x08255F9B
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nだんさを　とびおりた　らしい!\p{STR_VAR_3}は　だんさを　みると\nとびおりずに　おれない　トレーナーだな!{EOS}"
MauvilleCity_PokemonCenter_1F_Text_TVWatchedTitle: @ 0x08255FED
	.string "でんせつの　テレビ　ウォッチャー{EOS}"
MauvilleCity_PokemonCenter_1F_Text_TVWatchedAction: @ 0x08255FFE
	.string "テレビを　みた{EOS}"
MauvilleCity_PokemonCenter_1F_Text_TVWatchedStory: @ 0x08256006
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nテレビを　みた　らしい!\p{STR_VAR_3}は\nテレビ　だいすき　トレーナーだな!{EOS}"
	.byte 0x3D, 0x06, 0x2E, 0x2D, 0x00, 0x07, 0x16, 0x00, 0x0D, 0x29, 0x00
	.globl gText_Rom_256054
gText_Rom_256054: @ 0x08256054
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_256054) > 0x6
	.error "gText_Rom_256054 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256054) < 0x6
	.space 0x6 - (. - gText_Rom_256054)
	.endif
	@ analyzed canonical ROM range 0x0825605A-0x082560BE
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_CheckedClockAction: @ 0x0825605A
	.string "とけいを　みた{EOS}"
MauvilleCity_PokemonCenter_1F_Text_CheckedClockStory: @ 0x08256062
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nとけいを　みた　らしい!\p{STR_VAR_3}は　じかんを　きに　する\nきちょうめんな　トレーナーだな!{EOS}"
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x08, 0x3D, 0x16, 0x00, 0x01, 0x10, 0x28, 0x1F, 0x08, 0x50, 0x10, 0x00
	.globl gText_Rom_2560BF
gText_Rom_2560BF: @ 0x082560BF
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_2560BF) > 0x6
	.error "gText_Rom_2560BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2560BF) < 0x6
	.space 0x6 - (. - gText_Rom_2560BF)
	.endif
	@ analyzed canonical ROM range 0x082560C5-0x08256138
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_WonLotteryAction: @ 0x082560C5
	.string "ポケモンくじで　あたった{EOS}"
MauvilleCity_PokemonCenter_1F_Text_WonLotteryStory: @ 0x082560D2
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nポケモンくじで　あたった　らしい!\p{STR_VAR_3}は　ポケモンを　こうかん　する\nともだちが　とても　おおい　トレーナーだ!{EOS}"
	.byte 0x0F, 0x41, 0x13, 0x24, 0x2D, 0x00, 0x12, 0x06, 0x02, 0x0A, 0x15, 0x0D, 0x00
	.globl gText_Rom_256139
gText_Rom_256139: @ 0x08256139
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_256139) > 0x6
	.error "gText_Rom_256139 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256139) < 0x6
	.space 0x6 - (. - gText_Rom_256139)
	.endif
	@ analyzed canonical ROM range 0x0825613F-0x082561AF
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_UsedDaycareAction: @ 0x0825613F
	.string "そだてやに　ポケモンを　あずけた{EOS}"
MauvilleCity_PokemonCenter_1F_Text_UsedDaycareStory: @ 0x08256150
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nそだてやに　あずけた　らしい!\p{STR_VAR_3}は　とにかく　そだてまくる\nモーレツな　トレーナーに　ちがいない!{EOS}"
	.byte 0x7B, 0xAE, 0x9D, 0x53, 0x82, 0x52, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
	.globl gText_Rom_2561B0
gText_Rom_2561B0: @ 0x082561B0
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_2561B0) > 0x6
	.error "gText_Rom_2561B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2561B0) < 0x6
	.space 0x6 - (. - gText_Rom_2561B0)
	.endif
	@ analyzed canonical ROM range 0x082561B6-0x0825621D
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_RodeCableCarAction: @ 0x082561B6
	.string "ロープウェイに　のった{EOS}"
MauvilleCity_PokemonCenter_1F_Text_RodeCableCarStory: @ 0x082561C2
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nロープウェイに　のった　らしい!\p{STR_VAR_3}は　うえに　したにと\nおおいそがしの　トレーナーだな!{EOS}"
	.byte 0x05, 0x2E, 0x0E, 0x2E, 0x16, 0x00, 0x06, 0x26, 0x02, 0x43, 0x22, 0x19, 0x00
	.globl gText_Rom_25621E
gText_Rom_25621E: @ 0x0825621E
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_25621E) > 0x6
	.error "gText_Rom_25621E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25621E) < 0x6
	.space 0x6 - (. - gText_Rom_25621E)
	.endif
	@ analyzed canonical ROM range 0x08256224-0x08256361
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl EventText_JP_08256224
EventText_JP_08256224: @ 0x08256224
	.string "おんせんに　はいった{EOS}"
.globl EventText_JP_0825622F
EventText_JP_0825622F: @ 0x0825622F
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nおんせんに　はいった　らしい!\p{STR_VAR_3}は　きっと\nおはだが　ツルツルの　トレーナー　だろう!{EOS}"
EventScript_JP_0825627D: @ 0x0825627D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8008, 0x0000
	setvar 0x8009, 0x0000
	setvar 0x800A, 0x0000
	setvar 0x800B, 0x0000
	loadword 0x00, gText_Rom_255186
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825634C
	specialvar_ 0x800D, 0x006B
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825630D
	message gText_Rom_2551C3
	waitmessage
	@ event command: special
	special ScrSpecial_StorytellerStoryListMenu
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082562EA
	setvar 0x8008, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x006C
	waitmessage
	waitbuttonpress
	specialvar_ 0x800D, 0x006E
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082562F0
	goto EventScript_JP_08256342
EventScript_JP_082562EA: @ 0x082562EA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	goto EventScript_JP_0825634C
	.byte 0x02
EventScript_JP_082562F0: @ 0x082562F0
	loadword 0x00, gText_Rom_25525F
	callstd 0x04
	specialvar_ 0x800D, 0x0070
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08256360
	goto EventScript_JP_08256315
EventScript_JP_0825630D: @ 0x0825630D
	loadword 0x00, gText_Rom_2551E6
	callstd 0x04
EventScript_JP_08256315: @ 0x08256315
	loadword 0x00, gText_Rom_25528A
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0825634C
	specialvar_ 0x800D, 0x006F
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08256342
	loadword 0x00, gText_Rom_2552C5
	callstd 0x04
	release
	end
EventScript_JP_08256342: @ 0x08256342
	loadword 0x00, gText_Rom_255225
	callstd 0x04
	release
	end
EventScript_JP_0825634C: @ 0x0825634C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2551B4
	callstd 0x04
	release
	end
	.byte 0x0F, 0x00, 0xED, 0x52, 0x25, 0x08, 0x09, 0x04, 0x6C, 0x02
EventScript_JP_08256360: @ 0x08256360
	release
	end
