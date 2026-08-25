	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_255606
gText_Rom_255606: @ 0x08255606
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255606) > 0x6
	.error "gText_Rom_255606 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255606) < 0x6
	.space 0x6 - (. - gText_Rom_255606)
	.endif
	@ analyzed canonical ROM range 0x0825560C-0x0825566B
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtAction: @ 0x0825560C
	.string "ポケモンを　つった{EOS}"
MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtStory: @ 0x08255616
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}ひき　もの\nポケモンを　つった　そうだ!\p{STR_VAR_3}こそ　でんせつの\nつり　めいじん　だ!{EOS}"
	.byte 0x60, 0x6F, 0x8B, 0x2D, 0x00, 0x01, 0x10, 0x10, 0x22, 0x00, 0x12, 0x43, 0x09, 0x10, 0x00
	.globl gText_Rom_25566C
gText_Rom_25566C: @ 0x0825566C
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_25566C) > 0x6
	.error "gText_Rom_25566C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25566C) < 0x6
	.space 0x6 - (. - gText_Rom_25566C)
	.endif
	@ analyzed canonical ROM range 0x08255672-0x082556CE
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_EggsHatchedAction: @ 0x08255672
	.string "タマゴを　かえした{EOS}"
MauvilleCity_PokemonCenter_1F_Text_EggsHatchedStory: @ 0x0825567C
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\p{STR_VAR_1}こ　もの　タマゴを\nかえした　そうだ!\p{STR_VAR_3}こそ　でんせつの\nタマゴ　あたため　トレーナーだ!{EOS}"
	.byte 0x0C, 0x2E, 0x06, 0x00, 0x0B, 0x0E, 0x1F, 0x08, 0x50, 0x10, 0x00
	.globl gText_Rom_2556CF
gText_Rom_2556CF: @ 0x082556CF
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_2556CF) > 0x6
	.error "gText_Rom_2556CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2556CF) < 0x6
	.space 0x6 - (. - gText_Rom_2556CF)
	.endif
	@ analyzed canonical ROM range 0x082556D5-0x0825573E
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082556D5: @ 0x082556D5
.Lbatch81_text_start_EventText_JP_082556D5: @ 0x082556D5
	.string "ポケモンを　しんか　させた{EOS}"
MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedStory: @ 0x082556E3
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}ひきもの\nポケモンを　しんか　させたそうだ!\p{STR_VAR_3}こそ　さいこうの\nポケモン　しんか　マスターだ!{EOS}"
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x5E, 0x7E, 0x60, 0xAE, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
	.globl gText_Rom_25573F
gText_Rom_25573F: @ 0x0825573F
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_25573F) > 0x6
	.error "gText_Rom_25573F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25573F) < 0x6
	.space 0x6 - (. - gText_Rom_25573F)
	.endif
	@ analyzed canonical ROM range 0x08255745-0x082557B8
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterAction: @ 0x08255745
	.string "ポケモンセンターで　かいふくした{EOS}"
MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterStory: @ 0x08255756
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nポケモンセンターで　かいふく　したのだ!\p{STR_VAR_3}ほど　ポケモンセンターが\nすきな　トレーナーも　いない　だろう!{EOS}"
	.byte 0x0B, 0x14, 0x37, 0x04, 0x28, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
	.globl gText_Rom_2557B9
gText_Rom_2557B9: @ 0x082557B9
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_2557B9) > 0x6
	.error "gText_Rom_2557B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2557B9) < 0x6
	.space 0x6 - (. - gText_Rom_2557B9)
	.endif
	@ analyzed canonical ROM range 0x082557BF-0x08255831
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeAction: @ 0x082557BF
	.string "じぶんの　いえで　かいふくした{EOS}"
MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeStory: @ 0x082557CF
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nじぶんの　いえで　かいふく　したのだ!\p{STR_VAR_3}ほど　さとがえりが\nすきな　トレーナーも　いないだろう!{EOS}"
	.byte 0x5B, 0x6C, 0x7F, 0x78, 0x90, 0xAE, 0x7E, 0x16, 0x00, 0x02, 0x28, 0x47, 0x10, 0x50, 0x10, 0x00
	.globl gText_Rom_255832
gText_Rom_255832: @ 0x08255832
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255832) > 0x6
	.error "gText_Rom_255832 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255832) < 0x6
	.space 0x6 - (. - gText_Rom_255832)
	.endif
	@ analyzed canonical ROM range 0x08255838-0x082558A7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08255838: @ 0x08255838
.Lbatch81_text_start_EventText_JP_08255838: @ 0x08255838
	.string "サファリゾーンに　はいった{EOS}"
MauvilleCity_PokemonCenter_1F_Text_SafariGamesStory: @ 0x08255846
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nサファリゾーンに　はいった　そうだ!\p{STR_VAR_3}は　サファリゾーンでは\nやせいの　ちが　さわぐ　トレーナーだ!{EOS}"
	.byte 0x02, 0x01, 0x02, 0x38, 0x28, 0x2D, 0x00, 0x0C, 0x1F, 0x08, 0x50, 0x10, 0x00
	.globl gText_Rom_2558A8
gText_Rom_2558A8: @ 0x082558A8
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_2558A8) > 0x6
	.error "gText_Rom_2558A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2558A8) < 0x6
	.space 0x6 - (. - gText_Rom_2558A8)
	.endif
	@ analyzed canonical ROM range 0x082558AE-0x08255917
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_UsedCutAction: @ 0x082558AE
	.string "いあいぎり　した{EOS}"
MauvilleCity_PokemonCenter_1F_Text_UsedCutStory: @ 0x082558B7
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nいあいぎりを　つかった　そうだ!\p{STR_VAR_3}は　いあいぎりが\nすきで　しょうがない　トレーナー　なのだ!{EOS}"
	.byte 0x02, 0x2C, 0x2D, 0x00, 0x08, 0x41, 0x06, 0x3E, 0x16, 0x00, 0x05, 0x2A, 0x15, 0x02, 0x00
	.globl gText_Rom_255918
gText_Rom_255918: @ 0x08255918
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255918) > 0x6
	.error "gText_Rom_255918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255918) < 0x6
	.space 0x6 - (. - gText_Rom_255918)
	.endif
	@ analyzed canonical ROM range 0x0825591E-0x08255983
	@ semantic recovery: script_data; byte-verified against linked ROM
MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashAction: @ 0x0825591E
	.string "いわくだき　した{EOS}"
MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashStory: @ 0x08255927
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nいわくだきを　つかった　そうだ!\p{STR_VAR_3}は　いわを　みたら\nくだかずに　おれない　トレーナー　なのだ!{EOS}"
	.byte 0x1B, 0x50, 0x0A, 0x0C, 0x00, 0x41, 0x02, 0x0D, 0x07, 0x00
	.globl gText_Rom_255984
gText_Rom_255984: @ 0x08255984
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255984) > 0x6
	.error "gText_Rom_255984 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255984) < 0x6
	.space 0x6 - (. - gText_Rom_255984)
	.endif
	@ analyzed canonical ROM range 0x0825598A-0x082559E8
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0825598A: @ 0x0825598A
.Lbatch81_text_start_EventText_JP_0825598A: @ 0x0825598A
	.string "ひっこし　した{EOS}"
MauvilleCity_PokemonCenter_1F_Text_MovedBasesStory: @ 0x08255992
	.string "{STR_VAR_3}という\nトレーナーの　はなし　だが……\pなんと　{STR_VAR_1}かいも\nひみつきちを　ひっこし　したそうだ!\p{STR_VAR_3}は　ひっこしが\nとっても　すきな　トレーナー　なのだ!{EOS}"
	.byte 0x1A, 0x18, 0x1F, 0x08, 0x28, 0x00
	.globl gText_Rom_2559E9
gText_Rom_2559E9: @ 0x082559E9
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_2559E9) > 0x6
	.error "gText_Rom_2559E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2559E9) < 0x6
	.space 0x6 - (. - gText_Rom_2559E9)
	.endif
	@ analyzed canonical ROM range 0x082559EF-0x082559F4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x1A, 0x18, 0x29, 0x2D, 0x00, 0x12
